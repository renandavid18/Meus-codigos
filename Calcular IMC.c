#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float alt, peso, imc;
    char nome[50];
    printf("Aqui você irá descobrir seu IMC \n");
    printf("Para começar me diga seu nome \n");
    scanf("%s", &nome);
    printf("Podemos começar? %s", nome, " " "(Aperte ENTER para continuar) \n");
    system("pause");
    printf("Todos os dados devem ser informados em metros e kg usando ponto ex (1.75) \n");
    Printf("Me informe sua altura em metros por favor \n");
    scanf("%f", &alt);
    printf("Agora me informe seu peso em kg por favor \n");
    scanf("%f",&peso);

    imc = peso / (alt * alt);

    printf("%s Seu IMC é de: %f\n", imc);
}