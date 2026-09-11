    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>


    int verificaQuadrado(int lin, int col, int mat[lin][col], int linha, int coluna, int tamanho) {

        int i, j;

        if(linha+tamanho>lin || coluna+tamanho>col) return 0;

        for(i=linha;i<linha+tamanho;i++){

            for(j=coluna;j<coluna+tamanho;j++){

                if(mat[i][j] == 0) return 0;
            }
        }

        return 1;
    }


    void maiorQuadrado(int lin, int col, int mat[lin][col]) {

        int i, j, a, tamanho, maiorLado=0, linhaMaior=0, colunaMaior=0;

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

        for(i=0;i<lin;i++){

            for(j=0;j<col;j++){

                if(mat[i][j]==1){

                    tamanho = 1;

                    while(verificaQuadrado(lin, col, mat, i, j, tamanho)){

                        if(tamanho>maiorLado){

                            maiorLado = tamanho;
                            linhaMaior = i;
                            colunaMaior = j;
                        }

                        tamanho++;
                    }
                }
            }
        }

        if(maiorLado==0){

            printf("\nNao existe nenhuma submatriz formada por 1\n");
            return;
        }

        printf("\nMaior submatriz quadrada encontrada!\n");
        printf("Posição inicial: Linha %d, Coluna %d\n", linhaMaior + 1, colunaMaior + 1);
        printf("Lado do quadrado: %d\n", maiorLado);
        printf("Área da maior submatriz: %d\n", maiorLado * maiorLado);
    }


    void criarMatriz(int lin, int col, int mat[lin][col]){

        int i, j, f=0;

        printf("\nDigite os elementos da matriz (apenas 0 ou 1):\n");

        while(f==0){

            for(i=0;i<lin;i++){

                for(j=0;j<col; j++){

                    do{

                        printf("Elemento [%d][%d]: ", i + 1, j + 1);
                        scanf("%d", &mat[i][j]);

                        if(mat[i][j]!=0 && mat[i][j]!=1){

                            printf("\nERRO! Digite apenas 0 ou 1\n");

                        }

                    }while(mat[i][j]!=0 && mat[i][j]!=1);
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



    int main() {

        int lin, col, h, g=0;

        setlocale(LC_CTYPE, "Portuguese");

        while(g==0){

            printf("Esse programa encontra a maior submatriz quadrada formada por 1");

            printf("\nInforme os seguintes dados de sua matriz");

            do{
                printf("\nDigite o numero de linhas: ");
                scanf("%d", &lin);

                if(lin<=0){
                    printf("\nERRO! O numero de linhas deve ser maior que zero\n");
                }

            }while(lin<=0);

            do{
                printf("\nDigite o numero de colunas: ");
                scanf("%d", &col);

                if(col<=0){
                    printf("\nERRO! O numero de colunas deve ser maior que zero\n");
                }

            }while(col<=0);

            int mat[lin][col];

            criarMatriz(lin, col, mat);

            maiorQuadrado(lin, col, mat);
            
            do{

                printf("\nDeseja refazer o programa?\n");
                printf("(1) Sim | (0) Nao: ");
                scanf("%d", &h);

                if(h != 0 && h != 1){
                    printf("\nERRO! Digite apenas 0 ou 1\n");
                }

            }while(h != 0 && h != 1);

            if(h==0){

                printf("FInalizando...\n");
                system("pause");
                g=1;
            }else{

                printf("Reiniciando...\n");
                system("pause");
            }
            system("cls");
        }
        return 0;
    }
