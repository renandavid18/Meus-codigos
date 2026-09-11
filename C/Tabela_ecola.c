    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>
    #include <string.h> // Necess?ria para limpar o \n do fgets

    int main(void){

        setlocale(LC_CTYPE, "Portuguese");
        
        char alunos[2][60]={};
        double mf, mp, nota1[2]={}, nota2[2]={}, nota3[2]={}, nota4[2]={};
        int i, j;
        
        printf("Criaremos uma tabela de alunos com suas notas: \n");
        printf("Limite 2 alunos\n \n \n");
        
        for (i = 0; i <= 1; i++) {
            printf("Digite o nome do aluno nº: %d\n", i + 1);
            scanf(" %59[^\n]", alunos[i]);
            setbuf(stdin, NULL);

            printf("Agora me informa a nota no 1? bimestre do aluno n?: %d\n", i + 1);
            scanf("%lf", &nota1[i]);
            
            printf("Agora me informa a nota no 2? bimestre do aluno n?: %d\n", i + 1);
            scanf("%lf", &nota2[i]);
            
            printf("Agora me informa a nota no 3? bimestre do aluno n?: %d\n", i + 1);
            scanf("%lf", &nota3[i]);
            
            printf("Agora me informa a nota no 4? bimestre do aluno n?: %d\n", i + 1);
            scanf("%lf", &nota4[i]);
            
            setbuf(stdin, NULL); 
        }

        printf("\n| Nome dos Alunos                                              |1? bim | 2? bim | Média P. | 3? bim | 4? bim | MAédia F. |\n");
        
        for(j=0;j<=1;j++){

            mp = (nota1[j] + nota2[j]) / 2;
            mf = (nota1[j] + nota2[j] + nota3[j] + nota4[j]) / 4;
            printf("| %-60s | %6.2lf | %6.2lf | %8.2lf | %6.2lf | %6.2lf | %8.2lf |\n", alunos[j], nota1[j], nota2[j], mp, nota3[j], nota4[j], mf);
    
        }

        system("pause");
    }