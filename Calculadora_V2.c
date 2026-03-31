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
        printf("(8)  Constante vezes PI \n");
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

                            printf("A subtração desses valores foi: %f \n", sub);
                
                        }else {
                           
                            printf("Ok recarregando...");
                            i = 0

                        }
                    }
                    break;

                case 3:
                    
                     while (i != 0){
                
                        printf("Operação de Multiplicação Selecionada! \n");
                        printf("Você escolheu a operação certa? \n");
                        printf("(1) Sim | (0) Não \n");
                        scanf("%d", k)
                        
                        if (k != 0){
                    
                            printf("Me informa o primeiro valor por favor! \n");
                            scanf("%f", a);
                            printf("Agora me informa o segndo valor \n");
                            scanf("%f", b);

                            soma = a * b

                            printf("A Multiplicação desses valores foi: %f \n", mult);
                
                        }else {
                           
                            printf("Ok recarregando...");
                            i = 0

                        }
                    }
                    break;

                case 4:
                    
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

                            soma = a / b

                            printf("A divisão desses valores foi: %f \n", div);
                
                        }else {
                           
                            printf("Ok recarregando...");
                            i = 0

                        }
                    }
                    break;

                case 5:
                    
                     while (i != 0){
                
                        printf("Operação de Módulo Selecionada! \n");
                        printf("Você escolheu a operação certa? \n");
                        printf("(1) Sim | (0) Não \n");
                        scanf("%d", k)
                        
                        if (k != 0){
                    
                            printf("Me informa o primeiro valor por favor! \n");
                            scanf("%f", a);
                            printf("Agora me informa o segndo valor \n");
                            scanf("%f", b);

                            mod = a % b

                            printf("O Módulo desses valores é: %f \n", mod);
                
                        }else {
                           
                            printf("Ok recarregando...");
                            i = 0

                        }
                    }
                    break;


                case 6:
                    
                     while (i != 0){
                
                        printf("Operação de exponenciação Selecionada! \n");
                        printf("Você escolheu a operação certa? \n");
                        printf("(1) Sim | (0) Não \n");
                        scanf("%d", k)
                        
                        if (k != 0){
                    
                            printf("Me informa a base por favor! \n");
                            scanf("%f", a);
                            printf("Agora me informa o expoente \n");
                            scanf("%f", b);

                            exp = pow(a,b);

                            printf("A subtração desses valores foi: %f \n", exp);
                
                        }else {
                           
                            printf("Ok recarregando...");
                            i = 0

                        }
                    }
                    break;

                case 7:
                    
                     while (i != 0){
                
                        printf("Operação de Raiz quadrada Selecionada! \n");
                        printf("Você escolheu a operação certa? \n");
                        printf("(1) Sim | (0) Não \n");
                        scanf("%d", k)
                        
                        if (k != 0){
                    
                            printf("Me informa o valor por favor! \n");
                            scanf("%f", a);

                            raiz = sqrt(a);

                            printf("A raiz dese valor é: %f \n", raiz);
                
                        }else {
                           
                            printf("Ok recarregando... \n");
                            i = 0

                        }
                    }
                    break;

                case 8:
                    
                     while (i != 0){
                
                        printf("Operação de Constante vezes PI  Selecionada! \n");
                        printf("Você escolheu a operação certa? \n");
                        printf("(1) Sim | (0) Não \n");
                        scanf("%d", k)
                        
                        if (k != 0){
                    
                            printf("Me informa o primeiro valor por favor! \n");
                            scanf("%f", a);
                            cpi = a * M_PI

                            printf("A O valor %f vezes pi é: %f \n", a, cpi);
                
                        }else {
                           
                            printf("Ok recarregando... \n");
                            i = 0

                        }
                    }
                    break;

                case 9:
                    
                    while (i != 0){
                
                        printf("Operação de Seno Selecionada! \n");
                        rintf("Você escolheu a operação certa? \n");
                        printf("(1) Sim | (0) Não \n");
                        scanf("%d", k)
                                
                        if (k != 0){
                                
                            printf("Me informa se você vai usar graus ou numero inteiro (radiano)\n")
                            printf("(1) Graus | (0) Inteiro(radiano) \n");
                            scanf("%d", &j);

                            if (j != 0){
                                
                                printf("Inteiro(radiano) escolhido \n")
                                printf("Me informa o Grau por favor! \n");
                                scanf("%f", a);

                                sen = sen(a);

                                printf("O seno de %.2f graus e: %.4f \n", a, sen);

                                }else {
                           
                                    printf("Ok recarregando... \n");
                                    i = 0

                                }
                            
                            } else {


                                printf("O seno de %.2f graus e: %.4f \n", graus, s);
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