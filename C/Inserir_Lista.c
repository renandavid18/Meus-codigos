    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>
    #include <string.h>
    
    typedef struct NO{
        char nome[50];
        struct NO* prox;
    }NO;

    typedef struct lista{
        NO* ini;
        NO* fim;
    }lista;

    lista l;

    void insereNoInicio(char* elemento){
        NO *ptr = (NO*)malloc(sizeof(NO));
        strcpy(ptr->nome, elemento);
        
        if(l.ini == NULL){
            ptr->prox = NULL;
            l.fim = ptr;
        }else{
            ptr->prox = l.ini;
        }
        l.ini = ptr;
    }

    void insereNoFim(char* elemento){
        NO *ptr = (NO*)malloc(sizeof(NO));
        strcpy(ptr->nome, elemento);
        ptr->prox = NULL;
        
        if(l.ini == NULL){
            l.fim = ptr;
            l.ini = ptr;
        }else{
            l.fim->prox = ptr;
            l.fim = ptr;
        }
    }

    char* removeDoInicio(){
        if (l.ini == NULL){
            printf("Lista Vazia!\n");
            return NULL;
        }

        NO* ptr = l.ini;
        char* elemento = (char*) malloc(sizeof(char) * 50);
        strcpy(elemento, ptr->nome);

        l.ini = l.ini->prox;
        ptr->prox = NULL;
            
        if (l.ini == NULL) {
            l.fim = NULL;
        }
        
        ptr->prox = NULL;
        free(ptr);
        return elemento;
    }

    char* removeDoFim(){

        if (l.ini == NULL) {
            printf("Lista Vazia!\n");
            return NULL;
        }

        NO* ptr = l.fim;
        char* elemento = (char*) malloc(sizeof(char) * 50);
        strcpy(elemento, ptr->nome);
        
        if (l.ini == l.fim) {
            l.ini = NULL;
            l.fim = NULL;
        }else {
            NO* anterior = l.ini;
            while (anterior->prox != l.fim) {
                anterior = anterior->prox;
            }
            anterior->prox = NULL;
            l.fim = anterior;
        }
        free(ptr);
        return elemento;
    }

    void imprimir(){
        NO* ptr = l.ini;
        printf("Inicio -> ");
        while(ptr != NULL){
            printf("%s ", ptr->nome);
            ptr = ptr->prox;
        }
        printf("<- Fim\n\n");
    }

    void menu(){
        printf("1 - Para inserir no inicio da lista\n");
        printf("2 - Para inserir no fim da lista\n");
        printf("3 - Remover o primeiro nome da lista\n");
        printf("4 - Remover o ultimo nome da lista\n");
        printf("5 - Para imprimir o conteúdo da lista\n");
        printf("0 - Para Finalizar a lista\n");
        
    }
    int main(void){

        setlocale(LC_CTYPE, "Portuguese");
        char nome[50];
        int op;

        l.ini = NULL;
        l.fim = NULL;

        do{
            system("cls");
            menu();
            scanf("%d", &op);
            fflush(stdin);
            system("cls");

            switch(op){
                case 0:
                    break;
                
                case 1:
                    printf("Informe o dado que será inserido no inicio: \n");
                    scanf(" %49[^\n]", nome);
                    fflush(stdin);
                    insereNoInicio(nome);
                    system("pause");
                break;
                
                case 2: 
                    printf("Informe o dado que será inserido no Final: \n");
                    scanf(" %49[^\n]", nome);
                    fflush(stdin);
                    insereNoFim(nome);
                    system("pause");

                break;
                
                case 3:
                    printf("Removendo o primeiro nome da lista!\n");
                    removeDoInicio();

                break;

                case 4:
                    printf("Removendo o último nome da lista!\n");
                    removeDoFim();
                
                break;

                case 5:
                    imprimir();
                    system("pause");

                break;

                default:

                    printf("Opção inválida!\n");
                    break;
            }
        }while(op != 0);
    
    }


