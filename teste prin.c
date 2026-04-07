#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
     int x;
     setlocale(LC_ALL, "Portuguese");
     char parcela[9][40] = {"Até 12 meses (1 ano)", "Até 24 meses (2 anos)", "Até 36 meses (3 anos)", "Até 48 meses (4 anos)", "Até 60 meses (5 anos)", "Até 72 meses (6 anos)", "Até 84 meses (7 anos)", "Até 96 meses (8 anos)", "Acima de 9 anos"};
     
     printf("Selecione a opcao de parcelas (Anos): \n");  

     for(x=0;x<=8;x++){
                                   
     printf("%d - %s  \n", x + 1, parcela[x]);

     }
     system("pause");

} 