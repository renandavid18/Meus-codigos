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
      int ano;
      Al *alun;

   }tms;

   int main(){

      int i, j, k, l, f, e, d, z;

      setlocale(LC_CTYPE, "Portuguese");
      
      printf("\nMe informa a quantidade de turmas: ");
      scanf("%d", &e);
      tms *turma = (tms*)malloc(e * sizeof(tms));
      setbuf(stdin, NULL);
      
      if(turma==NULL){
         printf("ERRO...\n");
         return 1;
      }

      for(d=0;d<e;d++){

         printf("\nMe informa o Nome da %d-turma: ", d-1);
         fgets(turma[d].Nmturma, 50, stdin);
         setbuf(stdin, NULL);

         printf("\nMe informa a quantidade de aluno na %d-turma: ", d+1);
         scanf("%d", &i);
         turma[d].alun = (Al*)malloc(i * sizeof(Al));
         setbuf(stdin, NULL);
         
         if(turma[d].alun==NULL){
         printf("ERRO...\n");
         return 1;
         }

         for(k=0;k<i;k++){

            printf("Me informa as informações do %d-Aluno: ", k+1);

            printf("\nNome: ");
            fgets(turma[d].alun[k].nome, 50, stdin);
            setbuf(stdin, NULL);

            for(z=0;z<4;z++){

               printf("Informe a %d-Nota: ", z+1);
               scanf("%f", &turma[d].alun[k].nota[z]);
               setbuf(stdin, NULL);

            }
         }
      printf("\nDeseja ver o formulário da turma %s? \n(1) Sim | (0) Não: ", turma[d].Nmturma);
         scanf("%d", &f);
         setbuf(stdin, NULL);

         if (f == 1) {

            printf("\n------------------------ RELATÓRIO DA TURMA: %s ------------------------", turma[d].Nmturma);
           
            for (k = 0; k < i; k++) {

               printf("\nAluno: %s", turma[d].alun[k].nome);

               for (z = 0; z < 4; z++) {

                  printf("Nota %d: %.2f |\n", z + 1, turma[d].alun[k].nota[z]);
                  soma += turma[d].alun[k].nota[z];

               }
               
               printf("  Média: %.2f\n", soma / 4);
               
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