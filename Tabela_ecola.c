 #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>

    int main(void){

        setlocale(LC_CTYPE, "Portuguese");
        
        char alunos[2][60]={};
        double nota1[2]={}, nota2[2]={}, nota3[2]={}, nota4[2]={};
        int i, j;
        
        printf("Criaremos uma tabela de alunos com suas notas: \n");
        printf("Limite 5 alunos\n");
        
        for(i=0;i<=1;i++){
            
            printf("Digite o nome do aluno nº: %d\n", i+1);
            fgets(alunos[i], 40, stdin);

            printf("Agora me informa a nota no 1º bimestre do aluno nº: %d\n", i+1);
            scanf("%lf", nota);

            printf("Agora me informa a nota no 2º bimestre do aluno nº: %d\n", i+1);
            scanf("%lf", nota);

            printf("Agora me informa a nota no 3º bimestre do aluno nº: %d\n", i+1);
            scanf("%lf", nota);

            printf("Agora me informa a nota no 4º bimestre do aluno nº: %d\n", i+1);
            scanf("%lf", nota);

            fflush(stdin); //limpa qualquer ENTER que houver

        }

        printf("| Nome dos Alunos                                              | 1º bimestre | 2º bimestre | Média Parcial | 3º bimestre | 4º bimestre | Média final |\n");
        
        for(j=0;j<=19;j++){

            mp = nota1[j] + nota2[]
            printf("| %60s | %9.2lf | %9.2lf | %11.2lf | %9.2lf | %9.2lf | %9.2lf | " alunos[j], nota1[j], nota2[j], m, nota3[j], nota4[j], mf);
            

        }

        system("pause");
    }