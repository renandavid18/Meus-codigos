    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    
    
    #define MAX_PALAVRA 100
    #define MAX_EXCLUSAO 500

    char *exclusao[MAX_EXCLUSAO];
    int total_exclusao=0;


    void converterMinuscula(char *str){
        for(int i=0;str[i];i++){
            str[i] = (char)tolower((unsigned char)str[i]);
        }
    }  


    void carregarExclusao(char arquivo[]){
        int i, j;
        FILE *fp = fopen(arquivo, "r");
        if(!fp){
            printf("Erro ao abrir lista de exclusao\n");
            return;
        }

        char buffer[MAX_PALAVRA];
        while(fgets(buffer, sizeof(buffer), fp)){
            buffer[strcspn(buffer, "\n\r")] = '\0';
            
            converterMinuscula(buffer);

            if(strlen(buffer)==0) continue;

            if(total_exclusao<MAX_EXCLUSAO){
                exclusao[total_exclusao] = malloc(strlen(buffer) + 1);
                
                if(exclusao[total_exclusao]==NULL){
                printf("Erro de memoria\n");
                exit(1);
                }

                strcpy(exclusao[total_exclusao], buffer);
                total_exclusao++;
            }
        }
        fclose(fp);

        for(i=0;i<total_exclusao-1;i++){
            for(j=0;j<total_exclusao-i-1;j++){
                if(strcmp(exclusao[j], exclusao[j + 1])>0){
                    char *temp = exclusao[j];
                    exclusao[j] = exclusao[j + 1];
                    exclusao[j+1] = temp;
                }
            }
        }
    }


    int estaNaExclusao(char palavra[]){
        int ini=0, fim = total_exclusao - 1;
        while(ini<=fim){
            int meio = (ini + fim) / 2;
            int cmp = strcmp(palavra, exclusao[meio]);
            if(cmp==0) return 1;
            if(cmp<0) fim = meio - 1;
            else ini = meio + 1;
        }
        return 0;
    }

    
    typedef struct No{
        char palavra[MAX_PALAVRA];
        int ocorrencias;
        int altura;
        struct No *esq, *dir;
    } No;


    No *raiz = NULL;


    int altura(No *no){ 
        return no ? no->altura : 0; 
    }


    int max(int a, int b){ 
        return a > b ? a : b; 
    }


    No *rotacaoDireita(No *y){
        No *x = y->esq;
        No *t2 = x->dir;
        x->dir = y;
        y->esq = t2;
        y->altura = 1 + max(altura(y->esq), altura(y->dir));
        x->altura = 1 + max(altura(x->esq), altura(x->dir));
        return x;
    }

    No *rotacaoEsquerda(No *x){
        No *y = x->dir;
        No *t2 = y->esq;
        y->esq = x;
        x->dir = t2;
        x->altura = 1 + max(altura(x->esq), altura(x->dir));
        y->altura = 1 + max(altura(y->esq), altura(y->dir));
        return y;
    }

    No *inserir(No *raiz, char palavra[]){
        if(!raiz){
            No *novo = malloc(sizeof(No));
            
            if(novo==NULL){
                printf("Erro de memoria\n");
                exit(1);
            }

            strcpy(novo->palavra, palavra);
            novo->ocorrencias = 1;
            novo->altura = 1;
            novo->esq = novo->dir = NULL;
            return novo;
        }

        int cmp = strcmp(palavra, raiz->palavra);
        
        if(cmp<0) raiz->esq = inserir(raiz->esq, palavra);
        else if(cmp>0) raiz->dir = inserir(raiz->dir, palavra);
        else{
            raiz->ocorrencias++; 
            return raiz; 
        }

        raiz->altura = 1 + max(altura(raiz->esq), altura(raiz->dir));
        int fb = altura(raiz->esq) - altura(raiz->dir);

        if(fb>1 && strcmp(palavra, raiz->esq->palavra)<0) return rotacaoDireita(raiz);
        
        if(fb < -1 && strcmp(palavra, raiz->dir->palavra)>0) return rotacaoEsquerda(raiz);
        
        if(fb>1 && strcmp(palavra, raiz->esq->palavra)>0){   
            raiz->esq = rotacaoEsquerda(raiz->esq);
            return rotacaoDireita(raiz);
        }

        if(fb < -1 && strcmp(palavra, raiz->dir->palavra)<0){
            raiz->dir = rotacaoDireita(raiz->dir);
            return rotacaoEsquerda(raiz);
        }
        return raiz;
    }


    int buscar(No *raiz, char palavra[]){
        if(!raiz) return 0;
        int cmp = strcmp(palavra, raiz->palavra);
        if(cmp==0) return raiz->ocorrencias;
        return (cmp<0) ? buscar(raiz->esq, palavra) : buscar(raiz->dir, palavra);
    }


    void liberarArvore(No *no){
        if(!no) return;
        liberarArvore(no->esq);
        liberarArvore(no->dir);
        free(no);
    }

    
    void processarPalavra(char palavra[]){ 
        
        converterMinuscula(palavra);
        
        if(strlen(palavra)<=1 || estaNaExclusao(palavra)) return;
        raiz = inserir(raiz, palavra);
    }


    void lerArquivo(char arquivo[]){        
        FILE *fp = fopen(arquivo, "r");
        
        if(!fp){
            printf("Erro ao abrir %s\n", arquivo); 
            return; 
        }
        char linha[1000];

        while(fgets(linha, sizeof(linha), fp)){
            char *token = strtok(linha, "- ,.;:!?()[]{}\"'\n\r\t");
            
            while(token){
                processarPalavra(token);
                token = strtok(NULL, "- ,.;:!?()[]{}\"'\n\r\t");
            }
        }
        fclose(fp);
    }


    int main(){
        int i, quantidadeArquivos;
        char arqExclusao[100], arqTexto[100];

        printf("Digite o nome do arquivo de exclusao: ");
        scanf("%s", arqExclusao);
        carregarExclusao(arqExclusao);

        printf("Quantos arquivos deseja ler? ");
        scanf("%d", &quantidadeArquivos);

        for(i=0;i<quantidadeArquivos;i++){
            printf("Digite o nome do arquivo %d: ", i + 1);
            scanf("%s", arqTexto);
            lerArquivo(arqTexto);
        }

        printf("\nArquivos processados com sucesso!\n");

        char palavra[MAX_PALAVRA];
        while(1){
            printf("\nDigite uma palavra para buscar (0 para sair): ");
            scanf("%s", palavra);
            if(strcmp(palavra, "0")==0) break;

            converterMinuscula(palavra);
            printf("Ocorrencias: %d\n", buscar(raiz, palavra));
        }

        liberarArvore(raiz);
        for(i=0;i<total_exclusao;i++){
            free(exclusao[i]);
        }
        return 0;
    }