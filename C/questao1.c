    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>

    void criarMatriz(int lin, int col, int mat[lin][col]) {

    int i, j, s=0;
    while(s==0){
        printf("\nDigite os elementos da matriz:\n");

        for(i=0;i<lin;i++){

            for(j=0;j<col;j++){

                printf("Elemento [%d][%d]: ", i+1, j+1);
                scanf("%d", &mat[i][j]);
            }
        }
        
        system("cls");
        printf("\nverifique se a sua matriz está correta: ");
        printf("\n\nMatriz[%dX%d]:\n", lin, col);

        for(i=0;i<lin;i++){

            for(j=0;j<col;j++){
                printf("%-3d", mat[i][j]);

                if(j<col-1) printf(" | ");
                
            }
            printf("\n");
        }
        printf("Sua matriz está correta?\n (1) Sim | (0) Não \n");
        scanf("%d", &s);
        system("cls");
    }
}
    
    void encontrarPontoDeSela(int lin, int col, int mat[lin][col]){

        int i, j, k, menor, colunaMenor, PontoDeSela, a;
        int encontrou = 0;
        
        printf("Matriz[%dX%d]:\n", lin, col);
        for(a=0;a<lin;a++){

            for(j=0;j<col;j++){
                printf("%-3d", mat[a][j]);

                if(j<col-1) printf(" | ");
            }
            printf("\n");
        }
        
        for(i=0;i<lin;i++){

            menor = mat[i][0];
            colunaMenor = 0;

            for(j=1;j<col;j++){

                if(mat[i][j]<menor){
                    menor = mat[i][j];
                    colunaMenor = j;
                }
            }

            PontoDeSela = 1;

            for(k=0;k<lin;k++){

                if(mat[k][colunaMenor]>menor){
                    PontoDeSela = 0;
                    break;
                }
            }

            if(PontoDeSela){

                
                printf("\n\nPonto de sela encontrado!\n");
                printf("Valor: %d\n", menor);
                printf("Linha: %d\n", i+1);
                printf("Coluna: %d\n", colunaMenor+1);
                encontrou = 1;
                
            }
        }
        if(encontrou==0){

            printf("\n\nNão existe ponto de sela nessa matriz\n");
            system("pause");
        }
        system("pause");
    }


    int main(){
        setlocale(LC_CTYPE, "Portuguese");
        int lin, col, g=0, h;

        while(g==0){
            printf("Esse programa encontra os Pontos de Sela em uma matriz");

            printf("\nInforme os seguintes dados de sua matriz");
            printf("\nDigite o numero de linhas: ");
            scanf("%d", &lin);

            printf("\nDigite o numero de colunas: ");
            scanf("%d", &col);

            int mat[lin][col];

            criarMatriz(lin, col, mat);

            encontrarPontoDeSela(lin, col, mat);
            
            printf("Deseja refazer o programa?\n (1) Sim | (0) Não");
            scanf("%d", &h);

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