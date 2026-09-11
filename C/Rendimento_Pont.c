   #include <stdio.h>
   #include <stdlib.h>
   #include <locale.h>
   #include <string.h>
    
   typedef struct investidor{
      char nome[50];
      double capital;
      double taxaRendimento;
      double RendimentoMes;
   }inv;


   int main(void){

      setlocale(LC_CTYPE, "Portuguese");
      inv *pessoa = (inv *)malloc(sizeof(inv));

      printf("Informe seu nome por favor!\n");
      scanf(" %49[^\n]", pessoa->nome);
      fflush(stdin);

      printf("Informa O seu Capital inicial: ");
      scanf(" %lf", &pessoa->capital);

      pessoa->taxaRendimento = 0.005;

      pessoa->RendimentoMes = pessoa->capital * pessoa->taxaRendimento;

      printf("\n%s Seu rendimento ao mês será de %.2f ", pessoa->nome, pessoa->RendimentoMes);

      free(pessoa);
      pessoa = NULL;

      return 0;
   }