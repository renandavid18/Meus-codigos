    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>
    #include <string.h>
    
    int main(void){

        setlocale(LC_CTYPE, "Portuguese");

        typedef struct info{
            char nome[40];
            double alt, peso;
        }info;

        info *p = (info*)malloc(sizeof(info));

        if(p == NULL){
            printf("Erro na alocação!\n");
        
        }else{
            printf("Insira seu nome:\n");
            scanf(" %39[^\n]s", p->nome);
            fflush(stdin);
            
            printf("Insira sua Altura:\n");
            scanf("%lf", &p->alt);
            
            printf("Infoma seu peso:\n");
            scanf("%lf", &p->peso);
            
            system("pause");
            system("cls");
            
            printf("|Nome: %s  | Altura: %.2f  | Peso: %.2f  |", p->nome, p->alt, p->peso);
            system("pause");
        }
        free(p);
        return 0;
    }