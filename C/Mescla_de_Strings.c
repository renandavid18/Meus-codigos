    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>
    #include <string.h>

    int main(void){

        setlocale(LC_CTYPE, "Portuguese");
        
        char nome[20];
        char sobrenome[20];

        printf("Me informe seu nome por favor: \n(OBS:Sem o sobrenome)\n");
        fgets(nome, 20, stdin);
        nome[strcspn(nome, "\n")] = '\0';
        fflush(stdin);

        printf("Agora me informa seu sobrenome por favor: \n");
        fgets(sobrenome, 20, stdin);
        sobrenome[strcspn(sobrenome, "\n")] = '\0';
        fflush(stdin);

        printf("Antes de usar o strcat:\n");
        printf("nome: %s\n", nome);
        printf("sobrenome: %s\n", sobrenome);
        
        strcat(nome, " ");
        strcat(nome,sobrenome);

        printf("Após o strcat: ");
        puts(nome);

        system("pause");
    }