#include<stdlib.h>
#include<locale.h>
#include<stdio.h>

int main(void){
    
    int i, j, k;
    printf("A soma de 50 valores é: \n");
    k = 0;

    for(i=1;i<=100;i++){
        
        j = i + k;
       printf("%d \n", j);
        
        k = j;

        if(i == 51){

            break;

        }
    }
    printf("Aqui estão os resultados!");
    system("pause");
}