    #include <stdlib.h>
    #include <locale.h>
    #include <stdio.h>
    
    int main() {
        
        int op, v, i, vlt, n, j, k;  // vlt = valor da tabuada
        

        setlocale(LC_CTYPE, "Portuguese");
        i = 0;

        while(i != 1) {  
            
            printf("Aqui Iremos mostrar a tabuada de um número qualquer! \n");
            printf("Para começar você deseja fazer tabuada de um numero com virgula?");
            printf("(1) Sim | (0) Não (Numero Inteiro) \n"); 
            scanf("%d", &op);

            switch(op) {
                
                case 0:
                    
                    printf("Complete com o valor da tabuada que você deseja \n");
                    printf("Tabuada de 1 á ");
                    scanf("%d", &v);
                    printf("Me informa o o valor que vocÊ deseja ver a tabuada: \n");
                    scanf("%d", &vlt);
                    
                    printf("A tabuada de %d é", vlt);
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
                            d = 1;
                        }
                        if(c = 1){
                            i = 0;
                            d = 1;
                        }else{
                            d = 0;
                        }
                    } 
                break;

                case 1:

                    printf("Complete com o valor da tabuada que você deseja \n");
                    printf("Tabuada de 1 á ");
                    scanf("%d", &v);
                    printf("Me informa o o valor que vocÊ deseja ver a tabuada: \n");
                    scanf("%f", &vlt1);
                    
                    printf("A tabuada de %f é", vlt1);
                    for(j=0; j<=v; j++){
                        k = j * vlt1;
                        printf("%d X %d = %d \n", vlt1, j, k);
                    }
                    
                    system("pause");
                    
                    while(d = 1){
                        printf("Deseja continuar? \n");
                        printf("(1) Sim | (0) Não \n");
                        scanf("%d", &c);
                        if(c = 0){
                            i = 1;
                            d = 1;
                        }
                        if(c = 1){
                            i = 0;
                            d = 1;
                        }else{
                            d = 0;
                        }
                    } 

            }
        }   
    }