#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    
    
    printf("Bom dia, seja bem vindo ao simulador de empréstimo financeiro \n");
    printf("\n");

    enquanto i <> 1 faca

    	m <- 0
        k <- 0
        int expl
        printf("deseja uma explicação mais detalhada sobre os valores? (1) para sim (0) para não \n");
        scanf("%d", expl);

        se expl <> 0 entao
            printf("sobre as taxas todas foram em base de um peril entre medio e baixo de creditos")
            printf("Onde buscamos a maior fidelidade possível e temos as taxas de 10 bancos")
            printf("as taxas variam de acordo com a parcela e o valor usado")
            printf("OBS: As taxas originais variam de acordo com seu perfil de crédito")
            printf("após a leitura digite ENTER para continuar")
            scanf(pause)
        fimse

        printf("====================MENU====================")
		printf("Escolha seu banco")
        printf("1 - Banco do Brasil")
        printf("2 - Caixa Econ�mica Federal")
        printf("3 - Bradesco")
        printfl("4 - Ita� Unibanco")
        printf("5 - Santander")
        printf("6 - Banco Inter")	
		printf("7 - Pagbank")
        printf("8 - Nubank")
        printf("9 - Mercado pago")
        printf("10 - Picpay")
        printf("0 - Sair")
        scanf(op1)

        escolha op1

            caso 1

                printf("========================================================")
                printf("                     BANCO DO BRASIL                    ")
                printf("========================================================")
                printf()

            	para y de 1 ate 2 faca
                            timer(3)
                                      escreva("Loading")
                                      escreva(".")
                                      escreva(".")
                                      escreva(".")
                            timer(0)
                            escreval()
                       fimpara

                       enquanto k <> 1 faca

                                escreval("Selecione a op��o que corresponde ao valor de seu empr�stimo: ")

                                para z de 1 ate 5 faca
                                    escreval(z, " - ", fx[z])
                                fimpara
                                leia(l)

                                se (l < 1) ou (l > 5) entao
                                escreval("Op��o inv�lida! Tente novamente...")
                                opcao_valida <- falso
                                fimse

                                escreval("Agora digite o valor do emprestimo")
                                leia(emp)

                                escreval()

                                escreval()
                                escreval("Voc� deseja selecionar em meses as parcelas?")
                                escreval("(1) Sim | (0) N�o (escolher por anos)")
                                escreval("Caso n�o voc� escolher� quantos anos ir� dividir")
                                escreval("escolha qual for do seu agrado n�o muda no resultado final")
                                escreval("OBS: se digitar algo diferente ser� selecionado a op��o meses")
                                leia(op2)

                                opcao_valida <- verdadeiro

                                se op2 = 0 entao
                                   escreval("Agora selecione a op��o que corresponde ao numero de parcelas: ")

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
                                             escreval("Op��o invalida! Reiniciando...")
                                             opcao_valida <- falso
                                        fimse
                                   fimse
                                   prc <- prc * 12
                                senao
                                     se op2 <> 0 entao
                                        escreval("Voc� ir� pagar em menos de 96 vezes?")
                                        escreval("(1) SIM |(0) N�o (- de 96 vezes)")
                                        leia(esc)
                                        se esc = 1 entao
                                           escreval("Agora selecione a op��o que corresponde ao numero de parcelas: ")

                                           para x de 1 ate 9 faca
                                                escreval(x, " - ", parcela[x])
                                           fimpara
                                           leia(o)
                                           se (o >= 1) e (o <=8) entao
                                              c <- o
                                           senao
                                                se o = 9 entao
                                                   escreval("Quantos anos anos voc� ir� pagar?")
                                                   leia(c)
                                                senao
                                                     se (o < 1) ou (o > 9) entao
                                                        escreval("Op��o invalida! Reiniciando...")
                                                        opcao_valida <- falso
                                                     fimse
                                                fimse
                                           fimse
                                     fimse
                                fimse

                                se opcao_valida entao
                                   escreval("A taxa ao m�s aplicada em cima do empr�stimo ser� de: ", tx[l,c], "%")
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
                                   escreval("RESULTADO DO EMPR�STIMO")
                                   escreval("Taxa aplicada: ", tx[l, c], "% ao m�s")
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
                                   escreval("Voc� deseja refazer as contas no mesmo banco?")
                                   escreval("(1) Sim | (0) N�o, qualquer valor diferente disso voltar� ao menu")
                                   leia(op3)

                                   se op3 <> 1 entao
                                      k <- 1
                                   fimse
                                fimse
                         fimenquanto

                  caso 2
                      escreval("========================================================")
                      escreval("                CAIXA ECON�MICA FEDERAL                 ")
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

                                escreval("Selecione a op��o que corresponde ao valor de seu empr�stimo: ")

                                para z de 1 ate 5 faca
                                    escreval(z, " - ", fx[z])
                                fimpara
                                leia(f)//que representa a linha que ser� usada da matriz principal
                                l <- f + 5
                                escreval("Agora digite o valor do emprestimo")
                                leia(emp)

                                escreval()
                                escreval("Voc� deseja selecionar em meses as parcelas?")
                                escreval("(1) Sim | (0) N�o (escolher por anos)")
                                escreval("Caso n�o voc� escolher� quantos anos ir� dividir")
                                escreval("escolha qual for do seu agrado n�o muda no resultado final")
                                escreval("OBS: se digitar algo diferente ser� selecionado a op��o meses")
                                leia(op2)

                                opcao_valida <- verdadeiro

                                se op2 = 0 entao
                                   escreval("Agora selecione a op��o que corresponde ao numero de parcelas: ")

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
                                             escreval("Op��o invalida! Reiniciando...")
                                             opcao_valida <- falso
                                        fimse
                                   fimse
                                   prc <- prc * 12
                                senao
                                     se op2 <> 0 entao
                                        escreval("Voc� ir� pagar em menos de 96 vezes?")
                                        escreval("(1) SIM |(0) N�o (- de 96 vezes)")
                                        leia(esc)
                                        se esc = 1 entao
                                           escreval("Agora selecione a op��o que corresponde ao numero de parcelas: ")

                                           para x de 1 ate 9 faca
                                                escreval(x, " - ", parcela[x])
                                           fimpara
                                           leia(o)
                                           se (o >= 1) e (o <=8) entao
                                              c <- o
                                           senao
                                                se o = 9 entao
                                                   escreval("Quantos anos anos voc� ir� pagar?")
                                                   leia(c)
                                                senao
                                                     se (o < 1) ou (o > 9) entao
                                                        escreval("Op��o invalida! Reiniciando...")
                                                        opcao_valida <- falso
                                                     fimse
                                                fimse
                                           fimse
                                     fimse
                                fimse
                                se opcao_valida entao

                                   escreval("A taxa ao m�s aplicada em cima do empr�stimo ser� de: ", tx[l,c], "%")
                                   escreval()


                                   tax <- tx[l,c] / 100
                                   num <- tax * (1 + tax) ^ prc
                                   den <- ((1 + tax) ^ prc) - 1
                                   vpar <- emp * (num / den)
                                   mont <- vpar * prc
                                   jr <- mont - emp

                                   escreval("-----------------------------------------")
                                   escreval("RESULTADO DO EMPR�STIMO")
                                   escreval("Taxa aplicada: ", tx[l, c], "% ao m�s")
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
                                   escreval("Voc� deseja refazer as contas no mesmo banco?")
                                   escreval("(1) Sim | (0) N�o (Voltar ao menu principal)")
                                   escreval("Qualquer valor diferente disso voltar� ao menu"
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

                                escreval("Selecione a op��o que corresponde ao valor de seu empr�stimo: ")

                                para z de 1 ate 5 faca
                                    escreval(z, " - ", fx[z])
                                fimpara
                                leia(f)//que representa a linha que ser� usada da matriz principal
                                l <- f + 10

                                escreval("Agora digite o valor do emprestimo")
                                leia(emp)

                                escreval()
                                escreval("Voc� deseja selecionar em meses as parcelas?")
                                escreval("(1) Sim | (0) N�o (escolher por anos)")
                                escreval("Caso n�o voc� escolher� quantos anos ir� dividir")
                                escreval("escolha qual for do seu agrado n�o muda no resultado final")
                                escreval("OBS: se digitar algo diferente ser� selecionado a op��o meses")
                                leia(op2)

                                opcao_valida <- verdadeiro

                                se op2 = 0 entao
                                   escreval("Agora selecione a op��o que corresponde ao numero de parcelas: ")

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
                                             escreval("Op��o invalida! Reiniciando...")
                                             opcao_valida <- falso
                                        fimse
                                   fimse
                                   prc <- prc * 12
                                senao
                                     se op2 <> 0 entao
                                        escreval("Voc� ir� pagar em menos de 96 vezes?")
                                        escreval("(1) SIM |(0) N�o (- de 96 vezes)")
                                        leia(esc)
                                        se esc = 1 entao
                                           escreval("Agora selecione a op��o que corresponde ao numero de parcelas: ")

                                           para x de 1 ate 9 faca
                                                escreval(x, " - ", parcela[x])
                                           fimpara
                                           leia(o)
                                           se (o >= 1) e (o <=8) entao
                                              c <- o
                                           senao
                                                se o = 9 entao
                                                   escreval("Quantos anos anos voc� ir� pagar?")
                                                   leia(c)
                                                senao
                                                     se (o < 1) ou (o > 9) entao
                                                        escreval("Op��o invalida! Reiniciando...")
                                                        opcao_valida <- falso
                                                     fimse
                                                fimse
                                           fimse
                                     fimse
                                fimse
                                se opcao_valida entao

                                   escreval("A taxa ao m�s aplicada em cima do empr�stimo ser� de: ", tx[l,c], "%")
                                   escreval()


                                   tax <- tx[l,c] / 100
                                   num <- tax * (1 + tax) ^ prc
                                   den <- ((1 + tax) ^ prc) - 1
                                   vpar <- emp * (num / den)
                                   mont <- vpar * prc
                                   jr <- mont - emp

                                   escreval("-----------------------------------------")
                                   escreval("RESULTADO DO EMPR�STIMO")
                                   escreval("Taxa aplicada: ", tx[l, c], "% ao m�s")
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
                                   escreval("Voc� deseja refazer as contas no mesmo banco?")
                                   escreval("(1) Sim | (0) N�o (Voltar ao menu principal)")
                                   escreval("Qualquer valor diferente disso voltar� ao menu"
                                   leia(op3)

                                   se op3 <> 1 entao
                                      k <- 1
                                fimse
                       fimenquanto



                  caso 4
                       escreval("========================================================")
                       escreval("                     ITA� UNIBANCO                      ")
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

                                escreval("Selecione a op��o que corresponde ao valor de seu empr�stimo: ")

                                para z de 1 ate 5 faca
                                    escreval(z, " - ", fx[z])
                                fimpara
                                leia(f)//que representa a linha que ser� usada da matriz principal
                                l <- f + 15
                                escreval("Agora digite o valor do emprestimo")
                                leia(emp)

                                escreval()
                                escreval("Voc� deseja selecionar em meses as parcelas?")
                                escreval("(1) Sim | (0) N�o (escolher por anos)")
                                escreval("Caso n�o voc� escolher� quantos anos ir� dividir")
                                escreval("escolha qual for do seu agrado n�o muda no resultado final")
                                escreval("OBS: se digitar algo diferente ser� selecionado a op��o meses")
                                leia(op2)

                                opcao_valida <- verdadeiro

                                se op2 = 0 entao
                                   escreval("Agora selecione a op��o que corresponde ao numero de parcelas: ")

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
                                             escreval("Op��o invalida! Reiniciando...")
                                             opcao_valida <- falso
                                        fimse
                                   fimse
                                   prc <- prc * 12
                                senao
                                     se op2 <> 0 entao
                                        escreval("Voc� ir� pagar em menos de 96 vezes?")
                                        escreval("(1) SIM |(0) N�o (- de 96 vezes)")
                                        leia(esc)
                                        se esc = 1 entao
                                           escreval("Agora selecione a op��o que corresponde ao numero de parcelas: ")

                                           para x de 1 ate 9 faca
                                                escreval(x, " - ", parcela[x])
                                           fimpara
                                           leia(o)
                                           se (o >= 1) e (o <=8) entao
                                              c <- o
                                           senao
                                                se o = 9 entao
                                                   escreval("Quantos anos anos voc� ir� pagar?")
                                                   leia(c)
                                                senao
                                                     se (o < 1) ou (o > 9) entao
                                                        escreval("Op��o invalida! Reiniciando...")
                                                        opcao_valida <- falso
                                                     fimse
                                                fimse
                                           fimse
                                     fimse
                                fimse
                                se opcao_valida entao

                                   escreval("A taxa ao m�s aplicada em cima do empr�stimo ser� de: ", tx[l,c], "%")
                                   escreval()


                                   tax <- tx[l,c] / 100
                                   num <- tax * (1 + tax) ^ prc
                                   den <- ((1 + tax) ^ prc) - 1
                                   vpar <- emp * (num / den)
                                   mont <- vpar * prc
                                   jr <- mont - emp

                                   escreval("-----------------------------------------")
                                   escreval("RESULTADO DO EMPR�STIMO")
                                   escreval("Taxa aplicada: ", tx[l, c], "% ao m�s")
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
                                   escreval("Voc� deseja refazer as contas no mesmo banco?")
                                   escreval("(1) Sim | (0) N�o (Voltar ao menu principal)")
                                   escreval("Qualquer valor diferente disso voltar� ao menu"
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

                                escreval("Selecione a op��o que corresponde ao valor de seu empr�stimo: ")

                                para z de 1 ate 5 faca
                                    escreval(z, " - ", fx[z])
                                fimpara
                                leia(f)//que representa a linha que ser� usada da matriz principal
                                l <- f + 20
                                escreval("Agora digite o valor do emprestimo")
                                leia(emp)

                                escreval()
                                escreval("Voc� deseja selecionar em meses as parcelas?")
                                escreval("(1) Sim | (0) N�o (escolher por anos)")
                                escreval("Caso n�o voc� escolher� quantos anos ir� dividir")
                                escreval("escolha qual for do seu agrado n�o muda no resultado final")
                                escreval("OBS: se digitar algo diferente ser� selecionado a op��o meses")
                                leia(op2)

                                opcao_valida <- verdadeiro

                                se op2 = 0 entao
                                   escreval("Agora selecione a op��o que corresponde ao numero de parcelas: ")

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
                                             escreval("Op��o invalida! Reiniciando...")
                                             opcao_valida <- falso
                                        fimse
                                   fimse
                                   prc <- prc * 12
                                senao
                                     se op2 <> 0 entao
                                        escreval("Voc� ir� pagar em menos de 96 vezes?")
                                        escreval("(1) SIM |(0) N�o (- de 96 vezes)")
                                        leia(esc)
                                        se esc = 1 entao
                                           escreval("Agora selecione a op��o que corresponde ao numero de parcelas: ")

                                           para x de 1 ate 9 faca
                                                escreval(x, " - ", parcela[x])
                                           fimpara
                                           leia(o)
                                           se (o >= 1) e (o <=8) entao
                                              c <- o
                                           senao
                                                se o = 9 entao
                                                   escreval("Quantos anos anos voc� ir� pagar?")
                                                   leia(c)
                                                senao
                                                     se (o < 1) ou (o > 9) entao
                                                        escreval("Op��o invalida! Reiniciando...")
                                                        opcao_valida <- falso
                                                     fimse
                                                fimse
                                           fimse
                                     fimse
                                fimse
                                se opcao_valida entao

                                   escreval("A taxa ao m�s aplicada em cima do empr�stimo ser� de: ", tx[l,c], "%")
                                   escreval()


                                   tax <- tx[l,c] / 100
                                   num <- tax * (1 + tax) ^ prc
                                   den <- ((1 + tax) ^ prc) - 1
                                   vpar <- emp * (num / den)
                                   mont <- vpar * prc
                                   jr <- mont - emp

                                   escreval("-----------------------------------------")
                                   escreval("RESULTADO DO EMPR�STIMO")
                                   escreval("Taxa aplicada: ", tx[l, c], "% ao m�s")
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
                                   escreval("Voc� deseja refazer as contas no mesmo banco?")
                                   escreval("(1) Sim | (0) N�o (Voltar ao menu principal)")
                                   escreval("Qualquer valor diferente disso voltar� ao menu"
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

                                escreval("Selecione a op��o que corresponde ao valor de seu empr�stimo: ")

                                para z de 1 ate 5 faca
                                    escreval(z, " - ", fx[z])
                                fimpara
                                leia(f)//que representa a linha que ser� usada da matriz principal
                                l <- f + 25
                                escreval("Agora digite o valor do emprestimo")
                                leia(emp)

                                escreval()
                                escreval("Voc� deseja selecionar em meses as parcelas?")
                                escreval("(1) Sim | (0) N�o (escolher por anos)")
                                escreval("Caso n�o voc� escolher� quantos anos ir� dividir")
                                escreval("escolha qual for do seu agrado n�o muda no resultado final")
                                escreval("OBS: se digitar algo diferente ser� selecionado a op��o meses")
                                leia(op2)

                                opcao_valida <- verdadeiro

                                se op2 = 0 entao
                                   escreval("Agora selecione a op��o que corresponde ao numero de parcelas: ")

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
                                             escreval("Op��o invalida! Reiniciando...")
                                             opcao_valida <- falso
                                        fimse
                                   fimse
                                   prc <- prc * 12
                                senao
                                     se op2 <> 0 entao
                                        escreval("Voc� ir� pagar em menos de 96 vezes?")
                                        escreval("(1) SIM |(0) N�o (- de 96 vezes)")
                                        leia(esc)
                                        se esc = 1 entao
                                           escreval("Agora selecione a op��o que corresponde ao numero de parcelas: ")

                                           para x de 1 ate 9 faca
                                                escreval(x, " - ", parcela[x])
                                           fimpara
                                           leia(o)
                                           se (o >= 1) e (o <=8) entao
                                              c <- o
                                           senao
                                                se o = 9 entao
                                                   escreval("Quantos anos anos voc� ir� pagar?")
                                                   leia(c)
                                                senao
                                                     se (o < 1) ou (o > 9) entao
                                                        escreval("Op��o invalida! Reiniciando...")
                                                        opcao_valida <- falso
                                                     fimse
                                                fimse
                                           fimse
                                     fimse
                                fimse
                                se opcao_valida entao

                                   escreval("A taxa ao m�s aplicada em cima do empr�stimo ser� de: ", tx[l,c], "%")
                                   escreval()


                                   tax <- tx[l,c] / 100
                                   num <- tax * (1 + tax) ^ prc
                                   den <- ((1 + tax) ^ prc) - 1
                                   vpar <- emp * (num / den)
                                   mont <- vpar * prc
                                   jr <- mont - emp

                                   escreval("-----------------------------------------")
                                   escreval("RESULTADO DO EMPR�STIMO")
                                   escreval("Taxa aplicada: ", tx[l, c], "% ao m�s")
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
                                   escreval("Voc� deseja refazer as contas no mesmo banco?")
                                   escreval("(1) Sim | (0) N�o (Voltar ao menu principal)")
                                   escreval("Qualquer valor diferente disso voltar� ao menu"
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

                                escreval("Selecione a op��o que corresponde ao valor de seu empr�stimo: ")

                                para z de 1 ate 5 faca
                                    escreval(z, " - ", fx[z])
                                fimpara
                                leia(f)//que representa a linha que ser� usada da matriz principal
                                l <- f + 30
                                escreval("Agora digite o valor do emprestimo")
                                leia(emp)

                                escreval()
                                escreval("Voc� deseja selecionar em meses as parcelas?")
                                escreval("(1) Sim | (0) N�o (escolher por anos)")
                                escreval("Caso n�o voc� escolher� quantos anos ir� dividir")
                                escreval("escolha qual for do seu agrado n�o muda no resultado final")
                                escreval("OBS: se digitar algo diferente ser� selecionado a op��o meses")
                                leia(op2)

                                opcao_valida <- verdadeiro

                                se op2 = 0 entao
                                   escreval("Agora selecione a op��o que corresponde ao numero de parcelas: ")

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
                                             escreval("Op��o invalida! Reiniciando...")
                                             opcao_valida <- falso
                                        fimse
                                   fimse
                                   prc <- prc * 12
                                senao
                                     se op2 <> 0 entao
                                        escreval("Voc� ir� pagar em menos de 96 vezes?")
                                        escreval("(1) SIM |(0) N�o (- de 96 vezes)")
                                        leia(esc)
                                        se esc = 1 entao
                                           escreval("Agora selecione a op��o que corresponde ao numero de parcelas: ")

                                           para x de 1 ate 9 faca
                                                escreval(x, " - ", parcela[x])
                                           fimpara
                                           leia(o)
                                           se (o >= 1) e (o <=8) entao
                                              c <- o
                                           senao
                                                se o = 9 entao
                                                   escreval("Quantos anos anos voc� ir� pagar?")
                                                   leia(c)
                                                senao
                                                     se (o < 1) ou (o > 9) entao
                                                        escreval("Op��o invalida! Reiniciando...")
                                                        opcao_valida <- falso
                                                     fimse
                                                fimse
                                           fimse
                                     fimse
                                fimse
                                se opcao_valida entao

                                   escreval("A taxa ao m�s aplicada em cima do empr�stimo ser� de: ", tx[l,c], "%")
                                   escreval()


                                   tax <- tx[l,c] / 100
                                   num <- tax * (1 + tax) ^ prc
                                   den <- ((1 + tax) ^ prc) - 1
                                   vpar <- emp * (num / den)
                                   mont <- vpar * prc
                                   jr <- mont - emp

                                   escreval("-----------------------------------------")
                                   escreval("RESULTADO DO EMPR�STIMO")
                                   escreval("Taxa aplicada: ", tx[l, c], "% ao m�s")
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
                                   escreval("Voc� deseja refazer as contas no mesmo banco?")
                                   escreval("(1) Sim | (0) N�o (Voltar ao menu principal)")
                                   escreval("Qualquer valor diferente disso voltar� ao menu"
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

                                escreval("Selecione a op��o que corresponde ao valor de seu empr�stimo: ")

                                para z de 1 ate 5 faca
                                    escreval(z, " - ", fx[z])
                                fimpara
                                leia(f)//que representa a linha que ser� usada da matriz principal
                                l <- f + 35
                                escreval("Agora digite o valor do emprestimo")
                                leia(emp)

                                escreval()
                                escreval("Voc� deseja selecionar em meses as parcelas?")
                                escreval("(1) Sim | (0) N�o (escolher por anos)")
                                escreval("Caso n�o voc� escolher� quantos anos ir� dividir")
                                escreval("escolha qual for do seu agrado n�o muda no resultado final")
                                escreval("OBS: se digitar algo diferente ser� selecionado a op��o meses")
                                leia(op2)

                                opcao_valida <- verdadeiro

                                se op2 = 0 entao
                                   escreval("Agora selecione a op��o que corresponde ao numero de parcelas: ")

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
                                             escreval("Op��o invalida! Reiniciando...")
                                             opcao_valida <- falso
                                        fimse
                                   fimse
                                   prc <- prc * 12
                                senao
                                     se op2 <> 0 entao
                                        escreval("Voc� ir� pagar em menos de 96 vezes?")
                                        escreval("(1) SIM |(0) N�o (- de 96 vezes)")
                                        leia(esc)
                                        se esc = 1 entao
                                           escreval("Agora selecione a op��o que corresponde ao numero de parcelas: ")

                                           para x de 1 ate 9 faca
                                                escreval(x, " - ", parcela[x])
                                           fimpara
                                           leia(o)
                                           se (o >= 1) e (o <=8) entao
                                              c <- o
                                           senao
                                                se o = 9 entao
                                                   escreval("Quantos anos anos voc� ir� pagar?")
                                                   leia(c)
                                                senao
                                                     se (o < 1) ou (o > 9) entao
                                                        escreval("Op��o invalida! Reiniciando...")
                                                        opcao_valida <- falso
                                                     fimse
                                                fimse
                                           fimse
                                     fimse
                                fimse
                                se opcao_valida entao

                                   escreval("A taxa ao m�s aplicada em cima do empr�stimo ser� de: ", tx[l,c], "%")
                                   escreval()


                                   tax <- tx[l,c] / 100
                                   num <- tax * (1 + tax) ^ prc
                                   den <- ((1 + tax) ^ prc) - 1
                                   vpar <- emp * (num / den)
                                   mont <- vpar * prc
                                   jr <- mont - emp

                                   escreval("-----------------------------------------")
                                   escreval("RESULTADO DO EMPR�STIMO")
                                   escreval("Taxa aplicada: ", tx[l, c], "% ao m�s")
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
                                   escreval("Voc� deseja refazer as contas no mesmo banco?")
                                   escreval("(1) Sim | (0) N�o (Voltar ao menu principal)")
                                   escreval("Qualquer valor diferente disso voltar� ao menu"
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

                                escreval("Selecione a op��o que corresponde ao valor de seu empr�stimo: ")

                                para z de 1 ate 5 faca
                                    escreval(z, " - ", fx[z])
                                fimpara
                                leia(f)//que representa a linha que ser� usada da matriz principal
                                l <- f + 40
                                escreval("Agora digite o valor do emprestimo")
                                leia(emp)

                                escreval()
                                escreval("Voc� deseja selecionar em meses as parcelas?")
                                escreval("(1) Sim | (0) N�o (escolher por anos)")
                                escreval("Caso n�o voc� escolher� quantos anos ir� dividir")
                                escreval("escolha qual for do seu agrado n�o muda no resultado final")
                                escreval("OBS: se digitar algo diferente ser� selecionado a op��o meses")
                                leia(op2)

                                opcao_valida <- verdadeiro

                                se op2 = 0 entao
                                   escreval("Agora selecione a op��o que corresponde ao numero de parcelas: ")

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
                                             escreval("Op��o invalida! Reiniciando...")
                                             opcao_valida <- falso
                                        fimse
                                   fimse
                                   prc <- prc * 12
                                senao
                                     se op2 <> 0 entao
                                        escreval("Voc� ir� pagar em menos de 96 vezes?")
                                        escreval("(1) SIM |(0) N�o (- de 96 vezes)")
                                        leia(esc)
                                        se esc = 1 entao
                                           escreval("Agora selecione a op��o que corresponde ao numero de parcelas: ")

                                           para x de 1 ate 9 faca
                                                escreval(x, " - ", parcela[x])
                                           fimpara
                                           leia(o)
                                           se (o >= 1) e (o <=8) entao
                                              c <- o
                                           senao
                                                se o = 9 entao
                                                   escreval("Quantos anos anos voc� ir� pagar?")
                                                   leia(c)
                                                senao
                                                     se (o < 1) ou (o > 9) entao
                                                        escreval("Op��o invalida! Reiniciando...")
                                                        opcao_valida <- falso
                                                     fimse
                                                fimse
                                           fimse
                                     fimse
                                fimse
                                se opcao_valida entao

                                   escreval("A taxa ao m�s aplicada em cima do empr�stimo ser� de: ", tx[l,c], "%")
                                   escreval()


                                   tax <- tx[l,c] / 100
                                   num <- tax * (1 + tax) ^ prc
                                   den <- ((1 + tax) ^ prc) - 1
                                   vpar <- emp * (num / den)
                                   mont <- vpar * prc
                                   jr <- mont - emp

                                   escreval("-----------------------------------------")
                                   escreval("RESULTADO DO EMPR�STIMO")
                                   escreval("Taxa aplicada: ", tx[l, c], "% ao m�s")
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
                                   escreval("Voc� deseja refazer as contas no mesmo banco?")
                                   escreval("(1) Sim | (0) N�o (Voltar ao menu principal)")
                                   escreval("Qualquer valor diferente disso voltar� ao menu"
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

                                escreval("Selecione a op��o que corresponde ao valor de seu empr�stimo: ")

                                para z de 1 ate 5 faca
                                    escreval(z, " - ", fx[z])
                                fimpara
                                leia(f)//que representa a linha que ser� usada da matriz principal
                                l <- f + 45
                                escreval("Agora digite o valor do emprestimo")
                                leia(emp)

                                escreval()
                                escreval("Voc� deseja selecionar em meses as parcelas?")
                                escreval("(1) Sim | (0) N�o (escolher por anos)")
                                escreval("Caso n�o voc� escolher� quantos anos ir� dividir")
                                escreval("escolha qual for do seu agrado n�o muda no resultado final")
                                escreval("OBS: se digitar algo diferente ser� selecionado a op��o meses")
                                leia(op2)

                                opcao_valida <- verdadeiro

                                se op2 = 0 entao
                                   escreval("Agora selecione a op��o que corresponde ao numero de parcelas: ")

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
                                             escreval("Op��o invalida! Reiniciando...")
                                             opcao_valida <- falso
                                        fimse
                                   fimse
                                   prc <- prc * 12
                                senao
                                     se op2 <> 0 entao
                                        escreval("Voc� ir� pagar em menos de 96 vezes?")
                                        escreval("(1) SIM |(0) N�o (- de 96 vezes)")
                                        leia(esc)
                                        se esc = 1 entao
                                           escreval("Agora selecione a op��o que corresponde ao numero de parcelas: ")

                                           para x de 1 ate 9 faca
                                                escreval(x, " - ", parcela[x])
                                           fimpara
                                           leia(o)
                                           se (o >= 1) e (o <=8) entao
                                              c <- o
                                           senao
                                                se o = 9 entao
                                                   escreval("Quantos anos anos voc� ir� pagar?")
                                                   leia(c)
                                                senao
                                                     se (o < 1) ou (o > 9) entao
                                                        escreval("Op��o invalida! Reiniciando...")
                                                        opcao_valida <- falso
                                                     fimse
                                                fimse
                                           fimse
                                     fimse
                                fimse
                                se opcao_valida entao

                                   escreval("A taxa ao m�s aplicada em cima do empr�stimo ser� de: ", tx[l,c], "%")
                                   escreval()


                                   tax <- tx[l,c] / 100
                                   num <- tax * (1 + tax) ^ prc
                                   den <- ((1 + tax) ^ prc) - 1
                                   vpar <- emp * (num / den)
                                   mont <- vpar * prc
                                   jr <- mont - emp

                                   escreval("-----------------------------------------")
                                   escreval("RESULTADO DO EMPR�STIMO")
                                   escreval("Taxa aplicada: ", tx[l, c], "% ao m�s")
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
                                   escreval("Voc� deseja refazer as contas no mesmo banco?")
                                   escreval("(1) Sim | (0) N�o (Voltar ao menu principal)")
                                   escreval("Qualquer valor diferente disso voltar� ao menu"
                                   leia(op3)

                                   se op3 <> 1 entao
                                      k <- 1
                                fimse
                       fimenquanto

                  caso 0
                       escreval("Saindo...")
                       i <- 1

                  outrocaso
                           escreval("Op��o inv�lida")

               fimescolha

               enquanto m <> 1 faca

                        escreval("Deseja continuar?")
                        escreval("(1) Sim | (0) N�o(finalizar)")
                        leia(fim)

                        se fim = 1 entao
                        m <- 1
                        senao
                             se fim = 0
                                m <- 1
                                i <- 1
                             senao
                                  se (fim <> 0) e (fim <> 1) entao
                                  escreval("Op��o invalida!")
                                  fimse
                             fimse
                        fimse

      fimenquanto

fimalgoritmo

fimse
	return 0;
}
