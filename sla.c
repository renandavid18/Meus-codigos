    #include <stdlib.h>
    #include <locale.h>
    #include <stdio.h>
    
    int main() {
        
        int op, i, vlt, n, j, k;  // vlt = valor da tabuada
        

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
                    scanf("%d", &vlt);
                    
                    printf("A tabuada de %d é", vlt);
                    for(j=1; j<=vlt; j++){
                        k = j * vlt;
                        printf("j = %d")
                    }


                break;

                case 1:

            }
        }   
    }