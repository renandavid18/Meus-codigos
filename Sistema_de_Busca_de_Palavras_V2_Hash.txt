    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>

    #define MAX_PALAVRA 100
    #define MAX_EXCLUSAO 500
    #define TAM_HASH 512

    char exclusao[MAX_EXCLUSAO][MAX_PALAVRA];
    int total_exclusao = 0;

    void converterMinuscula(char *str){
        for(int i = 0; str[i]; i++){
            str[i] = (char)tolower((unsigned char)str[i]);
        }
    }

    
    void carregarExclusao(char nomeArquivo[]){
        FILE *fp = fopen(nomeArquivo, "r");
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
                strcpy(exclusao[total_exclusao], buffer);
                total_exclusao++;
            }
        }
        fclose(fp);

        int i, j;
        for(i=0;i<total_exclusao-1;i++){
            for(j=0;j<total_exclusao-i-1;j++){
                if(strcmp(exclusao[j], exclusao[j + 1]) > 0){
                    char temp[MAX_PALAVRA];
                    strcpy(temp, exclusao[j]);
                    strcpy(exclusao[j], exclusao[j + 1]);
                    strcpy(exclusao[j + 1], temp);
                }
            }
        }
    }


    int estaNaExclusao(char palavra[]){
        int ini = 0, fim = total_exclusao - 1;
        while(ini<=fim){
            int meio = (ini + fim) / 2;
            int cmp = strcmp(palavra, exclusao[meio]);
            if(cmp==0) return 1;
            if(cmp<0) fim = meio - 1;
            else ini = meio + 1;
        }
        return 0;
    }

    
    typedef struct NoHash{
        char palavra[MAX_PALAVRA];
        int ocorrencias;
        struct NoHash *prox;
    } NoHash;

    NoHash *tabela[TAM_HASH];


    int calcularHash(char palavra[]){
        int i, soma=0;
        for(i=0;palavra[i] != '\0';i++){
            soma += palavra[i];
        }
        return soma % TAM_HASH;
    }

    void inserirHash(char palavra[]){
        int idx = calcularHash(palavra);
        NoHash *atual = tabela[idx];

        while(atual!=NULL){
            if(strcmp(atual->palavra, palavra)==0){
                atual->ocorrencias++;
                return;
            }
            atual = atual->prox;
        }

        NoHash *novo = malloc(sizeof(NoHash));
        
        if(novo==NULL){ 
            printf("Erro de memoria\n");
            exit(1);
        }

        strcpy(novo->palavra, palavra);
        novo->ocorrencias = 1;
        novo->prox = tabela[idx];
        tabela[idx] = novo;
    }


    int buscarHash(char palavra[]){
        int idx = calcularHash(palavra);
        NoHash *atual = tabela[idx];
        while(atual!=NULL){
            if(strcmp(atual->palavra, palavra)==0){
                return atual->ocorrencias;
            }
            atual = atual->prox;
        }
        return 0;
    }


    void liberarHash(){
        for(int i=0;i<TAM_HASH;i++){
            NoHash *atual = tabela[i];
            while(atual!=NULL){
                NoHash *prox = atual->prox;
                free(atual);
                atual = prox;
            }
        }
    }

    
    void processarPalavra(char palavra[]){
        converterMinuscula(palavra);
        if(strlen(palavra)<=1 || estaNaExclusao(palavra)) return;
        inserirHash(palavra);
    }

    
    void lerArquivo(char nomeArquivo[]){
        FILE *fp = fopen(nomeArquivo, "r");
        if(!fp){
            printf("Erro ao abrir o arquivo %s\n", nomeArquivo);
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

        for(i=0;i<TAM_HASH;i++){
            tabela[i] = NULL;
        }

        printf("Digite o nome do arquivo de exclusao: ");
        scanf("%s", arqExclusao);
        carregarExclusao(arqExclusao);

        printf("Quantos arquivos deseja ler? ");
        scanf("%d", &quantidadeArquivos);
        
        if(quantidadeArquivos <= 0){
            printf("Quantidade invalida.\n");
            return 1;
        }

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
            printf("Ocorrencias: %d\n", buscarHash(palavra));
        }

        liberarHash();
        return 0;
    }