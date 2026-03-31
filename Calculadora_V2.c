#include<stdlib.h>
#include<locale.h>
#include<stdio.h>

int main(void){
    setlocale(LC_CTYPE, "Portuguese");
    
    printf("Bem vindo à Calculadora V.2 \n");
    sytem(pause);
    
    printf("=========================== MENU =========================== \n");
    prinf("Qual cálculo Deseja ultilizar?");
    printf("(1) Soma");
    printf("(2) Subtração");
    printf("(3) Multiplicação");
    printf("(4) Divisão");
    printf("(5) Radiciação");
    printf("(6) Exponenciação");
    printf("(7) S");
    printf("(8) Soma");

}