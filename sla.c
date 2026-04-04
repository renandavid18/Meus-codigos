    #include <stdlib.h>
    #include <locale.h>
    #include <stdio.h>
    
    int main() {
        
        int op, i, vlt, n;  // vlt = valor da tabuada
        

        setlocale(LC_CTYPE, "Portuguese");
        i = 0;

        while(i != 1) {  
            
            printf("Aqui Iremos mostrar a tabuada de um número qualquer! \n");
            printf("Para começar você deseja fazer tabuada de um numero com virgula?");
            printf("(1) Sim | (0) Não (Numero Inteiro) \n"); 
            scanf("%d", op);

            switch(op) {
                
                case 0:
                    printf("Complete com o valor da tabuada que você deseja");
                    printf("Tabuada de 1 á ");
                    scanf("%d", vlt);


                break;

                case 1:

            }
        }   
    }