   
   #include "frota.h"
   

   int main(){
      
      system("chcp 1252");

      int i, j, d, z, f;

      setlocale(LC_CTYPE, "Portuguese");

      carro cars[100];

      printf("Aqui você poderá adicionar veículos e os seus proprietários! \n");

      for(i=0;i<=99;i++){

         printf("%d-Veículo Por favor preecha as seguintes informações: \n", i+1);

         printf("Nome do veículo: ");
         fgets(cars[i].veiculo, 30, stdin);
         fflush(stdin);

         printf("\nAno:  ");
         scanf("%d", &cars[i].ano);
         fflush(stdin);

         printf("\nAno da última vistoria: ");
         scanf("%d", &cars[i].AnoUltVist);

         printf("Informações guardadas!\n");
         system("cls");

         printf("Agora preciso das informações sobre o proprietário do %d-carro:\n", i+1);

         printf("\nNome do Proprietário: ");
         fgets(cars[i].prop.nome, 30, stdin);
         fflush(stdin);

         for(j=0;j<=4;j++){
            int valida = 0;

            do {
               printf("\nDigite a %d-categoria (A, B, C, D ou E): ", j);
               fgets(cars[i].prop.Categoria[j], 2, stdin);
               fflush(stdin);

        
               if (strcmp(cars[i].prop.Categoria[j], "A") == 0 || 
               strcmp(cars[i].prop.Categoria[j], "B") == 0 || 
               strcmp(cars[i].prop.Categoria[j], "C") == 0 || 
               strcmp(cars[i].prop.Categoria[j], "D") == 0 || 
               strcmp(cars[i].prop.Categoria[j], "E") == 0) {

               valida = 1;
               
               } else {
                  printf("Erro! Categoria invalida. Tente novamente.\n");
               }

               } while (valida == 0);

               printf("Sucesso! Categoria %s registrada.\n", cars[i].prop.Categoria[j]);
               printf("Sua CNH tem outra Categoria ?\n");
               printf("(1) Sim | (0) Não\n");
               scanf("%d", &d);

               if(d == 0) break;
         }
         
         printf("\nAno da Válidade da sua Carteira: ");
         scanf("%d", &cars[i].prop.AnoValid);

         if(verific(cars[i].prop.AnoValid));

         printf("\nCPF: ");
         scanf("%d", &cars[i].prop.CPF);

         printf("Informações Do %d-Carro recebidas!\n");
         system("cls");

         printf("Deseja verificar informações recebidas?\n");
         printf("(1) Sim | (0) Não\n");
         scanf("%d", &z);

         if(z == 1) imprimir(cars, i+1);



         printf("Deseja colocar mais um Carro?\n");
         printf("(1) Sim | (0) Não\n");
         scanf("%d", &f);

         if(f == 0)break;

      }

      return 0;
      
   }