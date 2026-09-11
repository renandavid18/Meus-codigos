    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <locale.h>
    #include <windows.h>


    typedef struct Dados{
        int idade;
        float nota[4], media;
        char nome[100], cpf[11];
    
    }dados;

    void leraluno(int d, int g, dados pes[g][d]){
        int i, j;
        
        for(int k=0;k<g;k++){
            printf("\nInforme os seguintes dados dos alunos \nda %d-turma por favor \n", k+1);
            fflush(stdin);

            for(i=0;i<d;i++){
                printf("%d-Aluno", i+1);
                fflush(stdin);

                printf("\nNome Completo: ");
                fgets(pes[k][i].nome, 99, stdin);
                fflush(stdin);

                printf("\nCPF: ");
                fgets(pes[k][i].cpf, 99, stdin);
                fflush(stdin);

                printf("\nIdade: ");
                scanf("%d", &pes[k][i].idade);

                for(j=0;j<4;j++){
                    fflush(stdin);
                    printf("\n%d Nota: ", j+1);
                    scanf("%f", &pes[k][i].nota[j]); 
                }
            }
            system("cls");
            fflush(stdin);
        }
    }

    void exibiraluno(int d, int g, dados pes[g][d]){
        int i, j, media=0;
        
        for(int k=0;k<g;k++){
            printf("\n================================================\n");
            printf("            %d-Turma: \n", i+1);
            
            for(i=0;i<d;i++){
                printf("\n============================\n");
                printf("    %d-Aluno: \n", i+1);
                
                printf("\nNome Completo: %-100s", pes[k][i].nome);
            
                printf("\nIdade: %-2d ",  pes[k][i].idade);        

                printf("\nCPF: %-11s \n",  pes[k][i].cpf);

                for(j=0;j<4;j++){

                    printf("%d Nota: %.2f", j+1,  pes[k][i].nota[j]);
                    if(j<3) printf("  | "); 
                    
                }
                for(int c=0;c<4;c++){

                    pes[k][i].media =  pes[k][i].nota[c] +  pes[k][i].media;
                    
                }
                printf("Media: %.2f",  pes[k][i].media);
                printf("\n============================\n");
            }
            printf("\n================================================\n");
        }
    }

    int main(){
        int op, d=0, h=0, g=0;

        while(g<=0){
            printf("Digite a quantidade de Turmas: ");
            scanf("%d", &g);
        }

        while(d<=0){
            printf("Digite a quantidade de Alunos por turma: ");
            scanf("%d", &d);
        }
        

        dados pes[g][d];

        while(h==0){
            system("cls");
            fflush(stdin);
            printf("1- Adicionar o Aluno");
            printf("\n2- Ver os alunos");
            printf("\n3- fechar \n");
            scanf("%d", &op);

            switch(op){
                
                case 1:
                    leraluno(d, g, pes);
                    system("cls");
                    fflush(stdin);
                    break;

                case 2:
                    exibiraluno(d, g, pes);
                    system("pause");
                    fflush(stdin);
                    break;

                case 3:
                    h = 1;
                    break;
            }
        }
    }