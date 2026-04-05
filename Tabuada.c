    #include <stdlib.h>
    #include <locale.h>
    #include <stdio.h>
    
    int main() {
        
        int op, i, vlt, n, j, k, d, c;  // vlt = valor da tabuada
        double vlt1, k1, v;
        

        setlocale(LC_CTYPE, "Portuguese");
        i = 0;
        d = 1;

        while(i != 1) {  
            
            printf("Aqui Iremos mostrar a tabuada de um número qualquer! \n");
            printf("Para começar você deseja fazer tabuada de um numero com virgula? \n");
            printf("(1) Sim | (0) Não (Numero Inteiro) \n"); 
            scanf("%d", &op);

            switch(op) {
                
                case 0:
                    
                    printf("Complete a frase com o valor da tabuada que você deseja:\n");
                    printf("Tabuada de 1 á ");
                    scanf("%f", &v);
                    printf("\n Informe o valor que você deseja ver na tabuada: \n");
                    scanf("%d", &vlt);
                    
                    printf("A tabuada de %d é", vlt);
                    printf("\n============== TABUADA ==============\n\n");
                    
                    for(j=0; j<=v; j++){

                        k = j * vlt;
                        printf("%d X %d = %d \n", vlt1, j, k);

                    }
                    
                    system("pause");
                    
                    while(d = 1){

                        printf("Deseja continuar? \n");
                        printf("(1) Sim | (0) Não \n");
                        scanf("%d", &c);

                        if(c = 0){

                            i = 1;
                            d = 0;

                        }
                        if(c = 1){

                            i = 0;
                            d = 0;

                        }else{

                            printf("Opçção inválida verifique sua resposta!");
                            d = 1;

                        }

                    } 
                break;

                case 1:

                    printf("Complete com o valor da tabuada que você deseja \n");
                    printf("Tabuada de 1 á ");
                    scanf("%lf", &v);
                    printf("Me informa o o valor que você deseja ver a tabuada: \n");
                    scanf("%lf", &vlt1);
                    
                    printf("A tabuada de %lf é \n", vlt1);
                    printf("\n============== TABUADA ==============\n\n");

                    for(j=0; j<=v; j++){

                        k1 = j * vlt1;
                        printf("%lf X %d = %lf \n", vlt1, j, k1);

                    }
                    
                    system("pause");
                    
                    while(d = 1){

                        printf("Deseja continuar? \n");
                        printf("(1) Sim | (0) Não \n");
                        scanf("%d", &c);

                        if(c = 0){

                            i = 1;
                            d = 0;

                        }
                        if(c = 1){

                            i = 0;
                            d = 0;

                        }else{

                            printf("Opçção inválida verifique sua resposta!");
                            d = 1;
                        }
                    } 
                break;

                default:

                    printf("Você digitou uma opção inválida tente novamente!");
            }
        }
        
        printf("Até a próxima!!!");
        system("pause");

    }