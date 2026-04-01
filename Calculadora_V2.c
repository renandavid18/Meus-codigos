    #include <stdlib.h>
    #include <locale.h>
    #include <stdio.h>
    #include <math.h> //para pow, sqrt, sin!!!!!!

    int main(void){

        int op, mod, i, q, k, j, e, c, d;
        double a, b, x, y, soma, rad, graus, sen, coss, tang, expo, mult, sub, div, raiz, cpi, loga, loga10, ex, hip;


        setlocale(LC_CTYPE, "Portuguese");
        
        printf("Bem vindo à Calculadora V.2 \n");
        system("pause");

        while (q != 0){

            printf("=========================== MENU =========================== \n");
            printf("Qual cálculo deseja utilizar? \n");
            printf("(1)  Soma \n");
            printf("(2)  Subtração \n");
            printf("(3)  Multiplicação \n");
            printf("(4)  Divisão \n");
            printf("(5)  Módulo \n");
            printf("(6)  Exponenciação \n");
            printf("(7)  Raiz Quadrada \n");
            printf("(8)  Constante vezes PI \n");
            printf("(9)  Seno \n");
            printf("(10) Cosseno \n");
            printf("(11) Tangente \n");
            printf("(12) Exponencial \n");
            printf("(13) Logaritmo Natural \n");
            printf("(14) Logaritmo Base 10 \n");
            printf("(15) Hipotenusa \n");
            printf("(16) Converter Graus para Radiano \n");
            printf("(0)  Sair");
            printf("============================================================ \n");
            scanf("%d", op);

            while (i != 0){
                
                switch(op){
                    
                    case 1:
                    
                        printf("Operação de Soma Selecionada! \n");
                        printf("Você escolheu a operação certa? \n");
                        printf("(1) Sim | (0) Não \n");
                        scanf("%d", &k);
                            
                        if (k != 0){
                        
                            printf("Me informa o primeiro valor por favor! \n");
                            scanf("%f", &a);

                            printf("Agora me informa o segndo valor \n");
                            scanf("%f", &b);

                            soma = a + b;

                            printf("A soma desses valores foi: %f \n", soma);
                    
                        }else {
                            
                            printf("Ok recarregando... \n");
                            i = 0;
                        }

                        break;

                    case 2:
                    
                        printf("Operação de Subtração Selecionada! \n");
                        printf("Você escolheu a operação certa? \n");
                        printf("(1) Sim | (0) Não \n");
                        scanf("%d", &k);
                            
                        if (k != 0){
                        
                            printf("Me informa o primeiro valor por favor! \n");
                            scanf("%f", &a);

                            printf("Agora me informa o segndo valor \n");
                            scanf("%f", &b);

                            soma = a - b;

                            printf("A subtração desses valores foi: %f \n", sub);
                    
                        }else {
                            
                            printf("Ok recarregando... \n");
                            i = 0;

                        }
                    
                        break;

                    case 3:
                    
                        printf("Operação de Multiplicação Selecionada! \n");
                        printf("Você escolheu a operação certa? \n");
                        printf("(1) Sim | (0) Não \n");
                        scanf("%d", &k);
                            
                        if (k != 0){
                        
                            printf("Me informa o primeiro valor por favor! \n");
                            scanf("%f", &a);

                            printf("Agora me informa o segndo valor \n");
                            scanf("%f", &b);

                            soma = a * b;

                            printf("A Multiplicação desses valores foi: %f \n", mult);
                    
                        }else {
                            
                            printf("Ok recarregando... \n");
                            i = 0;

                        }
            
                        break;

                    case 4:
                        
                        printf("Operação de Subtração Selecionada! \n");
                        printf("Você escolheu a operação certa? \n");
                        printf("(1) Sim | (0) Não \n");
                        scanf("%d", &k);
                            
                        if (k != 0){
                        
                            printf("Me informa o primeiro valor por favor! \n");
                            scanf("%f", &a);

                            printf("Agora me informa o segndo valor \n");
                            scanf("%f", &b);

                            soma = a / b;

                            printf("A divisão desses valores foi: %f \n", div);
                    
                        }else {
                            
                            printf("Ok recarregando... \n");
                            i = 0;

                        }
                    
                        break;

                    case 5:
                        
                        printf("Operação de Módulo Selecionada! \n");
                        printf("Você escolheu a operação certa? \n");
                        printf("(1) Sim | (0) Não \n");
                        scanf("%d", &k);
                            
                        if (k != 0){
                        
                            printf("Me informa o primeiro valor por favor! \n");
                            scanf("%d", &c);

                            printf("Agora me informa o segndo valor \n");
                            scanf("%d", &d);

                            mod = c % d;

                            printf("O Módulo desses valores é: %f \n", mod);
                    
                        }else {
                            
                            printf("Ok recarregando...");
                            i = 0;

                        }
                        
                        break;


                    case 6:
                        
                        printf("Operação de exponenciação Selecionada! \n");
                        printf("Você escolheu a operação certa? \n");
                        printf("(1) Sim | (0) Não \n");
                        scanf("%d", &k);
                            
                        if (k != 0){
                        
                            printf("Me informa a base por favor! \n");
                            scanf("%f", &a);

                            printf("Agora me informa o expoente \n");
                            scanf("%f", &b);

                            expo = pow(a,b);

                            printf("A subtração desses valores foi: %f \n", expo);
                    
                        }else {
                            
                            printf("Ok recarregando...");
                            i = 0;

                            }
                        
                        break;

                    case 7:
                        
                        printf("Operação de Raiz quadrada Selecionada! \n");
                        printf("Você escolheu a operação certa? \n");
                        printf("(1) Sim | (0) Não \n");
                        scanf("%d", &k);
                            
                        if (k != 0){
                        
                            printf("Me informa o valor por favor! \n");
                            scanf("%f", &a);

                            raiz = sqrt(a);

                            printf("A raiz dese valor é: %f \n", raiz);
                    
                        }else {
                            
                                printf("Ok recarregando... \n");
                                i = 0;

                            }
            
                        break;

                    case 8:
                        
                        printf("Operação de Constante vezes PI  Selecionada! \n");
                        printf("Você escolheu a operação certa? \n");
                        printf("(1) Sim | (0) Não \n");
                        scanf("%d", &k);
                            
                            if (k != 0){
                        
                                printf("Me informa o primeiro valor por favor! \n");
                                scanf("%f", &a);

                                cpi = a * M_PI;

                                printf("A O valor %f vezes pi é: %f \n", a, cpi);
                    
                            }else {
                            
                                printf("Ok recarregando... \n");
                                i = 0;

                            }
                        break;

                    case 9:
                    
                        printf("Operação do Seno Selecionada! \n");
                        printf("Você escolheu a operação certa? \n");
                        printf("(1) Sim | (0) Não \n");
                        scanf("%d", &k);
                                    
                        if (k != 0){
                                    
                            printf("Me informa se você vai usar graus ou numero inteiro(radiano) \n");
                            printf("(1) Graus | (0) Inteiro(radiano) \n");
                            scanf("%d", &j);

                            if (j != 0){
                                    
                                printf("Graus escolhido \n");
                                printf("Me informa o Grau por favor! \n");
                                scanf("%f", &graus);

                                rad = graus * (M_PI / 180.0);

                                sen = sin(rad);

                                printf("O seno de %.2f graus e: %.4f \n", graus, sen);

                            }else {

                                printf("Inteiro(radiano) escolhido \n");
                                printf("Me informa o valor por favor! \n");
                                scanf("%f", &a);

                                sen = sin(a);

                                printf("O seno desse valor é graus e: %.4f \n", sen);

                                }
                                
                        } else {

                            printf("Ok recarregando... \n");
                            i = 0;

                        }
                            
                        break;

                    case 10:
                        
                        printf("Operação dp Cosseno Selecionada! \n");
                        printf("Você escolheu a operação certa? \n");
                        printf("(1) Sim | (0) Não \n");
                        scanf("%d", &k);
                                    
                        if (k != 0){
                                    
                            printf("Me informa se você vai usar graus ou numero inteiro(radiano) \n");
                            printf("(1) Graus | (0) Inteiro(radiano) \n");
                            scanf("%d", &j);

                            if (j != 0){
                                    
                                printf("Graus escolhido \n");
                                printf("Me informa o Grau por favor! \n");
                                scanf("%f", &graus);

                                rad = graus * (M_PI / 180.0);

                                coss = cos(rad);

                                printf("O cosseno de %.2f graus e: %.4f \n", graus, cos);

                            }else {

                                printf("Inteiro(radiano) escolhido \n");
                                printf("Me informa o valor por favor! \n");
                                scanf("%f", &a);

                                coss = cos(a);

                                printf("O cosseno desse valor é graus e: %.4f \n", cos);

                            }
                                
                        } else {

                            printf("Ok recarregando... \n");
                            i = 0;

                        }
                            
                        break;


                    case 11:
                        
                        printf("Operação da Tangente Selecionada! \n");
                        printf("Você escolheu a operação certa? \n");
                        printf("(1) Sim | (0) Não \n");
                        scanf("%d", &k);
                                    
                        if (k != 0){
                                    
                            printf("Me informa se você vai usar graus ou numero inteiro(radiano) \n");
                            printf("(1) Graus | (0) Inteiro(radiano) \n");
                            scanf("%d", &j);

                            if (j != 0){
                                
                                printf("Graus escolhido \n");
                                printf("Me informa o Grau por favor! \n");
                                scanf("%f", graus);

                                rad = graus * (M_PI / 180.0);

                                tang = tan(rad);

                                printf("A tangente de %.2f graus e: %.4f \n", graus, tang);

                                }else {

                                    printf("Inteiro(radiano) escolhido \n");
                                    printf("Me informa o valor por favor! \n");
                                    scanf("%f", &a);

                                    tang = tan(a);

                                    printf("A tangente desse valor é graus e: %.4f \n", tang);

                                }
                                
                        } else {

                            printf("Ok recarregando... \n");
                            i = 0;

                        }
                            
                        break;

                    case 12:
                        
                        printf("Operação de Exponencial Selecionada! \n");
                        printf("Você escolheu a operação certa? \n");
                        printf("(1) Sim | (0) Não \n");
                        scanf("%d", &k);
                            
                        if (k != 0){
                        
                            printf("Me informa o valor por favor! \n");
                            scanf("%f", &a);

                            ex = exp(a);

                            printf("O resultado de e^%.2f e: %.4f \n", x, ex);
                    
                        }else {
                            
                            printf("Ok recarregando...");
                            i = 0;

                        }
                    
                        break;

                    case 13:
                    
                        printf("Operação de Exponencial Selecionada! \n");
                        printf("Você escolheu a operação certa? \n");
                        printf("(1) Sim | (0) Não \n");
                        scanf("%d", &k);
                            
                        if (k != 0){
                        
                            printf("Me informa o primeiro valor por favor! \n");
                            scanf("%f", &a);

                            ex = exp(a);

                            printf("O resultado de e^%.2f e: %.4f \n", x, ex);
                    
                        }else {
                            
                            printf("Ok recarregando...");
                            i = 0;

                        }
                        
                        break;
                        
                    case 14:
                    
                        printf("Operação de Logaritmo Natural Selecionada! \n");
                        printf("Você escolheu a operação certa? \n");
                        printf("(1) Sim | (0) Não \n");
                        scanf("%d", &k);
                            
                        if (k != 0){
                        
                            printf("Me informa o primeiro valor por favor! \n");
                            scanf("%f", &a);

                            loga = log(a);

                            printf("O resultado de log(%f) é: %.4f \n", a, loga);
                    
                        }else {
                            
                            printf("Ok recarregando...");
                            i = 0;

                        }
                        
                        break;
                    
                    case 15:
                        
                        printf("Operação de Logaritmo de Base 10 Selecionada! \n");
                        printf("Você escolheu a operação certa? \n");
                        printf("(1) Sim | (0) Não \n");
                        scanf("%d", &k);
                            
                        if (k != 0){
                        
                            printf("Me informa o primeiro valor por favor! \n");
                            scanf("%f", &a);

                            loga10 = log10(a);

                            printf("O resultado de log10(%f) é: %.4f \n", a, loga10);
                    
                        }else {
                            
                            printf("Ok recarregando...");
                            i = 0;

                            }
                        
                        break;

                    case 16:
                        
                        
                    
                        printf("Operação de Hipotenusa Selecionada! \n");
                        printf("Você escolheu a operação certa? \n");
                        printf("(1) Sim | (0) Não \n");
                        scanf("%d", &k);
                        
                        if (k != 0){
                        
                            printf("Me informa o valor de x por favor! \n");
                            scanf("%f", &a);

                            printf("Me informa o valor de y por favor! \n");
                            scanf("%f", &b);

                            hip = hypot(x, y);

                            printf("O A hypotenusa é: %.4f \n", hip);
                    
                        }else {
                            
                            printf("Ok recarregando...");
                            i = 0;

                        }
                    
                        break;

                    case 17:
                        
                        printf("Operação de Graus para Radiano Selecionada! \n");
                        printf("Você escolheu a operação certa? \n");
                        printf("(1) Sim | (0) Não \n");
                        scanf("%d", &k);
                                    
                        if (k != 0){
                                    
                            printf("Me informa se você vai usar graus ou numero inteiro(radiano) \n");
                            printf("(1) Graus | (0) Inteiro(radiano) \n");
                            scanf("%d", &j);

                            if (j != 0){
                                    
                                printf("Graus escolhido \n");
                                printf("Me informa o Grau por favor! \n");
                                scanf("%f", graus);

                                rad = graus * (M_PI / 180.0);

                                printf("O radiano desse %.2f graus é: %.4f \n", graus, rad);

                            }else {

                                    printf("Inteiro(radiano) escolhido \n");
                                    printf("Me informa o valor por favor! \n");
                                    scanf("%f", &a);

                                    rad = graus * (M_PI / 180.0);

                                    printf("%.2f graus equivalem a %.4f radianos. \n", graus, rad);

                                }
                                
                        } else {

                            printf("Ok recarregando... \n");
                            i = 0;

                        }
                            
                        break;

                    case 0:

                        printf("Ok Saindo até a próxima!");
                        
                    break;
                    
                    default:
                        
                        printf("Opção invalida tente novamente");
                        i = 0;
                    
                }
            }
        }
        return 0;
    }