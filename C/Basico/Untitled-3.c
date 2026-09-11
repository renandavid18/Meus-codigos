    #include <stdlib.h>
    #include <stdio.h>
    #include <locale.h>
    #include <windows.h>

    int main(){
        setlocale(LC_CTYPE,"Portuguese");
        double d;
        int i, c=0, s=0, h=0, j;

        while(s==0){
            printf("Digite um valor qualquer e verificaremos: \nSe ele é negativo ou positivo e sua tabuada\n");
            scanf("%lf", &d);

            if(d > 0) printf("\nNúmero Positivo\n");
            else if(d == 0) printf("\nSeu Número é Zero\n");
            else if(d < 0) printf("\nNúmero Negativo\n");
            
            system("pause");

            if(d != 0){

                printf("\nSua tabuada é de 1 até: ");
                scanf("%d", &c);
                printf("\n=============Tabuada=============");

                for(i=1;i<=c;i++){

                    printf("\n%d X %lf  =  %lf\n", i, d, d*i);
                }
            }else printf("\nPor seu número ser 0 ele não tem tabuada");
            
            while(c == 1){
                
                printf("\nDeseja refazer com outro valor?");
                printf("\n(1) Sim | (0) Não \n");
                scanf("%d", &j);

                if(j == 0){
                    c = 0;
                    s = 1;
                }else if(j==1){
                    c =0;
                }
                
            }
        }
        printf("Programa concluído!");
        system("pause");
        
    }