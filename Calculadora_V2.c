#include<stdlib.h>
#include<locale.h>
#include<stdio.h>
#include <math.h> //para pow, sqrt, sin!!!!!!

int main(void){

    int op;
    double a, b, soma,;


    setlocale(LC_CTYPE, "Portuguese");
    
    printf("Bem vindo à Calculadora V.2 \n");
    sytem(pause);

    while (q != 0){

        printf("=========================== MENU =========================== \n");
        printf("Qual cálculo deseja utilizar? \n");
        printf("(1)  Soma \n");
        printf("(2)  Subtração \n");
        printf("(3)  Multiplicação \n");
        printf("(4)  Divisão \n");
        printf("(5)  Módulo \n");
        printf("(6)  Exponenciação (Potência) \n");
        printf("(7)  Raiz Quadrada \n");
        printf("(8)  Constante de PI \n");
        printf("(9)  Seno \n");
        printf("(10) Cosseno \n");
        printf("(11) Tangente \n");
        printf("(12) Exponencial (e^x) \n");
        printf("(13) Logaritmo Natural \n");
        printf("(14) Logaritmo Base 10 \n");
        printf("(15) Hipotenusa \n");
        printf("(16) Converter Graus para Radiano \n");
        printf("============================================================ \n");
        scanf("%d", op);

        while (e != 0){
            
            switch(op){
                
                case 1:
                    
                    while (i != 0){
                
                        printf("Operação de Soma Selecionada! \n");
                        printf("Você escolheu a operação certa? \n");
                        printf("(1) Sim | (0) Não \n");
                        scanf("%d", k)
                        
                        if (k != 0){
                    
                            printf("Me informa o primeiro valor por favor! \n");
                            scanf("%f", a);
                            printf("Agora me informa o segndo valor \n");
                            scanf("%f", b);

                            soma = a + b

                            printf("A soma desses valores foi: %f \n", soma);
                
                        }else {
                           
                            printf("Ok recarregando...");
                            i = 0
                        }
                    }

                    break;

                case 2:

                     while (i != 0){
                
                        printf("Operação de Subtração Selecionada! \n");
                        printf("Você escolheu a operação certa? \n");
                        printf("(1) Sim | (0) Não \n");
                        scanf("%d", k)
                        
                        if (k != 0){
                    
                            printf("Me informa o primeiro valor por favor! \n");
                            scanf("%f", a);
                            printf("Agora me informa o segndo valor \n");
                            scanf("%f", b);

                            soma = a - b

                            printf("A subtração desses valores foi: %f \n", soma);
                
                        }else {
                           
                            printf("Ok recarregando...");
                            i = 0

                        }
                    }
                    break;

                    case 3:
                    
                     while (i != 0){
                
                        printf("Operação de Subtração Selecionada! \n");
                        printf("Você escolheu a operação certa? \n");
                        printf("(1) Sim | (0) Não \n");
                        scanf("%d", k)
                        
                        if (k != 0){
                    
                            printf("Me informa o primeiro valor por favor! \n");
                            scanf("%f", a);
                            printf("Agora me informa o segndo valor \n");
                            scanf("%f", b);

                            soma = a - b

                            printf("A subtração desses valores foi: %f \n", soma);
                
                        }else {
                           
                            printf("Ok recarregando...");
                            i = 0

                        }
                    }
                    break;
            }
        }
    }
}