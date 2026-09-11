#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

    float nota1, nota2, nota3, nota4, mn, me;

    setlocale(LC_CTYPE, "Portuguese");

    printf("Aqui você irá descobrir sua média e se você foi aprovado! \n");
    
    printf("Antes de tudo me informe qual a média da sua escola por favor \n");
    scanf("%f", &me); //me = media escolar

    printf("Para começar me informe sua primeira nota \n");
    scanf("%f", &nota1);
    printf("Ok primeira nota registrada \n");
    
    printf("Para começar me informe sua segunda nota \n");
    scanf("%f", &nota2);
    printf("Ok segunda nota registrada \n");

    printf("Para começar me informe sua terceira nota \n");
    scanf("%f", &nota3);
    printf("Ok terceira nota registrada \n");
    
    printf("Para começar me informe sua quarta nota \n");
    scanf("%f", &nota4);

    mn = (nota1 + nota2 + nota3 + nota4) / 4; //mn = media da nota

    if(mn >= me ){
        printf("Parabens você foi aprovado! sua média foi de: %f\n", mn);
    }

    if(mn <= me){
        printf("Infelizmente você foi reprovado! sua média final foi de: %f\n", me);
    }
}