    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>

    int main(void){
        char nome[40];
        char periodo[3][10] = {"Bom dia", "Boa tarde", "Boa noite"}; //aqui Ã© 10 strings para cada conteudo do vetor porque cada um tem 5 letras e devo deixar 1 para o nulo (\0)

        int id, nasc, atual, an = 1, p;

        setlocale(LC_CTYPE,"Portuguese");

        printf("Digíte seu nome completo: \n");
        scanf("%39[^\n]s", nome);
        fflush(stdin);
        
        printf("\nDigíte seu ano de nascimento: ");
        scanf("%d", &nasc);

        printf("\nDigíte o ano atual: ");
        scanf("%d", &atual);

        id = atual - nasc;

        printf("Você já fez aniversário? \n");
        printf("Digite: \n (1) Sim | (0) Não \n");        
        scanf("%d", &an);

        if(an = 0){
            id = id - 1;
        }

        printf("Estamos em que período do dia? \n |(1) Manhã| \n |(2) Tarde| \n |(3) Noite| \n");
        scanf("%d", &p);
      
        
        printf("%s %s sua idade é: %d \n", nome, periodo[p], id);

        system("pause");
    
    }
