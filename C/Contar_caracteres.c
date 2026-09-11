    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>
    #include <string.h>

    int main(void){

        setlocale(LC_CTYPE, "Portuguese");
        
        char tex[50];
        int i, j;

        printf("Digite um texto qualquer por favor \n");
        fgets(tex, 50, stdin);
        fflush(stdin);

        i = strlen(tex);

        printf("O texto tem o tamnho de %d caracteres!\n", i);

        for(i=0;i<strlen(tex);i++){
            
            printf(" %dº letra : %c \n", i, tex[i]);

        }
        
        for(j=0;j<strlen(tex);j++){
            
            printf("%c", tex[j]);

        }
        
        system("pause");
    }