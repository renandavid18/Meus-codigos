   #include <stdio.h>
   #include <stdlib.h>
   #include <locale.h>
   #include <string.h>


    typedef struct Funcionario{

        char nome[50];
        int idade;
        char cargo[30];
        int CPF;

    }fun;
    

    int main(){
        int i, j = 9, k = 0, n, d = 1, h = 1; 
        fun funcio[100];

        while(d != 1){
            for(i=0;i<=n;i++){

                printf("Informe a as seguintes informações do %d- Funcionário: \n\n");

                printf("Nome: ");
                fgets(funcio[i].nome, 50, stdin);
                fflush(stdin);

                printf("\nCargo: ");
                fgets(funcio[i].cargo, 30, stdin);
                fflush(stdin);

                printf("\nIdade: ");
                scanf("%d", &funcio[3].idade);

                printf("\nCPF: ");
                scanf("%d", &funcio[3].CPF);
            
                
                while(k==1){
            
                    printf("Deseja ver seus funcionários?");
                    printf("(1) Sim | (0) Não ");
                    scanf("%d", j);

                    switch(j){
                        case 1:
                            for(i=0;i<=2;i++){
                                printf("Informações do funcionário: \n");
                                printf("Nome: %s\n", funcio[i].nome);
                                printf("Cargo: %s\n", funcio[i].cargo);
                                printf("Idade: %d\n", funcio[i].idade);
                                printf("CPF: %d\n", funcio[i].CPF);
                            }
                            k = 0;
                        break;

                        case 0:
                            
                            k = 0;
                            break;
                            
                        default:
                            printf("Opção inválida tente novamente...\n");
                            k = 1;
                    }
                }
                printf("Deseja adiocionar mais 1 funcionário?");
                printf("(1) Sim | (0) Não ");
                scanf("%d", h);

                if (h == 0) break;
            }
        }
    }