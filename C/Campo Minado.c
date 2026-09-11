    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>


    typedef struct {
        int eBomba;
        int estaAberta;
        int vizinhos;
    } Celula;


    #define TAM 10
    #define QTD_BOMBAS 15

    Celula jogo[TAM][TAM];

    
    void inicializarJogo(){
        
        for(int l=0;l<TAM;l++){
            
            for(int c=0;c<TAM;c++){

                jogo[l][c].eBomba = 0;
                jogo[l][c].estaAberta = 0;
                jogo[l][c].vizinhos = 0;
            }
        }
    }


    void sortearBombas(){
        
        int l, c;
        srand(time(NULL));
        
        for(int i = 0; i < QTD_BOMBAS; i++){
            
            l = rand() % TAM;
            c = rand() % TAM;
            
            if(jogo[l][c].eBomba == 0) jogo[l][c].eBomba = 1;
            
            else i--;
        }
    }


    int coordenadaValida(int l, int c){
        
        if(l >= 0 && l < TAM && c >= 0 && c < TAM) return 1;
        return 0;
    }


    int quantBombasVizinhas(int l, int c) {
        
        int quantidade = 0;
        
        if(coordenadaValida(l - 1, c) && jogo[l - 1][c].eBomba) quantidade++;
        if(coordenadaValida(l + 1, c) && jogo[l + 1][c].eBomba) quantidade++;
        if(coordenadaValida(l, c + 1) && jogo[l][c + 1].eBomba) quantidade++;
        if(coordenadaValida(l, c - 1) && jogo[l][c - 1].eBomba) quantidade++;
        if(coordenadaValida(l - 1, c - 1) && jogo[l - 1][c - 1].eBomba) quantidade++;
        if(coordenadaValida(l - 1, c + 1) && jogo[l - 1][c + 1].eBomba) quantidade++;
        if(coordenadaValida(l + 1, c - 1) && jogo[l + 1][c - 1].eBomba) quantidade++;
        if(coordenadaValida(l + 1, c + 1) && jogo[l + 1][c + 1].eBomba) quantidade++;
        
        return quantidade;
    }

    
    void contarBombas() {
        
        for(int l = 0; l < TAM; l++) {
            
            for(int c = 0; c < TAM; c++) jogo[l][c].vizinhos = quantBombasVizinhas(l, c);
        }
    }


   void imprimir() {

    printf("\n\n   ");

    for(int c = 0; c < TAM; c++) {

        printf(" %d  ", c); 
    }

    printf("\n   -----------------------------------------\n");
    
    for(int l = 0; l < TAM; l++) {

        printf("%d  |", l);
        
        for(int c = 0; c < TAM; c++) { 

            if(jogo[l][c].estaAberta) { 

                if(jogo[l][c].eBomba) { 
                    
                    printf(" * |"); 
                } else { 

                    printf(" %d |", jogo[l][c].vizinhos); 
                } 
            } else { 

                printf("   |"); 
            } 
        } 
        printf("\n   -----------------------------------------\n");
    } 
}

    
    void abrirCelula(int l, int c) {
        
        if(coordenadaValida(l, c) && jogo[l][c].estaAberta == 0) {

            jogo[l][c].estaAberta = 1;
            
            if(jogo[l][c].vizinhos == 0) {

                abrirCelula(l - 1, c);
                abrirCelula(l + 1, c);
                abrirCelula(l, c + 1);
                abrirCelula(l, c - 1);
                abrirCelula(l - 1, c - 1);
                abrirCelula(l - 1, c + 1);
                abrirCelula(l + 1, c - 1);
                abrirCelula(l + 1, c + 1);
            }
        }
    }
    

    int ganhou() {
        
        int quantidade = 0;
        
        for(int l = 0; l < TAM; l++) {

            for(int c = 0; c < TAM; c++) {

                if(jogo[l][c].estaAberta == 0 && jogo[l][c].eBomba == 0) quantidade++;
            }
        }
        return quantidade; 
    }
    

    void jogar() {

        int linha, coluna;
        
        do {

            imprimir();
            printf("\nDigite a linha e a coluna da sua jogada: ");
            scanf("%d%d", &linha, &coluna);
            
            if(coordenadaValida(linha, coluna)) {

                if(jogo[linha][coluna].eBomba) {

                    jogo[linha][coluna].estaAberta = 1; 
                    imprimir();
                    printf("\n\tBOOM! Voce pisou em uma bomba. Game Over!\n");
                    system("pause");
                    break;

                } else abrirCelula(linha, coluna);
            
            } else printf("\nCoordenada invalida! Tente novamente.\n");
            
        } while(ganhou() > 0);
        
        if(ganhou() == 0) {

            imprimir();
            printf("\n\tParabens! Voce limpou o campo e venceu o jogo!\n");
            system("pause");
        }
    }



    int main() {

        inicializarJogo();
        sortearBombas();
        contarBombas();
        
        printf("\n---------------- BEM-VINDO AO CAMPO MINADO ----------------\n");
        jogar();
        
        return 0;
    }
