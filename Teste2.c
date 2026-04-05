#include<stdlib.h>
#include<locale.h>
#include<stdio.h>

int main(void){
    int i, x, y, k, j;

    setlocale(LC_CTYPE, "Portuguese");
    printf("Aqui iremos ver a tabela de 1 a X (sendo x um valor real inteiro)\n Complete a frase: \n você verá a sequêcia de números de 1 à ");
    scanf("%d", &x);

    printf("\n Complete será ignorado os valores que são multiplo de ");
    scanf("%d", &y);

    for(i=1;i<=x;i++){

        j = i + k;

        if(k % y == 0){
        
            continue;

        }

        printf("%dº valor: %d \n", i, j);
        k = j;
    }
    
    system("pause");
}
    