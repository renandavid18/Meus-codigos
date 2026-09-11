    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    
    
    #define MAX_PALAVRA 100
    #define MAX_EXCLUSAO 500
	
	// Lista de palavras de exclusão
    char *exclusao[MAX_EXCLUSAO];
    int total_exclusao=0;
    
	// Converte todas as letras da string para minúsculo
    void converterMinuscula(char *str){
        for(int i=0;str[i];i++){
            str[i] = (char)tolower((unsigned char)str[i]);
        }
    }  

	// Lê o arquivo de exclusão, armazena e ordena as palavras
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
		// Aqui ordena lista usando Bubble Sort
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

	// Verifica se a palavra está na lista de exclusão usando busca binária
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

    // Nó da árvore AVL
    typedef struct No{
        char palavra[MAX_PALAVRA];
        int ocorrencias;
        int altura;
        struct No *esq, *dir;
    } No;

    No *raiz = NULL;

	// Retorna a altura do nó
    int altura(No *no){ 
        return no ? no->altura : 0; 
    }

	// Retorna o maior valor
    int max(int a, int b){ 
        return a > b ? a : b; 
    }
	
	// Faz a rotação para a direita
    No *rotacaoDireita(No *y){
        No *x = y->esq;
        No *t2 = x->dir;
        x->dir = y;
        y->esq = t2;
        y->altura = 1 + max(altura(y->esq), altura(y->dir));
        x->altura = 1 + max(altura(x->esq), altura(x->dir));
        return x;
    }
	
	// Faz a rotação para a esquerda
    No *rotacaoEsquerda(No *x){
        No *y = x->dir;
        No *t2 = y->esq;
        y->esq = x;
        x->dir = t2;
        x->altura = 1 + max(altura(x->esq), altura(x->dir));
        y->altura = 1 + max(altura(y->esq), altura(y->dir));
        return y;
    }
	
	// Coloca a palavra na árvore AVL
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
		
		// Casos de rotação
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

	// Aqui busca a palavra na AVL
    int buscar(No *raiz, char palavra[]){
        if(!raiz) return 0;
        int cmp = strcmp(palavra, raiz->palavra);
        if(cmp==0) return raiz->ocorrencias;
        return (cmp<0) ? buscar(raiz->esq, palavra) : buscar(raiz->dir, palavra);
    }

	// Libera a memória da árvore
    void liberarArvore(No *no){
        if(!no) return;
        liberarArvore(no->esq);
        liberarArvore(no->dir);
        free(no);
    }

    // Processa palavra antes de inserir
    void processarPalavra(char palavra[]){ 
        
        converterMinuscula(palavra);
        
        if(strlen(palavra)<=1 || estaNaExclusao(palavra)) return;
        raiz = inserir(raiz, palavra);
    }

	// Lê arquivo e separa palavras
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
        int i, f=0, quantidadeArquivos;
        char arqExclusao[100], arqTexto[100], palavra[MAX_PALAVRA];
		FILE *teste = NULL;
        printf("===========Versao com a Arvore AVL===========\n\n\n");
	    
	    // Pede o arquivo de exclusão e verifica se existe
		do{
	        printf("Digite o nome do arquivo de exclusao: ");
	        scanf("%s", arqExclusao);
	        
	        teste = fopen(arqExclusao, "r");
	        
	        if(teste==NULL) printf("Nome invalido ou arquivo nao encontrado! Tente novamente.\n\n");
	        else fclose(teste); 
	    }while(teste==NULL);
	    
        carregarExclusao(arqExclusao);
		
		// Verifica se a quantidadde é maior que 0
		while(f==0){
		
		printf("\n\nQuantos arquivos deseja ler? ");
        scanf("%d", &quantidadeArquivos);
        
		if(quantidadeArquivos <= 0) printf("Quantidade invalida.\n");
		else f=1; 
		}
    
        // Lê todos os arquivos informados pelo usuário
        for(i=0;i<quantidadeArquivos;i++){
			do{
	            printf("\n\nDigite o nome do arquivo %d: ", i + 1);
	            scanf("%s", arqTexto);
	            teste = fopen(arqTexto, "r");
	            
				if(teste==NULL) printf("Nome invalido ou arquivo nao encontrado! Tente novamente.\n");
	            else fclose(teste);
	            
	        }while(teste==NULL);
            lerArquivo(arqTexto);
    	}
        printf("\nArquivos processados com sucesso!\n");
        
        system("pause");
		system("cls");
		fflush(stdin);
		
        printf("===========Versao com a Arvore AVL===========\n\n\n");
        while(1){
            printf("\nDigite uma palavra para buscar (0 para sair): ");
            scanf("%s", palavra);
            if(strcmp(palavra, "0")==0) break;

            converterMinuscula(palavra);
            printf("Ocorrencias: %d\n", buscar(raiz, palavra));
        }
	
		// Libera toda a memória 
        liberarArvore(raiz);
        for(i=0;i<total_exclusao;i++){
            free(exclusao[i]);
        }
        return 0;
    }