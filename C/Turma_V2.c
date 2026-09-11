   #include <stdio.h>
   #include <stdlib.h>
   #include <locale.h>
   #include <string.h>

   typedef struct Alunos{
      char nome[50];
      float nota[4];
   }Al;

   typedef struct Turmas{

      char Nmturma[50];
      int ano, QTD_AL;
      Al *alun;

   }tms;

   void cadastroT(tms *turma){

      tms *turma = (tms*)malloc(sizeof(tms));

      if(turma == NULL){
         printf("Erro de alocação em Turma!");
         return 1;
      }

      printf("\nInforme o Nome da turma: ");
      setbuf(stdin, NULL);
      fgets(turma->Nmturma, 50, stdin);

      printf("Informe o ano: ");
      scanf("%d", &turma->ano);

      printf("\nMe informa a quantidade de aluno na %d-turma: ", d+1);
      scanf("%d", &QTD_AL);
      turma->alun = (Al*)malloc(QTD_AL * sizeof(Al));
      setbuf(stdin, NULL);

      if(alun == NULL){
         printf("Erro de alocação em Alunos!");
         return 1;
      }

   }

   void cadastroA(Al *alun){

      printf("Me informa as informações do %d-Aluno: ", k+1);

      printf("\nNome: ");
      fgets(alun->nome, 50, stdin);
      setbuf(stdin, NULL);

      for(z=0;z<4;z++){

         printf("Informe a %d-Nota: ", z+1);
            scanf("%f", &turma->alun->nota[z]);
            setbuf(stdin, NULL);

      }
   }

   void imprimir(tms *turma) {
    
      printf("\n========================================");
      printf("\nDADOS DA TURMA: %s", turma->Nmturma);
      printf("\nANO: %d", turma->ano);
      printf("\nQUANTIDADE DE ALUNOS: %d", turma->qtd_al);
      printf("\n========================================\n");

      
      for (int k = 0; k < turma->qtd_al; k++) {
         
         printf("\nAluno %d: %s", k + 1, turma->alun[k].nome);
         
         printf("\nNotas: ");
         
         for (int z = 0; z < 4; z++) {
               
               printf("%.2f  ", turma->alun[k].nota[z]);
         }
         printf("\n----------------------------------------");
      }
      printf("\n");
}

         

   int main(){

      int i, j, k, l, f, e, d, z;

      setlocale(LC_CTYPE, "Portuguese");
      
      printf("\nMe informa a quantidade de turmas: ");
      scanf("%d", &e);
      turma->alun = (Al*)malloc(QTD_AL * sizeof(Al));
      setbuf(stdin, NULL);

      if(alun == NULL){
         printf("Erro de alocação em Alunos!");
         return 1;
      }


      for(d=0;d<e;d++){

         cadastroT(&turma[d]);
         
         for(k=0;k<QTD_AL;k++){
            
            CadastroA(&turma[d].alun[k], k);
            
            printf("\nDeseja ver o formulário da turma %s? \n(1) Sim | (0) Não: ", turma[d].Nmturma);
            scanf("%d", &f);
            setbuf(stdin, NULL);

            if (f == 1) {

               void imprimir(tms *turma);   
               
            }
         }
      } 

      for (d = 0; d < e; d++) {

         free(turma[d].alun); 

      }
      
      free(turma); 

      printf("\nMemória liberada\n");    
      system("pause");
      return 0;
   }