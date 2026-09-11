    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>

    void criarMatriz(int n, int mat[n][n]){

        int i, j, f=0;

        while(f==0){
            printf("\nDigite os elementos da matriz:\n");

            for(i=0;i<n;i++){

                for(j=0;j<n;j++){

                    printf("Elemento [%d][%d]: ", i+1, j+1);
                    scanf("%d", &mat[i][j]);
                }
            }
            system("pause");
            system("cls");

            printf("\nVerifique se a sua matriz está correta: ");
            printf("\n\nMatriz[%dX%d]:\n", n, n); 

        for(i=0;i<n;i++){ 

            for(j=0;j<n;j++){

                printf("%-3d", mat[i][j]);
                
                if(j<n-1) printf(" | ");
            }
            printf("\n");
        }
        printf("\nSua matriz está correta?\n (1) Sim | (0) Não \n");
        scanf("%d", &f);
        system("cls");
        }
    }


    int somaSubmatriz(int n, int mat[n][n], int linha, int coluna, int k){

        int i, j, soma=0;

        for(i=linha;i<linha+k;i++){

            for(j=coluna;j<coluna+k;j++){

                soma += mat[i][j];
            }
        }

        return soma;
    }

    void encontrarMaiorSubmatriz(int n, int k, int mat[n][n]){

        int i, j, a, b, somaAtual,  maiorSoma,  linhaMaior=0, colunaMaior=0;

        maiorSoma = somaSubmatriz(n, mat, 0, 0, k);

        for(i=0;i<=n-k;i++){

            for(j=0;j<=n-k;j++){

                somaAtual = somaSubmatriz(n, mat, i, j, k);

                if(somaAtual > maiorSoma){

                    maiorSoma = somaAtual;
                    linhaMaior = i;
                    colunaMaior = j;
                }
            }
        }

        printf("\nMaior soma encontrada: %d\n", maiorSoma);

        printf("\nSubmatriz %dx%d de maior soma:\n\n", k, k);

        for(a=linhaMaior;a<linhaMaior+k;a++){

            for(b=colunaMaior;b<colunaMaior+k;b++){

                printf("%-3d", mat[a][b]);

                if(b<colunaMaior+k-1){
                    printf(" | ");
                }
            }

            printf("\n");
        }
    }

    int main(){

        int n, k, h, g=0;

        setlocale(LC_CTYPE, "Portuguese");

        while(g==0){

            printf("Esse programa encontra a submatriz quadrada de maior soma\n");

            do{

                printf("\nDigite o tamanho da matriz NxN: ");
                scanf("%d", &n);

                if(n<=0){

                    printf("\nERRO! O tamanho da matriz deve ser maior que zero\n");
                }

            }while(n<=0);

            int mat[n][n];

            criarMatriz(n, mat);

            do{

                printf("\nDigite o tamanho da submatriz KxK: ");
                scanf("%d", &k);

                if(k<=0 || k>n){

                    printf("\nERRO! K deve estar entre 1 e %d\n", n);
                }

            }while(k<=0 || k>n);

            encontrarMaiorSubmatriz(n, k, mat);

            do{

                printf("\nDeseja refazer o programa?\n");
                printf("(1) Sim | (0) Não: ");
                scanf("%d", &h);

                if(h!=0 && h!=1){

                    printf("\nERRO! Digite apenas 0 ou 1\n");
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