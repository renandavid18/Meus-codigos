#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float alt, peso, imc;
    char nome[50];
    printf("Aqui você irá descobrir seu IMC \n");
     printf("OBS: Os dados devem ser em metros e kg usando vírgula ex (1,75) \n");
    printf("Para começar me diga seu nome \n");
    scanf("%s", nome);
    printf("Vamos começar? %s\n", nome);
    printf("Me informe sua altura em metros por favor \n");
    scanf("%f", &alt);
    printf("Agora me informe seu peso em kg por favor \n");
    scanf("%f", &peso);

    imc = peso / (alt * alt);

    printf("%s Seu IMC é de: %f\n", nome, imc);
}