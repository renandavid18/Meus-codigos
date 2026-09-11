   #include <stdio.h>
   #include <stdlib.h>
   #include <locale.h>
   #include <string.h>
   
   typedef struct Proprietario{
      char nome[50];
      int CPF;
      int AnoValid;
      char Categoria[5][2];

   }Proprietario;

   typedef struct Carro{
      
      char veiculo[30];
      int ano;
      Proprietario prop;
      int AnoUltVist; //Ano da úlima vistoria

   }carro;

   int verific(int h){
      if(h < 2026){
         
         printf("sua carteira está vencida e não poderá trabalhar em nossa empresa. \nPor favor cadastre outro Motorista a esse veículo!");
         return 0;  
      }
      return 1;
   }

   void imprimir(carro cars[], int total) {
      for(int i=0;i<total;i++){
         
         printf("Informações do Carro: \n");
         printf("Nome do Veículo: %s\n", cars[i].veiculo);
         printf("Ano da Última Vistoria: %s\n", cars[i].AnoUltVist);
         printf("Data de Fabricação: %d\n", cars[i].ano);

         printf("Informações da CNH do Proprietário: \n");
         printf("Nome: %s\n", cars[i].prop.nome);

         for(int m=0;m<=4;m++){
            printf("Cargo: %s\n", cars[i].prop.Categoria[m]);
         }

         printf("Data de Validade da CNH: %d\n", cars[i].prop.AnoValid);
         printf("CPF: %d\n", cars[i].prop.CPF);
      }
   }
