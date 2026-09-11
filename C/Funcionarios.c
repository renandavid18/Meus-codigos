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
        int i, j = 9, k = 1, n = 1, d = 0, h = 1; 
        fun funcio[100];
        double salarioA = 2930.34, salarioB = 5423.84;

        setlocale(LC_CTYPE, "Portuguese");
        double *sal;

        sal = &salarioB;
        salarioA = *sal;

        while(d != 1){
            for(i=0;i<n;i++){

                printf("Informe a as seguintes informações do %d- Funcionário: \n\n", i+1);

                printf("Nome: ");
                fgets(funcio[i].nome, 50, stdin);
                fflush(stdin);

                printf("\nCargo: ");
                fgets(funcio[i].cargo, 30, stdin);
                fflush(stdin);

                printf("\nIdade: ");
                scanf("%d", &funcio[i].idade);

                printf("\nCPF: ");
                scanf("%d", &funcio[i].CPF);
            
                
                while(k==1){
            
                    printf("Deseja ver seus funcionários?");
                    printf("(1) Sim | (0) Não ");
                    scanf("%d", &j);

                    switch(j){
                        case 1:
                            for(int z=0;z<i+1;z++){
                                printf("Informações do funcionário: \n");
                                printf("Nome: %s\n", funcio[z].nome);
                                printf("Cargo: %s\n", funcio[z].cargo);
                                printf("Sálario: %.2f\n", salarioA);
                                printf("Idade: %d\n", funcio[z].idade);
                                printf("CPF: %d\n", funcio[z].CPF);
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
                scanf("%d", &h);

                if (h == 0) break;
                if (i >= 100) break;
            }
        }
    }