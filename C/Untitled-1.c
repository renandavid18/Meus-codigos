    #include <stdlib.h>
    #include <stdio.h>
    #include <locale.h>
    #include <windows.h>

    void peneira(int *vet, int raiz, int fundo){
       
        int pronto, filhoMax, tmp;

        pronto = 0;
        while((raiz*2 <= fundo) && (!pronto)){

            if(raiz*2 == fundo) filhoMax = raiz * 2;
            else filhoMax = raiz *2 + 1;

            if(vet[raiz*2] > vet[raiz*2 + 1]){
                tmp = vet[raiz];
                vet[raiz] = vet[filhoMax];
                vet
            }
        }
    }

    int main(){
        
        setlocale(LC_CTYPE,"Portuguese");
        int v[5], i, j;

        printf("Informe os valores das seguntes posições: \n");

        for(i=0;i<=5;i++){
            printf("|Posição: %d | Número: ", i+1);
            scanf("%d", v[i]);
        }
        



        return 0;
    }