    #include <stdlib.h>
    #include <locale.h>
    #include <stdio.h>
    
    int main() {
        
        int op, i, vlt, n;  // vlt = valor da tabuada
        double vlt2, n;

        setlocale(LC_CTYPE, "Portuguese");
        i = 1

        while (i != 1){  
            
            printf("Aqui Iremos mostrar a tabuada de um número qualquer! \n");
            printf("Para começar você deseja fazer tabuada de um numero com virgula?")
            printf("(1) Sim | (0) Não (Numero Inteiro) \n"); 
            scanf("%d", op);

            switch (op) {
                
                case 1:
                    printf("Digite o valor da tabuada que você deseja");
                    printf("Se digitar 30 vai ter uma tabuada de 1 á 30 se 2 vai ter de 1 á 2.\n");
                    scanf("vlt");

            }

        }

        
    }