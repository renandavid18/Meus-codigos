   #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <locale.h>
    #include <windows.h>
    #include <time.h>

    int main(){
        int i, j, ale[20], fim=19,cop, maior, menor;
        

        srand(time(NULL));

        
        for(j=0;j<20;j++){
            ale[j] = 1 + rand() % 99;
            if(ale[j] > maior) maior = ale[j];
            if(ale[j] < menor) menor = ale[j];
        }
        
        printf("Vetor: \n");
        for(j=0;j<20;j++){
            printf("%-2d ", ale[j]);
        }
        printf("\n");

        printf("Vetor inverso: \n");
        for(j=0;j<10;j++){
            cop = ale[j];
            ale[j] = ale[fim];
            ale[fim] = cop;
            fim--;
        }

        for(j=0;j<20;j++){
            printf("%-2d ", ale[j]);
        }
        printf("\nO maior numero e: %d\n", maior);
        printf("\nO menor numero e: %d\n", menor);
        system("pause");
    }