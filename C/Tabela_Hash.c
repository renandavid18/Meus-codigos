    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
	
	// Define os tamanhos máximos e tamanho da tabela hash
    #define MAX_PALAVRA 100
    #define MAX_EXCLUSAO 500
    #define TAM_HASH 512

	// Armazena as palavras da lista de exclusão e o contador total
    char exclusao[MAX_EXCLUSAO][MAX_PALAVRA];
    int total_exclusao = 0;

	// Converte as palavras para minúsculo 
    void converterMinuscula(char *str){
        for(int i = 0; str[i]; i++){
            str[i] = (char)tolower((unsigned char)str[i]);
        }
    }

    // Lê arquivo de exclusão, armazena e ordena palavras
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

	// Verifica se palavra está na lista de exclusão usando busca binária
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

    // Estrutura do nó da tabela hash (lista encadeada)
    typedef struct NoHash{
        char palavra[MAX_PALAVRA];
        int ocorrencias;
        struct NoHash *prox;
    } NoHash;
    NoHash *tabela[TAM_HASH];

	// Gera índice da tabela somando caracteres da palavra
    int calcularHash(char palavra[]){
        int i, soma=0;
        for(i=0;palavra[i] != '\0';i++){
            soma += palavra[i];
        }
        return soma % TAM_HASH;
    }

	// Insere palavra na tabela hash ou incrementa ocorrências
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

	// Busca palavra na tabela hash e retorna ocorrências
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

	// Libera a memória alocada da tabela hash
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

    // Normaliza palavra e verifica exclusão antes de inserir
    void processarPalavra(char palavra[]){
        converterMinuscula(palavra);
        if(strlen(palavra)<=1 || estaNaExclusao(palavra)) return;
        inserirHash(palavra);
    }

    // Lê arquivo e separa palavras usando strtok
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
        int i, f=0, quantidadeArquivos;
        char arqExclusao[100], arqTexto[100];
		FILE *teste = NULL;
		
        for(i=0;i<TAM_HASH;i++){
            tabela[i] = NULL;
        }
	    printf("===========Versao com a Tabela Hash===========\n\n\n");
	    
	    // Pede o arquivo de exclusão e verifica se existe
        do{
	        printf("Digite o nome do arquivo de exclusao: ");
	        scanf("%s", arqExclusao);
	        
	        teste = fopen(arqExclusao, "r");
	        
	        if(teste==NULL) printf("Nome invalido ou arquivo nao encontrado! Tente novamente\n\n");
	        else fclose(teste); 
	    }while(teste==NULL);
	    
        carregarExclusao(arqExclusao);
		
		// Verifica se a quantidadde é maior que 0
        while(f==0){
			printf("\n\nQuantos arquivos deseja ler? ");
	        scanf("%d", &quantidadeArquivos);
	        
			if(quantidadeArquivos <= 0) printf("Quantidade invalida\n");
			else f=1; 
		}
		
		// Lê todos os arquivos informados pelo usuário
        for(i=0;i<quantidadeArquivos;i++){
            do{
	            printf("\n\nDigite o nome do arquivo %d: ", i + 1);
	            scanf("%s", arqTexto);
	            teste = fopen(arqTexto, "r");
	            
				if(teste==NULL) printf("Nome invalido ou arquivo nao encontrado! Tente novamente.\n\n");
	            else fclose(teste);
	            
	        }while(teste==NULL);
	        
            lerArquivo(arqTexto);
        }
        printf("\nArquivos processados com sucesso!\n");
		
		system("pause");
		system("cls");
		fflush(stdin);
        
        printf("===========Versao com a Tabela Hash===========\n\n\n");
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