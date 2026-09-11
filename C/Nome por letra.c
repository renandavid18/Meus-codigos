    #include <stdlib.h>
    #include <stdio.h>
    #include <locale.h>

    int main(){
        
        setlocale(LC_CTYPE,"Portuguese");
        int i, j=1, c, h, d, a, f;
        

        printf("me informa quantos nomes você irá registrar por favor: ");
        scanf("%d", &d);
        char n[d][50];
        
        
        for(a=1;a<=d;a++){
            printf("\nMe infome quantas letras tem seu primeiro nome por favor: ");
            scanf(" %d", &c);

            for(i=1;i<=c;i++){

                printf("\nDigite a %d-letra do seu nome: ",i);
                scanf(" %c", &n[a][i]);       
                }
        }

        printf("\nDeseja ver os nomes? ");
        printf("\n(1) SIM | (0) Não \n");
        scanf(" %d", &f);
        if(f==1){
            for(a=1;a<=d;a++){
                printf("\nO %d nome é: ", a);
                for(i=1;i<=c;i++){
                    printf("%c", n[a][i]);
                }
            }
        }
        printf("\n");
        system("pause");
        return 0;
    }