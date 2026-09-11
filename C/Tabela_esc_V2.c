    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>
    #include <string.h>

    double not(double nota[4], double rec){
            double maior;
            if(nota[0] > nota[1])
                maior = nota[0];
            else
                maior = nota[1];    
            if(maior < rec)
                maior = rec;
            return maior;
        }

        double not2(double nota[4], double rec2){
            double maior;
            if(nota[2] > nota[3])
                maior = nota[2];
            else
                maior = nota[3];
            if(maior < rec2)
                maior = rec2;
            return maior;
        }

    int main(void){

        setlocale(LC_CTYPE, "Portuguese");

        struct aluno{
            char nome[50];
            double nota[4], notas, rec, rec2, mp2, mp, mf, no, no2, not, not2;
            
            

        };

        typedef struct aluno aluno;

        aluno lista[10] ={0};

        int i, j, d = 0, h = 0;
        lista[10].notas = 0;
        lista[10].mp = 0;
        lista[10].mp2 = 0;
        lista[10].mf = 0;

        
        
        for(i=0;i<=2;i++){

            printf("Me informa o nome do %d-aluno por favor\n", i+1);
            scanf(" %49[^\n]s", lista[i].nome);
            setbuf(stdin, NULL);

            for(j=0;j<=3;j++){
                printf("Me informa a %d-nota do %d-aluno\n", j+1, i+1);
                scanf("%lf", &lista[i].nota[j]);
                lista[i].notas = lista[i].notas + lista[i].nota[j];

                
                printf("Ele ficou de recuperação?\n");
                printf("Se sim digite a nota se não digite (0)\n");
                scanf("%lf", &lista[i].rec);
                
            }
            
            printf("Ele ficou de recuperação no ultimo bimestre?\n");
            printf("Se sim digite a nota se não digite (0)\n");
            scanf("%lf", &lista[i].rec);
            
            lista[i].mp = (lista[i].nota[1] + lista[i].nota[2]) / 2;
            lista[i].mp2 = (lista[i].nota[2] + lista[i].nota[3]) / 2;
            lista[i].mf = (lista[i].mp2 + lista[i].mp)  / 2;
            setbuf(stdin, NULL);
            
            printf("Deseja colocar mais um aluno?\n");
            printf("(1) Sim | (0) Não\n");
            scanf("%d", &d);

            if(d == 0){
                break;
            }
            h++;
        }

        printf("\n| Nome dos Alunos                                    |1-bim|2-bim|Média.P|Recup|3-bim|4-bim|Média.P|Recup|Média.F|status|\n");
        for(i=0;i<=h;i++){
            printf("| %-50s |", lista[i].nome);

            for(j=0;j<=3;j++){
                printf(" %3.2f |", lista[i].nota[j]);

                if(i==1){
                    printf(" %5.2f |", lista[i].mp);
                    printf("%3.2f", lista[i].rec); 
                }
            }

            printf(" %5.2f |", lista[i].mf);
            printf("%3.2f", lista[i].rec2);
     
            if(maior >= 6){
                printf(" Aprov|");
            }else{
                printf(" Repro|");
            }
            printf("\n");
        }
        system("pause");
        
        



    }