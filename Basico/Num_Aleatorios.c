    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <locale.h>
    #include <windows.h>
    #include <time.h>

    int main(){
        int i, j, num1[4][4], num[4][4], result[4][4], ale[4][4];
        

        srand(time(NULL));
        printf("Digite por favor os valores da Primeira Matriz 4X4: \n");
        
        for(i=0;i<4;i++){
            for(j=0;j<4;j++){
                printf("%d- Linha %d-Posicao: ", i+1, j+1);;
                scanf("%d", &num[i][j]);
                printf("\n");
            }
        }

        printf("\nDigite por favor os valores da Segunda Matriz 4X4: ");
        
        for(i=0;i<4;i++){
            for(j=0;j<4;j++){
                printf("%d- Linha %d-Posicao: ", i+1, j+1);;
                scanf("%d", &num1[i][j]);
                printf("\n");
            }
        }

        for(i=0;i<4;i++){
            for(j=0;j<4;j++){
                result[i][j] = num[i][j] + num1[i][j];
            }
        }

        for(i=0;i<4;i++){
            for(j=0;j<4;j++){
                ale[i][j] = 1 + rand() % 99;
            }
        }

        printf("\nValores da Primeira Matriz: \n");
        for(i=0;i<=4;i++){
            for(i=0;i<=4;i++){
                printf("%-4d  ", num[i][j]);
            }
            printf("\n");
        }

        printf("\nValores da Segunda Matriz: \n");
        for(i=0;i<=4;i++){
            for(i=0;i<=4;i++){
                printf("%-4d  ", num1[i][j]);
            }
            printf("\n");
        }

        printf("\nValores da Soma das Matrizes: \n");
        for(i=0;i<=4;i++){
            for(i=0;i<=4;i++){
                printf("%-4d  ", result[i][j]);
            }
            printf("\n");
        }

        printf("\nValores da Matriz Aleatoria: \n");
        for(i=0;i<=4;i++){
            for(i=0;i<=4;i++){
                printf("%-4d  ", num[i][j]);
            }
            printf("\n");
        }
        system("pause");
    }