    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>

    int main(void){

        setlocale(LC_CTYPE, "Portuguese");
        
        char jdv[3][3][1]={{'.', '.', '.'}, {'.', '.', '.'}, {'.', '.', '.'}};
        int i, n, j;
        


        printf("Bem vindo ao Jogo da velha!\n");
        printf("Podemos começar?\n");
        system("pause");

        for(i=0;i<=2;i++){
            for(j=0;j<=2;j++){
                printf(" %c |", jdv[i][j]);
            }
            printf("\n------------\n");
        }
        system("pause");
    }

        

        