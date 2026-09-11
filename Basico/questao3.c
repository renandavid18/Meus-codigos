    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>

    void criarMatriz(int lin, int col, int mat[lin][col]){

        int i, j, f=0;
        while(f==0){

            printf("\nDigite os elementos da matriz:\n");

            for(i=0;i<lin;i++){

                for(j=0;j<col;j++){

                    printf("Elemento [%d][%d]: ", i+1, j+1);
                    scanf("%d", &mat[i][j]);
                }
            }

            system("pause");
            system("cls");

            printf("\nverifique se a sua matriz está correta: ");
            printf("\n\nMatriz[%dX%d]:\n", lin, col);

            for(i=0;i<lin;i++){

                for(j=0;j<col;j++){
                    printf("%d", mat[i][j]);

                    if(j<col-1) printf(" | ");
                    
                }
                printf("\n");
            }
            printf("Sua matriz está correta?\n (1) Sim | (0) Não \n");
            scanf("%d", &f);
            system("cls");
        }
    }



    void verificarSimetria(int lin, int col, int mat[lin][col]){

        int i, j, a;

        printf("Matriz[%dX%d]:\n", lin, col);

        for(a=0;a<lin;a++){

            for(j=0;j<col;j++){

                printf("%d", mat[a][j]);

                if(j<col-1){

                    printf(" | ");
                }
            }
            printf("\n");
        }

        if(lin!=col){

            printf("\nA matriz não é simétrica\n");
            printf("Uma matriz simétrica deve possuir o mesmo número de linhas e colunas\n");
            return;
        }

        for(i=0;i<lin;i++){

            for(j=0;j<col;j++){

                if(mat[i][j] != mat[j][i]){

                    printf("\nA matriz não é simétrica\n");
                    return;
                }
            }
        }

        printf("\nA matriz é simétrica\n");
    }



    int main(){

        int lin, col, h, g=0;

        setlocale(LC_CTYPE, "Portuguese");

        while(g==0){

            printf("Esse programa verifica se uma matriz é simétrica\n");

            printf("\nInforme os seguintes dados de sua matriz");

            do{

                printf("\nDigite o número de linhas: ");
                scanf("%d", &lin);

                if(lin<=0){

                    printf("\nERRO! O número de linhas deve ser maior que zero\n");
                }

            }while(lin<=0);

            do{

                printf("\nDigite o número de colunas: ");
                scanf("%d", &col);

                if(col<=0){

                    printf("\nERRO! O número de colunas deve ser maior que zero\n");
                }

            }while(col<=0);

            int mat[lin][col];

            criarMatriz(lin, col, mat);

            verificarSimetria(lin, col, mat);

            do{

                printf("\nDeseja refazer o programa?\n");
                printf("(1) Sim | (0) Não: ");
                scanf("%d", &h);

                if(h!=0 && h!=1){

                    printf("\nERRO! Digite apenas 0 ou 1.\n");
                }

            }while(h!=0 && h!=1);

            if(h==0){

                printf("\nFinalizando...\n");
                system("pause");
                g=1;

            }else{

                printf("\nReiniciando...\n");
                system("pause");
            }

            system("cls");
        }

        return 0;
    }