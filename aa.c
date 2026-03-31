#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    
     float
     setlocale(LC_CTYPE, "Portuguese");
     int i = 0;
     printf("Bom dia, seja bem vindo ao simulador de empréstimo financeiro \n");
     printf("\n");

     while(i != 1){

          
          int expl
          printf("deseja uma explicação mais detalhada sobre os valores? (1) para sim (0) para não \n");
          scanf("%d", expl);

          if(expl != 0){
               printf("sobre as taxas todas foram em base de um peril entre medio e baixo de creditos \n");
               printf("Onde buscamos a maior fidelidade possível e temos as taxas de 10 bancos \n");
               printf("as taxas variam de acordo com a parcela e o valor usado \n");
               printf("OBS: As taxas originais variam de acordo com seu perfil de crédito \n");
               printf("após a leitura digite ENTER para continuar \n");
               sytem(pause);
          }

          printf("====================MENU==================== \n");
	     printf("Escolha seu banco \n");
          printf("1 - Banco do Brasil \n");
          printf("2 - Caixa Econômica Federal \n");
          printf("3 - Bradesco \n");
          printfl("4 - Itaú Unibanco \n");
          printf("5 - Santander \n");
          printf("6 - Banco Inter \n");	
		printf("7 - Pagbank \n");
          printf("8 - Nubank \n");
          printf("9 - Mercado pago \n");
          printf("10 - Picpay \n");
          printf("0 - Sair \n");
          scanf("%d", op1);

        switch (op1){

            case 1

                printf("======================================================== \n");
                printf("                     BANCO DO BRASIL                     \n");
                printf("======================================================== \n");

            	para y de 1 ate 2 faca
                            timer(3)
                                      escreva("Loading")
                                      escreva(".")
                                      escreva(".")
                                      escreva(".")
                            timer(0)
                            escreval()
                       fimpara

               while(k != 1){

                    printf("Selecione a opção que corresponde ao valor de seu empréstimo: \n");

                    para z de 1 ate 5 faca
                         escreval(z, " - ", fx[z])
                    fimpara
                    scanf(l);

                    if (l < 1 || l > 5){
                         printf("Opção inválida! Tente novamente... \n");
                         opcao_valida <- falso
                                }

                                printf("Agora digite o valor do emprestimo \n");
                                scanf("%f", emp);

                                escreval()

                                escreval()
                                escreval("Você deseja selecionar em meses as parcelas?")
                                escreval("(1) Sim | (0) Não (escolher por anos)")
                                escreval("Caso não você escolherá quantos anos irá dividir")
                                escreval("escolha qual for do seu agrado não muda no resultado final")
                                escreval("OBS: se digitar algo diferente será selecionado a opção meses")
                                leia(op2)

                                opcao_valida <- verdadeiro

                                se op2 = 0 entao
                                   escreval("Agora selecione a opção que corresponde ao numero de parcelas: ")

                                   para x de 1 ate 9 faca
                                        escreval(x, " - ", parcela[x])
                                   fimpara
                                   leia(c)
                                   se c = 9 entao
                                      escreval("Digite quantos anos por favor")
                                      leia(o)
                                      prc <- o
                                   senao
                                        se (c >=1) e (c <= 8) entao
                                           prc <- c
                                        senao
                                             escreval("Opção invalida! Reiniciando...")
                                             opcao_valida <- falso
                                        fimse
                                   fimse
                                   prc <- prc * 12
                                senao
                                     se op2 <> 0 entao
                                        escreval("Você irá pagar em menos de 96 vezes?")
                                        escreval("(1) SIM |(0) Não (- de 96 vezes)")
                                        leia(esc)
                                        se esc = 1 entao
                                           escreval("Agora selecione a opção que corresponde ao numero de parcelas: ")

                                           para x de 1 ate 9 faca
                                                escreval(x, " - ", parcela[x])
                                           fimpara
                                           leia(o)
                                           se (o >= 1) e (o <=8) entao
                                              c <- o
                                           senao
                                                se o = 9 entao
                                                   escreval("Quantos anos anos você irá pagar?")
                                                   leia(c)
                                                senao
                                                     se (o < 1) ou (o > 9) entao
                                                        escreval("Opção invalida! Reiniciando...")
                                                        opcao_valida <- falso
                                                     fimse
                                                fimse
                                           fimse
                                     fimse
                                fimse

                                se opcao_valida entao
                                   escreval("A taxa ao mês aplicada em cima do empréstimo será de: ", tx[l,c], "%")
                                   escreval()
                                  tx_val <- tx[l,c]    // ex: 0,9 (0,9%)

    // calcula (1 + taxa)^prc usando loop
   inv_pot <- 1.0
para i de 1 ate prc faca
    inv_pot <- inv_pot / (1 + tx[l,c])
fimpara

vpar <- emp * (1 + tx[l,c]) / (1 - inv_pot)
mont <- vpar * prc
jr <- mont - emp
                                   escreval("-----------------------------------------")
                                   escreval("RESULTADO DO EMPRÉSTIMO")
                                   escreval("Taxa aplicada: ", tx[l, c], "% ao mês")
                                   escreval("Valor de cada parcela: R$ ", vpar:2:2)
                                   escreval("Total de juros: R$ ", jr:2:2)
                                   escreval("Total a pagar: R$ ", mont:2:2)
                                   escreval("Liquidado em: ", prc, " meses")
                                   escreval("-----------------------------------------")
                                   escreval()
                                   escreval("Digite ENTER para continuar")
                                   leia(pause)
                                   escreval()
                                   escreval()
                                   escreval("Você deseja refazer as contas no mesmo banco?")
                                   escreval("(1) Sim | (0) Não, qualquer valor diferente disso voltará ao menu")
                                   leia(op3)

                                   se op3 <> 1 entao
                                      k <- 1
                                   fimse
                                fimse
                         fimenquanto
                    

                  caso 2
                      escreval("========================================================")
                      escreval("                CAIXA ECONÔMICA FEDERAL                 ")
                      escreval("========================================================")
                      escreval()
                      para y de 1 ate 2 faca
                        timer(300)
                                  escreva("Loading")
                                  escreva(".")
                                  escreva(".")
                                  escreva(".")
                        timer(0)
                        escreval()
                      fimpara
                      enquanto k <> 1 faca

                                escreval("Selecione a opção que corresponde ao valor de seu empréstimo: ")

                                para z de 1 ate 5 faca
                                    escreval(z, " - ", fx[z])
                                fimpara
                                leia(f)//que representa a linha que será usada da matriz principal
                                l <- f + 5
                                escreval("Agora digite o valor do emprestimo")
                                leia(emp)

                                escreval()
                                escreval("Você deseja selecionar em meses as parcelas?")
                                escreval("(1) Sim | (0) Não (escolher por anos)")
                                escreval("Caso não você escolherá quantos anos irá dividir")
                                escreval("escolha qual for do seu agrado não muda no resultado final")
                                escreval("OBS: se digitar algo diferente será selecionado a opção meses")
                                leia(op2)

                                opcao_valida <- verdadeiro

                                se op2 = 0 entao
                                   escreval("Agora selecione a opção que corresponde ao numero de parcelas: ")

                                   para x de 1 ate 9 faca
                                        escreval(x, " - ", parcela[x])
                                   fimpara
                                   leia(c)
                                   se c = 9 entao
                                      escreval("Digite quantos anos por favor")
                                      leia(o)
                                      prc <- o
                                   senao
                                        se (c >=1) e (c <= 8) entao
                                           prc <- c
                                        senao
                                             escreval("Opção invalida! Reiniciando...")
                                             opcao_valida <- falso
                                        fimse
                                   fimse
                                   prc <- prc * 12
                                senao
                                     se op2 <> 0 entao
                                        escreval("Você irá pagar em menos de 96 vezes?")
                                        escreval("(1) SIM |(0) Não (- de 96 vezes)")
                                        leia(esc)
                                        se esc = 1 entao
                                           escreval("Agora selecione a opção que corresponde ao numero de parcelas: ")

                                           para x de 1 ate 9 faca
                                                escreval(x, " - ", parcela[x])
                                           fimpara
                                           leia(o)
                                           se (o >= 1) e (o <=8) entao
                                              c <- o
                                           senao
                                                se o = 9 entao
                                                   escreval("Quantos anos anos você irá pagar?")
                                                   leia(c)
                                                senao
                                                     se (o < 1) ou (o > 9) entao
                                                        escreval("Opção invalida! Reiniciando...")
                                                        opcao_valida <- falso
                                                     fimse
                                                fimse
                                           fimse
                                     fimse
                                fimse
                                se opcao_valida entao

                                   escreval("A taxa ao mês aplicada em cima do empréstimo será de: ", tx[l,c], "%")
                                   escreval()


                                   tax <- tx[l,c] / 100
                                   num <- tax * (1 + tax) ^ prc
                                   den <- ((1 + tax) ^ prc) - 1
                                   vpar <- emp * (num / den)
                                   mont <- vpar * prc
                                   jr <- mont - emp

                                   escreval("-----------------------------------------")
                                   escreval("RESULTADO DO EMPRÉSTIMO")
                                   escreval("Taxa aplicada: ", tx[l, c], "% ao mês")
                                   escreval("Valor de cada parcela: R$ ", vpar:2:2)
                                   escreval("Total de juros: R$ ", jr:2:2)
                                   escreval("Total a pagar: R$ ", mont:2:2)
                                   escreval("Liquidado em: ", prc, " meses")
                                   escreval("-----------------------------------------")
                                   escreval()
                                   escreval("Digite ENTER para continuar")
                                   leia(pause)
                                   escreval()
                                   escreval()
                                   escreval("Você deseja refazer as contas no mesmo banco?")
                                   escreval("(1) Sim | (0) Não (Voltar ao menu principal)")
                                   escreval("Qualquer valor diferente disso voltará ao menu"
                                   leia(op3)

                                   se op3 <> 1 entao
                                      k <- 1
                                fimse
                       fimenquanto



                  caso 3
                       escreval("========================================================")
                       escreval("                      BRADESCO                          ")
                       escreval("========================================================")
                       escreval()
                       para y de 1 ate 2 faca
                            timer(300)
                                      escreva("Loading")
                                      escreva(".")
                                      escreva(".")
                                      escreva(".")
                            timer(0)
                            escreval()
                       fimpara

                       enquanto k <> 1 faca

                                escreval("Selecione a opção que corresponde ao valor de seu empréstimo: ")

                                para z de 1 ate 5 faca
                                    escreval(z, " - ", fx[z])
                                fimpara
                                leia(f)//que representa a linha que será usada da matriz principal
                                l <- f + 10

                                escreval("Agora digite o valor do emprestimo")
                                leia(emp)

                                escreval()
                                escreval("Você deseja selecionar em meses as parcelas?")
                                escreval("(1) Sim | (0) Não (escolher por anos)")
                                escreval("Caso não você escolherá quantos anos irá dividir")
                                escreval("escolha qual for do seu agrado não muda no resultado final")
                                escreval("OBS: se digitar algo diferente será selecionado a opção meses")
                                leia(op2)

                                opcao_valida <- verdadeiro

                                se op2 = 0 entao
                                   escreval("Agora selecione a opção que corresponde ao numero de parcelas: ")

                                   para x de 1 ate 9 faca
                                        escreval(x, " - ", parcela[x])
                                   fimpara
                                   leia(c)
                                   se c = 9 entao
                                      escreval("Digite quantos anos por favor")
                                      leia(o)
                                      prc <- o
                                   senao
                                        se (c >=1) e (c <= 8) entao
                                           prc <- c
                                        senao
                                             escreval("Opção invalida! Reiniciando...")
                                             opcao_valida <- falso
                                        fimse
                                   fimse
                                   prc <- prc * 12
                                senao
                                     se op2 <> 0 entao
                                        escreval("Você irá pagar em menos de 96 vezes?")
                                        escreval("(1) SIM |(0) Não (- de 96 vezes)")
                                        leia(esc)
                                        se esc = 1 entao
                                           escreval("Agora selecione a opção que corresponde ao numero de parcelas: ")

                                           para x de 1 ate 9 faca
                                                escreval(x, " - ", parcela[x])
                                           fimpara
                                           leia(o)
                                           se (o >= 1) e (o <=8) entao
                                              c <- o
                                           senao
                                                se o = 9 entao
                                                   escreval("Quantos anos anos você irá pagar?")
                                                   leia(c)
                                                senao
                                                     se (o < 1) ou (o > 9) entao
                                                        escreval("Opção invalida! Reiniciando...")
                                                        opcao_valida <- falso
                                                     fimse
                                                fimse
                                           fimse
                                     fimse
                                fimse
                                se opcao_valida entao

                                   escreval("A taxa ao mês aplicada em cima do empréstimo será de: ", tx[l,c], "%")
                                   escreval()


                                   tax <- tx[l,c] / 100
                                   num <- tax * (1 + tax) ^ prc
                                   den <- ((1 + tax) ^ prc) - 1
                                   vpar <- emp * (num / den)
                                   mont <- vpar * prc
                                   jr <- mont - emp

                                   escreval("-----------------------------------------")
                                   escreval("RESULTADO DO EMPRÉSTIMO")
                                   escreval("Taxa aplicada: ", tx[l, c], "% ao mês")
                                   escreval("Valor de cada parcela: R$ ", vpar:2:2)
                                   escreval("Total de juros: R$ ", jr:2:2)
                                   escreval("Total a pagar: R$ ", mont:2:2)
                                   escreval("Liquidado em: ", prc, " meses")
                                   escreval("-----------------------------------------")
                                   escreval()
                                   escreval("Digite ENTER para continuar")
                                   leia(pause)
                                   escreval()
                                   escreval()
                                   escreval("Você deseja refazer as contas no mesmo banco?")
                                   escreval("(1) Sim | (0) Não (Voltar ao menu principal)")
                                   escreval("Qualquer valor diferente disso voltará ao menu"
                                   leia(op3)

                                   se op3 <> 1 entao
                                      k <- 1
                                fimse
                       fimenquanto



                  caso 4
                       escreval("========================================================")
                       escreval("                     ITAÚ UNIBANCO                      ")
                       escreval("========================================================")
                       escreval()
                       para y de 1 ate 2 faca
                            timer(300)
                                      escreva("Loading")
                                      escreva(".")
                                      escreva(".")
                                      escreva(".")
                            timer(0)
                            escreval()
                       fimpara

                       enquanto k <> 1 faca

                                escreval("Selecione a opção que corresponde ao valor de seu empréstimo: ")

                                para z de 1 ate 5 faca
                                    escreval(z, " - ", fx[z])
                                fimpara
                                leia(f)//que representa a linha que será usada da matriz principal
                                l <- f + 15
                                escreval("Agora digite o valor do emprestimo")
                                leia(emp)

                                escreval()
                                escreval("Você deseja selecionar em meses as parcelas?")
                                escreval("(1) Sim | (0) Não (escolher por anos)")
                                escreval("Caso não você escolherá quantos anos irá dividir")
                                escreval("escolha qual for do seu agrado não muda no resultado final")
                                escreval("OBS: se digitar algo diferente será selecionado a opção meses")
                                leia(op2)

                                opcao_valida <- verdadeiro

                                se op2 = 0 entao
                                   escreval("Agora selecione a opção que corresponde ao numero de parcelas: ")

                                   para x de 1 ate 9 faca
                                        escreval(x, " - ", parcela[x])
                                   fimpara
                                   leia(c)
                                   se c = 9 entao
                                      escreval("Digite quantos anos por favor")
                                      leia(o)
                                      prc <- o
                                   senao
                                        se (c >=1) e (c <= 8) entao
                                           prc <- c
                                        senao
                                             escreval("Opção invalida! Reiniciando...")
                                             opcao_valida <- falso
                                        fimse
                                   fimse
                                   prc <- prc * 12
                                senao
                                     se op2 <> 0 entao
                                        escreval("Você irá pagar em menos de 96 vezes?")
                                        escreval("(1) SIM |(0) Não (- de 96 vezes)")
                                        leia(esc)
                                        se esc = 1 entao
                                           escreval("Agora selecione a opção que corresponde ao numero de parcelas: ")

                                           para x de 1 ate 9 faca
                                                escreval(x, " - ", parcela[x])
                                           fimpara
                                           leia(o)
                                           se (o >= 1) e (o <=8) entao
                                              c <- o
                                           senao
                                                se o = 9 entao
                                                   escreval("Quantos anos anos você irá pagar?")
                                                   leia(c)
                                                senao
                                                     se (o < 1) ou (o > 9) entao
                                                        escreval("Opção invalida! Reiniciando...")
                                                        opcao_valida <- falso
                                                     fimse
                                                fimse
                                           fimse
                                     fimse
                                fimse
                                se opcao_valida entao

                                   escreval("A taxa ao mês aplicada em cima do empréstimo será de: ", tx[l,c], "%")
                                   escreval()


                                   tax <- tx[l,c] / 100
                                   num <- tax * (1 + tax) ^ prc
                                   den <- ((1 + tax) ^ prc) - 1
                                   vpar <- emp * (num / den)
                                   mont <- vpar * prc
                                   jr <- mont - emp

                                   escreval("-----------------------------------------")
                                   escreval("RESULTADO DO EMPRÉSTIMO")
                                   escreval("Taxa aplicada: ", tx[l, c], "% ao mês")
                                   escreval("Valor de cada parcela: R$ ", vpar:2:2)
                                   escreval("Total de juros: R$ ", jr:2:2)
                                   escreval("Total a pagar: R$ ", mont:2:2)
                                   escreval("Liquidado em: ", prc, " meses")
                                   escreval("-----------------------------------------")
                                   escreval()
                                   escreval("Digite ENTER para continuar")
                                   leia(pause)
                                   escreval()
                                   escreval()
                                   escreval("Você deseja refazer as contas no mesmo banco?")
                                   escreval("(1) Sim | (0) Não (Voltar ao menu principal)")
                                   escreval("Qualquer valor diferente disso voltará ao menu"
                                   leia(op3)

                                   se op3 <> 1 entao
                                      k <- 1
                                fimse
                       fimenquanto



                  caso 5
                       escreval("========================================================")
                       escreval("                      SANTANDER                         ")
                       escreval("========================================================")
                       escreval()
                       para y de 1 ate 2 faca
                            timer(300)
                                      escreva("Loading")
                                      escreva(".")
                                      escreva(".")
                                      escreva(".")
                            timer(0)
                            escreval()
                       fimpara

                       enquanto k <> 1 faca

                                escreval("Selecione a opção que corresponde ao valor de seu empréstimo: ")

                                para z de 1 ate 5 faca
                                    escreval(z, " - ", fx[z])
                                fimpara
                                leia(f)//que representa a linha que será usada da matriz principal
                                l <- f + 20
                                escreval("Agora digite o valor do emprestimo")
                                leia(emp)

                                escreval()
                                escreval("Você deseja selecionar em meses as parcelas?")
                                escreval("(1) Sim | (0) Não (escolher por anos)")
                                escreval("Caso não você escolherá quantos anos irá dividir")
                                escreval("escolha qual for do seu agrado não muda no resultado final")
                                escreval("OBS: se digitar algo diferente será selecionado a opção meses")
                                leia(op2)

                                opcao_valida <- verdadeiro

                                se op2 = 0 entao
                                   escreval("Agora selecione a opção que corresponde ao numero de parcelas: ")

                                   para x de 1 ate 9 faca
                                        escreval(x, " - ", parcela[x])
                                   fimpara
                                   leia(c)
                                   se c = 9 entao
                                      escreval("Digite quantos anos por favor")
                                      leia(o)
                                      prc <- o
                                   senao
                                        se (c >=1) e (c <= 8) entao
                                           prc <- c
                                        senao
                                             escreval("Opção invalida! Reiniciando...")
                                             opcao_valida <- falso
                                        fimse
                                   fimse
                                   prc <- prc * 12
                                senao
                                     se op2 <> 0 entao
                                        escreval("Você irá pagar em menos de 96 vezes?")
                                        escreval("(1) SIM |(0) Não (- de 96 vezes)")
                                        leia(esc)
                                        se esc = 1 entao
                                           escreval("Agora selecione a opção que corresponde ao numero de parcelas: ")

                                           para x de 1 ate 9 faca
                                                escreval(x, " - ", parcela[x])
                                           fimpara
                                           leia(o)
                                           se (o >= 1) e (o <=8) entao
                                              c <- o
                                           senao
                                                se o = 9 entao
                                                   escreval("Quantos anos anos você irá pagar?")
                                                   leia(c)
                                                senao
                                                     se (o < 1) ou (o > 9) entao
                                                        escreval("Opção invalida! Reiniciando...")
                                                        opcao_valida <- falso
                                                     fimse
                                                fimse
                                           fimse
                                     fimse
                                fimse
                                se opcao_valida entao

                                   escreval("A taxa ao mês aplicada em cima do empréstimo será de: ", tx[l,c], "%")
                                   escreval()


                                   tax <- tx[l,c] / 100
                                   num <- tax * (1 + tax) ^ prc
                                   den <- ((1 + tax) ^ prc) - 1
                                   vpar <- emp * (num / den)
                                   mont <- vpar * prc
                                   jr <- mont - emp

                                   escreval("-----------------------------------------")
                                   escreval("RESULTADO DO EMPRÉSTIMO")
                                   escreval("Taxa aplicada: ", tx[l, c], "% ao mês")
                                   escreval("Valor de cada parcela: R$ ", vpar:2:2)
                                   escreval("Total de juros: R$ ", jr:2:2)
                                   escreval("Total a pagar: R$ ", mont:2:2)
                                   escreval("Liquidado em: ", prc, " meses")
                                   escreval("-----------------------------------------")
                                   escreval()
                                   escreval("Digite ENTER para continuar")
                                   leia(pause)
                                   escreval()
                                   escreval()
                                   escreval("Você deseja refazer as contas no mesmo banco?")
                                   escreval("(1) Sim | (0) Não (Voltar ao menu principal)")
                                   escreval("Qualquer valor diferente disso voltará ao menu"
                                   leia(op3)

                                   se op3 <> 1 entao
                                      k <- 1
                                fimse
                       fimenquanto



                  caso 6
                       escreval("========================================================")
                       escreval("                      BANCO INTER                       ")
                       escreval("========================================================")
                       escreval()
                       para y de 1 ate 2 faca
                            timer(300)
                                      escreva("Loading")
                                      escreva(".")
                                      escreva(".")
                                      escreva(".")
                            timer(0)
                            escreval()
                       fimpara

                       enquanto k <> 1 faca

                                escreval("Selecione a opção que corresponde ao valor de seu empréstimo: ")

                                para z de 1 ate 5 faca
                                    escreval(z, " - ", fx[z])
                                fimpara
                                leia(f)//que representa a linha que será usada da matriz principal
                                l <- f + 25
                                escreval("Agora digite o valor do emprestimo")
                                leia(emp)

                                escreval()
                                escreval("Você deseja selecionar em meses as parcelas?")
                                escreval("(1) Sim | (0) Não (escolher por anos)")
                                escreval("Caso não você escolherá quantos anos irá dividir")
                                escreval("escolha qual for do seu agrado não muda no resultado final")
                                escreval("OBS: se digitar algo diferente será selecionado a opção meses")
                                leia(op2)

                                opcao_valida <- verdadeiro

                                se op2 = 0 entao
                                   escreval("Agora selecione a opção que corresponde ao numero de parcelas: ")

                                   para x de 1 ate 9 faca
                                        escreval(x, " - ", parcela[x])
                                   fimpara
                                   leia(c)
                                   se c = 9 entao
                                      escreval("Digite quantos anos por favor")
                                      leia(o)
                                      prc <- o
                                   senao
                                        se (c >=1) e (c <= 8) entao
                                           prc <- c
                                        senao
                                             escreval("Opção invalida! Reiniciando...")
                                             opcao_valida <- falso
                                        fimse
                                   fimse
                                   prc <- prc * 12
                                senao
                                     se op2 <> 0 entao
                                        escreval("Você irá pagar em menos de 96 vezes?")
                                        escreval("(1) SIM |(0) Não (- de 96 vezes)")
                                        leia(esc)
                                        se esc = 1 entao
                                           escreval("Agora selecione a opção que corresponde ao numero de parcelas: ")

                                           para x de 1 ate 9 faca
                                                escreval(x, " - ", parcela[x])
                                           fimpara
                                           leia(o)
                                           se (o >= 1) e (o <=8) entao
                                              c <- o
                                           senao
                                                se o = 9 entao
                                                   escreval("Quantos anos anos você irá pagar?")
                                                   leia(c)
                                                senao
                                                     se (o < 1) ou (o > 9) entao
                                                        escreval("Opção invalida! Reiniciando...")
                                                        opcao_valida <- falso
                                                     fimse
                                                fimse
                                           fimse
                                     fimse
                                fimse
                                se opcao_valida entao

                                   escreval("A taxa ao mês aplicada em cima do empréstimo será de: ", tx[l,c], "%")
                                   escreval()


                                   tax <- tx[l,c] / 100
                                   num <- tax * (1 + tax) ^ prc
                                   den <- ((1 + tax) ^ prc) - 1
                                   vpar <- emp * (num / den)
                                   mont <- vpar * prc
                                   jr <- mont - emp

                                   escreval("-----------------------------------------")
                                   escreval("RESULTADO DO EMPRÉSTIMO")
                                   escreval("Taxa aplicada: ", tx[l, c], "% ao mês")
                                   escreval("Valor de cada parcela: R$ ", vpar:2:2)
                                   escreval("Total de juros: R$ ", jr:2:2)
                                   escreval("Total a pagar: R$ ", mont:2:2)
                                   escreval("Liquidado em: ", prc, " meses")
                                   escreval("-----------------------------------------")
                                   escreval()
                                   escreval("Digite ENTER para continuar")
                                   leia(pause)
                                   escreval()
                                   escreval()
                                   escreval("Você deseja refazer as contas no mesmo banco?")
                                   escreval("(1) Sim | (0) Não (Voltar ao menu principal)")
                                   escreval("Qualquer valor diferente disso voltará ao menu"
                                   leia(op3)

                                   se op3 <> 1 entao
                                      k <- 1
                                fimse
                       fimenquanto



                  caso 7
                       escreval("=======================================================")
                       escreval("                      PAGBANK                          ")
                       escreval("=======================================================")
                       escreval()
                       para y de 1 ate 2 faca
                            timer(300)
                                      escreva("Loading")
                                      escreva(".")
                                      escreva(".")
                                      escreva(".")
                            timer(0)
                            escreval()
                       fimpara

                       enquanto k <> 1 faca

                                escreval("Selecione a opção que corresponde ao valor de seu empréstimo: ")

                                para z de 1 ate 5 faca
                                    escreval(z, " - ", fx[z])
                                fimpara
                                leia(f)//que representa a linha que será usada da matriz principal
                                l <- f + 30
                                escreval("Agora digite o valor do emprestimo")
                                leia(emp)

                                escreval()
                                escreval("Você deseja selecionar em meses as parcelas?")
                                escreval("(1) Sim | (0) Não (escolher por anos)")
                                escreval("Caso não você escolherá quantos anos irá dividir")
                                escreval("escolha qual for do seu agrado não muda no resultado final")
                                escreval("OBS: se digitar algo diferente será selecionado a opção meses")
                                leia(op2)

                                opcao_valida <- verdadeiro

                                se op2 = 0 entao
                                   escreval("Agora selecione a opção que corresponde ao numero de parcelas: ")

                                   para x de 1 ate 9 faca
                                        escreval(x, " - ", parcela[x])
                                   fimpara
                                   leia(c)
                                   se c = 9 entao
                                      escreval("Digite quantos anos por favor")
                                      leia(o)
                                      prc <- o
                                   senao
                                        se (c >=1) e (c <= 8) entao
                                           prc <- c
                                        senao
                                             escreval("Opção invalida! Reiniciando...")
                                             opcao_valida <- falso
                                        fimse
                                   fimse
                                   prc <- prc * 12
                                senao
                                     se op2 <> 0 entao
                                        escreval("Você irá pagar em menos de 96 vezes?")
                                        escreval("(1) SIM |(0) Não (- de 96 vezes)")
                                        leia(esc)
                                        se esc = 1 entao
                                           escreval("Agora selecione a opção que corresponde ao numero de parcelas: ")

                                           para x de 1 ate 9 faca
                                                escreval(x, " - ", parcela[x])
                                           fimpara
                                           leia(o)
                                           se (o >= 1) e (o <=8) entao
                                              c <- o
                                           senao
                                                se o = 9 entao
                                                   escreval("Quantos anos anos você irá pagar?")
                                                   leia(c)
                                                senao
                                                     se (o < 1) ou (o > 9) entao
                                                        escreval("Opção invalida! Reiniciando...")
                                                        opcao_valida <- falso
                                                     fimse
                                                fimse
                                           fimse
                                     fimse
                                fimse
                                se opcao_valida entao

                                   escreval("A taxa ao mês aplicada em cima do empréstimo será de: ", tx[l,c], "%")
                                   escreval()


                                   tax <- tx[l,c] / 100
                                   num <- tax * (1 + tax) ^ prc
                                   den <- ((1 + tax) ^ prc) - 1
                                   vpar <- emp * (num / den)
                                   mont <- vpar * prc
                                   jr <- mont - emp

                                   escreval("-----------------------------------------")
                                   escreval("RESULTADO DO EMPRÉSTIMO")
                                   escreval("Taxa aplicada: ", tx[l, c], "% ao mês")
                                   escreval("Valor de cada parcela: R$ ", vpar:2:2)
                                   escreval("Total de juros: R$ ", jr:2:2)
                                   escreval("Total a pagar: R$ ", mont:2:2)
                                   escreval("Liquidado em: ", prc, " meses")
                                   escreval("-----------------------------------------")
                                   escreval()
                                   escreval("Digite ENTER para continuar")
                                   leia(pause)
                                   escreval()
                                   escreval()
                                   escreval("Você deseja refazer as contas no mesmo banco?")
                                   escreval("(1) Sim | (0) Não (Voltar ao menu principal)")
                                   escreval("Qualquer valor diferente disso voltará ao menu"
                                   leia(op3)

                                   se op3 <> 1 entao
                                      k <- 1
                                fimse
                       fimenquanto



                  caso 8
                       escreval("========================================================")
                       escreval("                       NUBANK                           ")
                       escreval("========================================================")
                       escreval()
                       para y de 1 ate 2 faca
                            timer(300)
                                      escreva("Loading")
                                      escreva(".")
                                      escreva(".")
                                      escreva(".")
                            timer(0)
                            escreval()
                       fimpara

                       enquanto k <> 1 faca

                                escreval("Selecione a opção que corresponde ao valor de seu empréstimo: ")

                                para z de 1 ate 5 faca
                                    escreval(z, " - ", fx[z])
                                fimpara
                                leia(f)//que representa a linha que será usada da matriz principal
                                l <- f + 35
                                escreval("Agora digite o valor do emprestimo")
                                leia(emp)

                                escreval()
                                escreval("Você deseja selecionar em meses as parcelas?")
                                escreval("(1) Sim | (0) Não (escolher por anos)")
                                escreval("Caso não você escolherá quantos anos irá dividir")
                                escreval("escolha qual for do seu agrado não muda no resultado final")
                                escreval("OBS: se digitar algo diferente será selecionado a opção meses")
                                leia(op2)

                                opcao_valida <- verdadeiro

                                se op2 = 0 entao
                                   escreval("Agora selecione a opção que corresponde ao numero de parcelas: ")

                                   para x de 1 ate 9 faca
                                        escreval(x, " - ", parcela[x])
                                   fimpara
                                   leia(c)
                                   se c = 9 entao
                                      escreval("Digite quantos anos por favor")
                                      leia(o)
                                      prc <- o
                                   senao
                                        se (c >=1) e (c <= 8) entao
                                           prc <- c
                                        senao
                                             escreval("Opção invalida! Reiniciando...")
                                             opcao_valida <- falso
                                        fimse
                                   fimse
                                   prc <- prc * 12
                                senao
                                     se op2 <> 0 entao
                                        escreval("Você irá pagar em menos de 96 vezes?")
                                        escreval("(1) SIM |(0) Não (- de 96 vezes)")
                                        leia(esc)
                                        se esc = 1 entao
                                           escreval("Agora selecione a opção que corresponde ao numero de parcelas: ")

                                           para x de 1 ate 9 faca
                                                escreval(x, " - ", parcela[x])
                                           fimpara
                                           leia(o)
                                           se (o >= 1) e (o <=8) entao
                                              c <- o
                                           senao
                                                se o = 9 entao
                                                   escreval("Quantos anos anos você irá pagar?")
                                                   leia(c)
                                                senao
                                                     se (o < 1) ou (o > 9) entao
                                                        escreval("Opção invalida! Reiniciando...")
                                                        opcao_valida <- falso
                                                     fimse
                                                fimse
                                           fimse
                                     fimse
                                fimse
                                se opcao_valida entao

                                   escreval("A taxa ao mês aplicada em cima do empréstimo será de: ", tx[l,c], "%")
                                   escreval()


                                   tax <- tx[l,c] / 100
                                   num <- tax * (1 + tax) ^ prc
                                   den <- ((1 + tax) ^ prc) - 1
                                   vpar <- emp * (num / den)
                                   mont <- vpar * prc
                                   jr <- mont - emp

                                   escreval("-----------------------------------------")
                                   escreval("RESULTADO DO EMPRÉSTIMO")
                                   escreval("Taxa aplicada: ", tx[l, c], "% ao mês")
                                   escreval("Valor de cada parcela: R$ ", vpar:2:2)
                                   escreval("Total de juros: R$ ", jr:2:2)
                                   escreval("Total a pagar: R$ ", mont:2:2)
                                   escreval("Liquidado em: ", prc, " meses")
                                   escreval("-----------------------------------------")
                                   escreval()
                                   escreval("Digite ENTER para continuar")
                                   leia(pause)
                                   escreval()
                                   escreval()
                                   escreval("Você deseja refazer as contas no mesmo banco?")
                                   escreval("(1) Sim | (0) Não (Voltar ao menu principal)")
                                   escreval("Qualquer valor diferente disso voltará ao menu"
                                   leia(op3)

                                   se op3 <> 1 entao
                                      k <- 1
                                fimse
                       fimenquanto



                  caso 9
                       escreval("=======================================================")
                       escreval("                   MERCADO PAGO                        ")
                       escreval("=======================================================")
                       escreval()
                       para y de 1 ate 2 faca
                            timer(300)
                                      escreva("Loading")
                                      escreva(".")
                                      escreva(".")
                                      escreva(".")
                            timer(0)
                            escreval()
                       fimpara

                       enquanto k <> 1 faca

                                escreval("Selecione a opção que corresponde ao valor de seu empréstimo: ")

                                para z de 1 ate 5 faca
                                    escreval(z, " - ", fx[z])
                                fimpara
                                leia(f)//que representa a linha que será usada da matriz principal
                                l <- f + 40
                                escreval("Agora digite o valor do emprestimo")
                                leia(emp)

                                escreval()
                                escreval("Você deseja selecionar em meses as parcelas?")
                                escreval("(1) Sim | (0) Não (escolher por anos)")
                                escreval("Caso não você escolherá quantos anos irá dividir")
                                escreval("escolha qual for do seu agrado não muda no resultado final")
                                escreval("OBS: se digitar algo diferente será selecionado a opção meses")
                                leia(op2)

                                opcao_valida <- verdadeiro

                                se op2 = 0 entao
                                   escreval("Agora selecione a opção que corresponde ao numero de parcelas: ")

                                   para x de 1 ate 9 faca
                                        escreval(x, " - ", parcela[x])
                                   fimpara
                                   leia(c)
                                   se c = 9 entao
                                      escreval("Digite quantos anos por favor")
                                      leia(o)
                                      prc <- o
                                   senao
                                        se (c >=1) e (c <= 8) entao
                                           prc <- c
                                        senao
                                             escreval("Opção invalida! Reiniciando...")
                                             opcao_valida <- falso
                                        fimse
                                   fimse
                                   prc <- prc * 12
                                senao
                                     se op2 <> 0 entao
                                        escreval("Você irá pagar em menos de 96 vezes?")
                                        escreval("(1) SIM |(0) Não (- de 96 vezes)")
                                        leia(esc)
                                        se esc = 1 entao
                                           escreval("Agora selecione a opção que corresponde ao numero de parcelas: ")

                                           para x de 1 ate 9 faca
                                                escreval(x, " - ", parcela[x])
                                           fimpara
                                           leia(o)
                                           se (o >= 1) e (o <=8) entao
                                              c <- o
                                           senao
                                                se o = 9 entao
                                                   escreval("Quantos anos anos você irá pagar?")
                                                   leia(c)
                                                senao
                                                     se (o < 1) ou (o > 9) entao
                                                        escreval("Opção invalida! Reiniciando...")
                                                        opcao_valida <- falso
                                                     fimse
                                                fimse
                                           fimse
                                     fimse
                                fimse
                                se opcao_valida entao

                                   escreval("A taxa ao mês aplicada em cima do empréstimo será de: ", tx[l,c], "%")
                                   escreval()


                                   tax <- tx[l,c] / 100
                                   num <- tax * (1 + tax) ^ prc
                                   den <- ((1 + tax) ^ prc) - 1
                                   vpar <- emp * (num / den)
                                   mont <- vpar * prc
                                   jr <- mont - emp

                                   escreval("-----------------------------------------")
                                   escreval("RESULTADO DO EMPRÉSTIMO")
                                   escreval("Taxa aplicada: ", tx[l, c], "% ao mês")
                                   escreval("Valor de cada parcela: R$ ", vpar:2:2)
                                   escreval("Total de juros: R$ ", jr:2:2)
                                   escreval("Total a pagar: R$ ", mont:2:2)
                                   escreval("Liquidado em: ", prc, " meses")
                                   escreval("-----------------------------------------")
                                   escreval()
                                   escreval("Digite ENTER para continuar")
                                   leia(pause)
                                   escreval()
                                   escreval()
                                   escreval("Você deseja refazer as contas no mesmo banco?")
                                   escreval("(1) Sim | (0) Não (Voltar ao menu principal)")
                                   escreval("Qualquer valor diferente disso voltará ao menu"
                                   leia(op3)

                                   se op3 <> 1 entao
                                      k <- 1
                                fimse
                       fimenquanto



                  caso 10
                       escreval("=======================================================")
                       escreval("                       PICPAY                          ")
                       escreval("=======================================================")
                       escreval()
                       para y de 1 ate 2 faca
                            timer(300)
                                      escreva("Loading.")
                                      escreva(".")
                                      escreva(".")
                                      escreva(".")
                            timer(0)
                            escreval()
                       fimpara
                       enquanto k <> 1 faca

                                escreval("Selecione a opção que corresponde ao valor de seu empréstimo: ")

                                para z de 1 ate 5 faca
                                    escreval(z, " - ", fx[z])
                                fimpara
                                leia(f)//que representa a linha que será usada da matriz principal
                                l <- f + 45
                                escreval("Agora digite o valor do emprestimo")
                                leia(emp)

                                escreval()
                                escreval("Você deseja selecionar em meses as parcelas?")
                                escreval("(1) Sim | (0) Não (escolher por anos)")
                                escreval("Caso não você escolherá quantos anos irá dividir")
                                escreval("escolha qual for do seu agrado não muda no resultado final")
                                escreval("OBS: se digitar algo diferente será selecionado a opção meses")
                                leia(op2)

                                opcao_valida <- verdadeiro

                                se op2 = 0 entao
                                   escreval("Agora selecione a opção que corresponde ao numero de parcelas: ")

                                   para x de 1 ate 9 faca
                                        escreval(x, " - ", parcela[x])
                                   fimpara
                                   leia(c)
                                   se c = 9 entao
                                      escreval("Digite quantos anos por favor")
                                      leia(o)
                                      prc <- o
                                   senao
                                        se (c >=1) e (c <= 8) entao
                                           prc <- c
                                        senao
                                             escreval("Opção invalida! Reiniciando...")
                                             opcao_valida <- falso
                                        fimse
                                   fimse
                                   prc <- prc * 12
                                senao
                                     se op2 <> 0 entao
                                        escreval("Você irá pagar em menos de 96 vezes?")
                                        escreval("(1) SIM |(0) Não (- de 96 vezes)")
                                        leia(esc)
                                        se esc = 1 entao
                                           escreval("Agora selecione a opção que corresponde ao numero de parcelas: ")

                                           para x de 1 ate 9 faca
                                                escreval(x, " - ", parcela[x])
                                           fimpara
                                           leia(o)
                                           se (o >= 1) e (o <=8) entao
                                              c <- o
                                           senao
                                                se o = 9 entao
                                                   escreval("Quantos anos anos você irá pagar?")
                                                   leia(c)
                                                senao
                                                     se (o < 1) ou (o > 9) entao
                                                        escreval("Opção invalida! Reiniciando...")
                                                        opcao_valida <- falso
                                                     fimse
                                                fimse
                                           fimse
                                     fimse
                                fimse
                                se opcao_valida entao

                                   escreval("A taxa ao mês aplicada em cima do empréstimo será de: ", tx[l,c], "%")
                                   escreval()


                                   tax <- tx[l,c] / 100
                                   num <- tax * (1 + tax) ^ prc
                                   den <- ((1 + tax) ^ prc) - 1
                                   vpar <- emp * (num / den)
                                   mont <- vpar * prc
                                   jr <- mont - emp

                                   escreval("-----------------------------------------")
                                   escreval("RESULTADO DO EMPRÉSTIMO")
                                   escreval("Taxa aplicada: ", tx[l, c], "% ao mês")
                                   escreval("Valor de cada parcela: R$ ", vpar:2:2)
                                   escreval("Total de juros: R$ ", jr:2:2)
                                   escreval("Total a pagar: R$ ", mont:2:2)
                                   escreval("Liquidado em: ", prc, " meses")
                                   escreval("-----------------------------------------")
                                   escreval()
                                   escreval("Digite ENTER para continuar")
                                   leia(pause)
                                   escreval()
                                   escreval()
                                   escreval("Você deseja refazer as contas no mesmo banco?")
                                   escreval("(1) Sim | (0) Não (Voltar ao menu principal)")
                                   escreval("Qualquer valor diferente disso voltará ao menu"
                                   leia(op3)

                                   se op3 <> 1 entao
                                      k <- 1
                                fimse
                       fimenquanto

                  caso 0
                       escreval("Saindo...")
                       i <- 1

                  outrocaso
                           escreval("Opção inválida")

               fimescolha

               enquanto m <> 1 faca

                        escreval("Deseja continuar?")
                        escreval("(1) Sim | (0) Não(finalizar)")
                        leia(fim)

                        se fim = 1 entao
                        m <- 1
                        senao
                             se fim = 0
                                m <- 1
                                i <- 1
                             senao
                                  se (fim <> 0) e (fim <> 1) entao
                                  escreval("Opção invalida!")
                                  fimse
                             fimse
                        fimse

      fimenquanto

fimalgoritmo

fimse
	return 0;
}