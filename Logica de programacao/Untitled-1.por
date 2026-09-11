algoritmo "semnome"
// Função :
// Autor :
// Data : 19/03/2026
// Seção de Declarações 
var
   emp, valor, num, den, prc, jr, mont, prca, vpar, tax: real
   op1, op2, op3, esc, expl, y, x ,z, c, l , i, o, k, m, fim, f :inteiro
   nome, pause :caracter
   tx: vetor[1..50, 1..9] de real //cada 5 linhas representando os valores e 8 colunas representando as parcelas de cada banco
   Parcela: vetor[1..9] de caractere
   fx: vetor[1..5] de caractere
   opcao_valida :logico
inicio
      i <- 0

      
      //Indicar cada valor do vetor principal (TX)
      // --- BANCO DO BRASIL ---
      tx[1,1]<-0.56
      tx[1,2]<-0.55
      tx[1,3]<-0.53
      tx[1,4]<-0.53
      tx[1,5]<-0.52
      tx[1,6]<-0.52
      tx[1,7]<-0.51
      tx[1,8]<-0.51
      tx[1,9]<-0.51
      tx[2,1]<-0.56
      tx[2,2]<-0.55
      tx[2,3]<-0.54
      tx[2,4]<-0.53
      tx[2,5]<-0.52
      tx[2,6]<-0.52
      tx[2,7]<-0.52
      tx[2,8]<-0.52
      tx[2,9]<-0.51
      tx[3,1]<-0.57
      tx[3,2]<-0.55
      tx[3,3]<-0.54
      tx[3,4]<-0.53
      tx[3,5]<-0.52
      tx[3,6]<-0.52
      tx[3,7]<-0.52
      tx[3,8]<-0.52
      tx[3,9]<-0.51
      tx[4,1]<-0.57
      tx[4,2]<-0.55
      tx[4,3]<-0.54
      tx[4,4]<-0.53
      tx[4,5]<-0.53
      tx[4,6]<-0.52
      tx[4,7]<-0.52
      tx[4,8]<-0.52
      tx[4,9]<-0.52
      tx[5,1]<-0.57
      tx[5,2]<-0.55
      tx[5,3]<-0.54
      tx[5,4]<-0.53
      tx[5,5]<-0.53
      tx[5,6]<-0.52
      tx[5,7]<-0.52
      tx[5,8]<-0.52
      tx[5,9]<-0.52

      // --- CAIXA ECONÔMICA ---
      tx[6,1]<-0.57
      tx[6,2]<-0.56
      tx[6,3]<-0.55
      tx[6,4]<-0.54
      tx[6,5]<-0.53
      tx[6,6]<-0.53
      tx[6,7]<-0.53
      tx[6,8]<-0.53
      tx[6,9]<-0.52
      tx[7,1]<-0.58
      tx[7,2]<-0.56
      tx[7,3]<-0.55
      tx[7,4]<-0.54
      tx[7,5]<-0.54
      tx[7,6]<-0.53
      tx[7,7]<-0.53
      tx[7,8]<-0.53
      tx[7,9]<-0.52
      tx[8,1]<-0.58
      tx[8,2]<-0.56
      tx[8,3]<-0.55
      tx[8,4]<-0.54
      tx[8,5]<-0.54
      tx[8,6]<-0.53
      tx[8,7]<-0.53
      tx[8,8]<-0.53
      tx[8,9]<-0.53
      tx[9,1]<-0.58
      tx[9,2]<-0.56
      tx[9,3]<-0.55
      tx[9,4]<-0.54
      tx[9,5]<-0.54
      tx[9,6]<-0.54
      tx[9,7]<-0.53
      tx[9,8]<-0.53
      tx[9,9]<-0.53
      tx[10,1]<-0.58
      tx[10,2]<-0.57
      tx[10,3]<-0.55
      tx[10,4]<-0.54
      tx[10,5]<-0.54
      tx[10,6]<-0.54
      tx[10,7]<-0.54
      tx[10,8]<-0.54
      tx[10,9]<-0.53

      // --- BRADESCO ---
      tx[11,1]<-0.66
      tx[11,2]<-0.64
      tx[11,3]<-0.63
      tx[11,4]<-0.61
      tx[11,5]<-0.60
      tx[11,6]<-0.60
      tx[11,7]<-0.59
      tx[11,8]<-0.59
      tx[11,9]<-0.59
      tx[12,1]<-0.67
      tx[12,2]<-0.65
      tx[12,3]<-0.63
      tx[12,4]<-0.61
      tx[12,5]<-0.60
      tx[12,6]<-0.60
      tx[12,7]<-0.60
      tx[12,8]<-0.60
      tx[12,9]<-0.59
      tx[13,1]<-0.67
      tx[13,2]<-0.65
      tx[13,3]<-0.63
      tx[13,4]<-0.62
      tx[13,5]<-0.61
      tx[13,6]<-0.60
      tx[13,7]<-0.60
      tx[13,8]<-0.60
      tx[13,9]<-0.60
      tx[14,1]<-0.68
      tx[14,2]<-0.65
      tx[14,3]<-0.64
      tx[14,4]<-0.62
      tx[14,5]<-0.62
      tx[14,6]<-0.61
      tx[14,7]<-0.61
      tx[14,8]<-0.61
      tx[14,9]<-0.60
      tx[15,1]<-0.68
      tx[15,2]<-0.66
      tx[15,3]<-0.64
      tx[15,4]<-0.63
      tx[15,5]<-0.62
      tx[15,6]<-0.61
      tx[15,7]<-0.61
      tx[15,8]<-0.61
      tx[15,9]<-0.61

      // --- ITAU ---
      tx[16,1]<-0.79
      tx[16,2]<-0.77
      tx[16,3]<-0.76
      tx[16,4]<-0.74
      tx[16,5]<-0.73
      tx[16,6]<-0.73
      tx[16,7]<-0.72
      tx[16,8]<-0.72
      tx[16,9]<-0.72
      tx[17,1]<-0.80
      tx[17,2]<-0.78
      tx[17,3]<-0.76
      tx[17,4]<-0.74
      tx[17,5]<-0.73
      tx[17,6]<-0.73
      tx[17,7]<-0.73
      tx[17,8]<-0.73
      tx[17,9]<-0.72
      tx[18,1]<-0.80
      tx[18,2]<-0.78
      tx[18,3]<-0.76
      tx[18,4]<-0.75
      tx[18,5]<-0.74
      tx[18,6]<-0.73
      tx[18,7]<-0.73
      tx[18,8]<-0.73
      tx[18,9]<-0.73
      tx[19,1]<-0.80
      tx[19,2]<-0.78
      tx[19,3]<-0.77
      tx[19,4]<-0.75
      tx[19,5]<-0.74
      tx[19,6]<-0.74
      tx[19,7]<-0.73
      tx[19,8]<-0.73
      tx[19,9]<-0.73
      tx[20,1]<-0.81
      tx[20,2]<-0.79
      tx[20,3]<-0.77
      tx[20,4]<-0.75
      tx[20,5]<-0.75
      tx[20,6]<-0.74
      tx[20,7]<-0.74
      tx[20,8]<-0.74
      tx[20,9]<-0.73

      // --- SANTANDER ---
      tx[21,1]<-0.83
      tx[21,2]<-0.81
      tx[21,3]<-0.80
      tx[21,4]<-0.78
      tx[21,5]<-0.77
      tx[21,6]<-0.77
      tx[21,7]<-0.77
      tx[21,8]<-0.76
      tx[21,9]<-0.76
      tx[22,1]<-0.84
      tx[22,2]<-0.82
      tx[22,3]<-0.80
      tx[22,4]<-0.78
      tx[22,5]<-0.78
      tx[22,6]<-0.77
      tx[22,7]<-0.77
      tx[22,8]<-0.77
      tx[22,9]<-0.76
      tx[23,1]<-0.84
      tx[23,2]<-0.82
      tx[23,3]<-0.80
      tx[23,4]<-0.79
      tx[23,5]<-0.78
      tx[23,6]<-0.78
      tx[23,7]<-0.77
      tx[23,8]<-0.77
      tx[23,9]<-0.77
      tx[24,1]<-0.85
      tx[24,2]<-0.82
      tx[24,3]<-0.81
      tx[24,4]<-0.79
      tx[24,5]<-0.78
      tx[24,6]<-0.78
      tx[24,7]<-0.78
      tx[24,8]<-0.78
      tx[24,9]<-0.78
      tx[25,1]<-0.85
      tx[25,2]<-0.83
      tx[25,3]<-0.81
      tx[25,4]<-0.80
      tx[25,5]<-0.79
      tx[25,6]<-0.78
      tx[25,7]<-0.78
      tx[25,8]<-0.78
      tx[25,9]<-0.78

      // --- INTER ---
      tx[26,1]<-0.71
      tx[26,2]<-0.69
      tx[26,3]<-0.68
      tx[26,4]<-0.66
      tx[26,5]<-0.65
      tx[26,6]<-0.65
      tx[26,7]<-0.64
      tx[26,8]<-0.64
      tx[26,9]<-0.64
      tx[27,1]<-0.71
      tx[27,2]<-0.70
      tx[27,3]<-0.68
      tx[27,4]<-0.66
      tx[27,5]<-0.65
      tx[27,6]<-0.65
      tx[27,7]<-0.65
      tx[27,8]<-0.65
      tx[27,9]<-0.64
      tx[28,1]<-0.72
      tx[28,2]<-0.70
      tx[28,3]<-0.69
      tx[28,4]<-0.67
      tx[28,5]<-0.66
      tx[28,6]<-0.65
      tx[28,7]<-0.65
      tx[28,8]<-0.65
      tx[28,9]<-0.65
      tx[29,1]<-0.72
      tx[29,2]<-0.70
      tx[29,3]<-0.69
      tx[29,4]<-0.67
      tx[29,5]<-0.66
      tx[29,6]<-0.66
      tx[29,7]<-0.66
      tx[29,8]<-0.66
      tx[29,9]<-0.66
      tx[30,1]<-0.73
      tx[30,2]<-0.71
      tx[30,3]<-0.69
      tx[30,4]<-0.68
      tx[30,5]<-0.67
      tx[30,6]<-0.66
      tx[30,7]<-0.66
      tx[30,8]<-0.66
      tx[30,9]<-0.66

      // --- PAGBANK ---
      tx[31,1]<-0.75
      tx[31,2]<-0.73
      tx[31,3]<-0.71
      tx[31,4]<-0.69
      tx[31,5]<-0.68
      tx[31,6]<-0.68
      tx[31,7]<-0.67
      tx[31,8]<-0.67
      tx[31,9]<-0.67
      tx[32,1]<-0.75
      tx[32,2]<-0.73
      tx[32,3]<-0.71
      tx[32,4]<-0.70
      tx[32,5]<-0.68
      tx[32,6]<-0.68
      tx[32,7]<-0.68
      tx[32,8]<-0.68
      tx[32,9]<-0.67
      tx[33,1]<-0.76
      tx[33,2]<-0.74
      tx[33,3]<-0.72
      tx[33,4]<-0.70
      tx[33,5]<-0.69
      tx[33,6]<-0.68
      tx[33,7]<-0.68
      tx[33,8]<-0.68
      tx[33,9]<-0.68
      tx[34,1]<-0.76
      tx[34,2]<-0.74
      tx[34,3]<-0.72
      tx[34,4]<-0.70
      tx[34,5]<-0.69
      tx[34,6]<-0.69
      tx[34,7]<-0.69
      tx[34,8]<-0.69
      tx[34,9]<-0.68
      tx[35,1]<-0.77
      tx[35,2]<-0.74
      tx[35,3]<-0.73
      tx[35,4]<-0.71
      tx[35,5]<-0.70
      tx[35,6]<-0.69
      tx[35,7]<-0.69
      tx[35,8]<-0.69
      tx[35,9]<-0.68

      // --- NUBANK ---
      tx[36,1]<-0.67
      tx[36,2]<-0.65
      tx[36,3]<-0.63
      tx[36,4]<-0.62
      tx[36,5]<-0.61
      tx[36,6]<-0.60
      tx[36,7]<-0.60
      tx[36,8]<-0.60
      tx[36,9]<-0.60
      tx[37,1]<-0.67
      tx[37,2]<-0.65
      tx[37,3]<-0.64
      tx[37,4]<-0.62
      tx[37,5]<-0.61
      tx[37,6]<-0.61
      tx[37,7]<-0.61
      tx[37,8]<-0.60
      tx[37,9]<-0.60
      tx[38,1]<-0.68
      tx[38,2]<-0.66
      tx[38,3]<-0.64
      tx[38,4]<-0.63
      tx[38,5]<-0.62
      tx[38,6]<-0.61
      tx[38,7]<-0.61
      tx[38,8]<-0.61
      tx[38,9]<-0.61
      tx[39,1]<-0.68
      tx[39,2]<-0.66
      tx[39,3]<-0.65
      tx[39,4]<-0.63
      tx[39,5]<-0.62
      tx[39,6]<-0.62
      tx[39,7]<-0.62
      tx[39,8]<-0.62
      tx[39,9]<-0.62
      tx[40,1]<-0.68
      tx[40,2]<-0.67
      tx[40,3]<-0.65
      tx[40,4]<-0.63
      tx[40,5]<-0.63
      tx[40,6]<-0.62
      tx[40,7]<-0.62
      tx[40,8]<-0.62
      tx[40,9]<-0.62

      // --- MERCADO PAGO ---
      tx[41,1]<-0.83
      tx[41,2]<-0.82
      tx[41,3]<-0.79
      tx[41,4]<-0.77
      tx[41,5]<-0.75
      tx[41,6]<-0.73
      tx[41,7]<-0.73
      tx[41,8]<-0.72
      tx[41,9]<-0.71
      tx[42,1]<-0.85
      tx[42,2]<-0.83
      tx[42,3]<-0.81
      tx[42,4]<-0.78
      tx[42,5]<-0.77
      tx[42,6]<-0.75
      tx[42,7]<-0.74
      tx[42,8]<-0.73
      tx[42,9]<-0.73
      tx[43,1]<-0.88
      tx[43,2]<-0.86
      tx[43,3]<-0.83
      tx[43,4]<-0.81
      tx[43,5]<-0.79
      tx[43,6]<-0.78
      tx[43,7]<-0.77
      tx[43,8]<-0.76
      tx[43,9]<-0.75
      tx[44,1]<-0.89
      tx[44,2]<-0.88
      tx[44,3]<-0.85
      tx[44,4]<-0.82
      tx[44,5]<-0.81
      tx[44,6]<-0.79
      tx[44,7]<-0.78
      tx[44,8]<-0.78
      tx[44,9]<-0.78
      tx[45,1]<-0.91
      tx[45,2]<-0.89
      tx[45,3]<-0.87
      tx[45,4]<-0.84
      tx[45,5]<-0.83
      tx[45,6]<-0.81
      tx[45,7]<-0.80
      tx[45,8]<-0.79
      tx[45,9]<-0.79

      // --- PICPAY ---
      tx[46,1]<-0.75
      tx[46,2]<-0.73
      tx[46,3]<-0.71
      tx[46,4]<-0.68
      tx[46,5]<-0.67
      tx[46,6]<-0.65
      tx[46,7]<-0.64
      tx[46,8]<-0.63
      tx[46,9]<-0.63
      tx[47,1]<-0.77
      tx[47,2]<-0.75
      tx[47,3]<-0.73
      tx[47,4]<-0.70
      tx[47,5]<-0.68
      tx[47,6]<-0.67
      tx[47,7]<-0.66
      tx[47,8]<-0.65
      tx[47,9]<-0.64
      tx[48,1]<-0.79
      tx[48,2]<-0.78
      tx[48,3]<-0.75
      tx[48,4]<-0.73
      tx[48,5]<-0.71
      tx[48,6]<-0.69
      tx[48,7]<-0.68
      tx[48,8]<-0.68
      tx[48,9]<-0.67
      tx[49,1]<-0.81
      tx[49,2]<-0.79
      tx[49,3]<-0.77
      tx[49,4]<-0.74
      tx[49,5]<-0.73
      tx[49,6]<-0.72
      tx[49,7]<-0.71
      tx[49,8]<-0.71
      tx[49,9]<-0.70
      tx[50,1]<-0.83
      tx[50,2]<-0.81
      tx[50,3]<-0.78
      tx[50,4]<-0.76
      tx[50,5]<-0.74
      tx[50,6]<-0.73
      tx[50,7]<-0.72
      tx[50,8]<-0.71
      tx[50,9]<-0.70
      
      //Indicar o vetor das parcelas
      parcela[1] <- "0 até 12 ou 1 ano"
      parcela[2] <- "13 até 24 ou 2 anos"
      parcela[3] <- "25 até 36 ou 3 anos"
      parcela[4] <- "37 até 48 ou 4 anos"
      parcela[5] <- "49 até 60 ou 5 anos"
      parcela[6] <- "61 até 72 ou 6 anos"
      parcela[7] <- "73 até 84 ou 7 anos"
      parcela[8] <- "85 até 96 ou 8 anos"
      parcela[9] <- "Acima de 96 ou 9 anos ou mais"
      
      //Indicar o vetor das faixas de valores
      fx[1] <- "0 até 5000R$"
      fx[2] <- "5.001 até 10.000R$"
      fx[3] <- "10.001 até 20.000R$"
      fx[4] <- "20.001 até 50.000R$"
      fx[5] <- "50.001 até 100.000R$"
      
      
      escreval("Bom dia, seja bem vindo ao simulador de empréstimo financeiro")
      escreval()
      
      enquanto i <> 1 faca

               m <- 0
               k <- 0

               escreval("deseja uma explicação mais detalhada sobre os valores? (1) para sim (0) para não")
               leia(expl)

               se expl <> 0 entao
                  escreval("sobre as taxas todas foram em base de um peril entre medio e baixo de creditos")
                  escreval("Onde buscamos a maior fidelidade possível e temos as taxas de 10 bancos")
                  escreval("as taxas variam de acordo com a parcela e o valor usado")
                  escreval("OBS: As taxas originais variam de acordo com seu perfil de crédito")
                  escreval("após a leitura digite ENTER para continuar")
                  leia(pause)
               fimse

               escreval("====================MENU====================")
               escreval("Escolha seu banco")
               escreval("1 - Banco do Brasil")
               escreval("2 - Caixa Econômica Federal")
               escreval("3 - Bradesco")
               escreval("4 - Itaú Unibanco")
               escreval("5 - Santander")
               escreval("6 - Banco Inter")
               escreval("7 - Pagbank")
               escreval("8 - Nubank")
               escreval("9 - Mercado pago")
               escreval("10 - Picpay")
               escreval("0 - Sair")
               leia(op1)

               escolha op1

                  caso 1

                       escreval("========================================================")
                       escreval("                     BANCO DO BRASIL                    ")
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
                                leia(l)//que representa a linha que será usada da matriz principal

                                se (l < 1) ou (l > 5) entao
                                escreval("Opção inválida! Tente novamente...")
                                opcao_valida <- falso
                                fimse
                                
                                escreval("Agora digite o valor do emprestimo")
                                leia(emp)

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
                                   escreval("(1) Sim | (0) Não, qualquer valor diferente disso voltará ao menu")
                                   leia(op3)

                                   se op3 <> 1 entao
                                      k <- 1
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