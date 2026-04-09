    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>

    int main(void){
        char nome[40];
        char periodo[3][10] = {"Bom dia", "Boa tarde", "Boa noite"}; //aqui é 10 strings para cada conteudo do vetor porque cada um tem 5 letras e devo deixar 1 para o nulo (\0)

        int id, nasc, atual, an = 1, p;

        printf("Digite seu nome completo:");
        scanf("%39[^\n]s", nome);
        fflush(stdin);
        
        printf("\nDigite seu ano de nascimento:");
        scanf("%d", &nasc);

        printf("\nDigite o ano atual:");
        scanf("%d", &atual);

        id = atual - nasc;

        printf("Você fez aniversário? \n");
        printf("Digite: \n (1) Sim | (0) Não");        
        scanf("%d", &an);

        if(an = 0){
            id = id - 1;
        }

        printf("Estamos em que período do dia? \n |(1) Manhã| \n |(2) Tarde| \n |(3) Noite|");
        scanf("%d", &p);
      
        
        printf("%s %s sua idade é: %d", nome, periodo[p], id);
    
    }
