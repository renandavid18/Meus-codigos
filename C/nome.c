#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    char nome[9];
    printf("Digite seu nome: \n");
    scanf("%s", &nome);
    //posso digitar um nome com até 9 letras
    printf("Seu nome: %s\n", &nome);


}