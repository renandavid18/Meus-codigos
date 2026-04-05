#include<stdlib.h>
#include<locale.h>
#include<stdio.h>

int main(void){
    
    setlocale(LC_CTYPE, "Portuguese");
    int i, j, k;
    printf("A soma de 50 valores é: \n");
    k = 0;

    for(i=1;i<=100;i++){
        
        j = i + k;
       printf("%dº valor = %d \n", j);
        
        k = j;

        if(i == 51){

            break;

        }
    }
    printf("Aqui estão os resultados!");
    system("pause");
}