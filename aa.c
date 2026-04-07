#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <math.h>
#include <windows.h>
#include <time.h>

char fx[5][25] = { 
     "0 at‚ 5000R$",
     "5.001 at‚ 10.000R$",
     "10.001 at‚ 20.000R$",
     "20.001 at‚ 50.000R$",
     "50.001 at‚ 100.000R$",
};

char parcela[9][40] = {
    "At‚ 12 meses (1 ano)", 
    "At‚ 24 meses (2 anos)", 
    "At‚ 36 meses (3 anos)", 
    "At‚ 48 meses (4 anos)", 
    "At‚ 60 meses (5 anos)", 
    "At‚ 72 meses (6 anos)", 
    "At‚ 84 meses (7 anos)", 
    "At‚ 96 meses (8 anos)", 
    "Acima de 9 anos"
};

// Taxas e vari veis omitidas aqui para brevidade, mas mantidas no seu c¢digo original...
// [Mantenha aqui as matrizes tx, tx_consignado e tx_financiamento que vocˆ j  possui]

int main(int argc, char *argv[]) { 
     
     SetConsoleCP(65001);
     SetConsoleOutputCP(65001);

     int op1, op2 = 1, op3, ex, l, q, x, y, z, h, o, c, f, prc, id_transacao, esc;
     int i = 0, k = 0;
     bool opcao_valida; 
     float emp, vpar, mont, jr, tx_val, tx_decimal, tx_pessoal, tac, iof_total, valor_total_financiado, potencia, juros_totais, s_dev, juros_mes, amortizacao;   
     char cod_seguranca[20];  

     setlocale(LC_ALL, "Portuguese");

     printf("Sistema de Simula‡Æo de Cr‚dito Integrado - VersÆo 2.2026\n");
     printf("Seja bem-vindo. Iniciando interface de atendimento...\n\n");

     while (i != 1) {
          k = 0;
          printf("Deseja visualizar as notas t‚cnicas sobre a composi‡Æo das taxas? (1) Sim | (0) NÆo: \n");
          scanf("%d", &ex);

          if (ex != 0) {
               system("cls");
               printf("  ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
               printf("  ³             INFORMA€åES TCNICAS                ³\n");
               printf("  ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´\n");
               printf("  ³ 1. Taxas calculadas com base no perfil m‚dio    ³\n");
               printf("  ³    de risco (Credit Score) do mercado.          ³\n");
               printf("  ³ 2. Parƒmetros atualizados via BACEN (10 inst.)  ³\n");
               printf("  ³ 3. O CET (Custo Efetivo Total) inclui IOF e     ³\n");
               printf("  ³    tarifas administrativas (TAC).               ³\n");
               printf("  ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
               printf("  ³      Pressione ENTER para continuar...          ³\n");
               printf("  ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
               system("pause > nul");
          }

          system("cls");
          printf("  ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
          printf("  ³        SELECIONE A INSTITUI€ÇO FINANCEIRA        ³\n");
          printf("  ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´\n");
          printf("  ³  [01] Banco do Brasil                            ³\n");
          printf("  ³  [02] Caixa Econ“mica Federal                    ³\n");
          printf("  ³  [03] Bradesco S.A.                              ³\n");
          printf("  ³  [04] Ita£ Unibanco                              ³\n");
          printf("  ³  [05] Santander Brasil                           ³\n");
          printf("  ³  [06] Banco Inter                                ³\n");
          printf("  ³  [07] PagBank                                    ³\n");
          printf("  ³  [08] Nubank                                     ³\n");
          printf("  ³  [09] Mercado Pago                               ³\n");
          printf("  ³  [10] PicPay                                     ³\n");
          printf("  ³                                                  ³\n");
          printf("  ³  [00] Encerrar SessÆo                            ³\n");
          printf("  ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
          printf("\n Sele‡Æo de Portf¢lio: ");
          scanf("%d", &op1);

          if(op1 == 0) break;

          switch(op1) { 
               case 1:
                    system("cls"); 
                    printf("  ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»\n");
                    printf("  º                BANCO DO BRASIL                º\n");
                    printf("  ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼\n");

                    for(q = 0; q <= 100; q++) {
                         printf("\r[+] Sincronizando dados banc rios: %d%%", q);
                         fflush(stdout); 
                         Sleep(10); 
                    }
                    printf("\n");

                    while (k != 1) { 
                         printf("\nSelecione a faixa de capital para enquadramento da proposta:\n");
                         for(z=0; z<=4; z++) {
                              printf("[%d] - %s\n", z + 1, fx[z]);
                         }
                         scanf("%d", &f); // Corrigido de "%" para "%d"
                         l = f - 1; 

                         if (l < 0 || l > 4) { 
                              printf("Op‡Æo inv lida! Tente novamente...\n"); 
                              continue;
                         }

                         printf("\nInforme o valor l¡quido solicitado (Principal): R$ ");
                         scanf("%f", &emp);

                         printf("\nSelecione a unidade de tempo do contrato:\n");
                         printf("(1) Per¡odo em Meses | (0) Per¡odo em Anos\n");
                         scanf("%d", &op2);

                         opcao_valida = true; 

                         if (op2 == 0) { 
                              printf("Selecione a op‡Æo de parcelas (Anos): \n");  
                              for(x=0; x<=8; x++) {
                                   printf("%d - %s\n", x + 1, parcela[x]);
                              }
                              scanf("%d", &c);
                              if (c == 9) {
                                   printf("Digite quantos anos: ");
                                   scanf("%d", &o);
                                   prc = o * 12;
                              } else if (c >= 1 && c <= 8) {
                                   prc = c * 12;
                              } else {
                                   printf("Op‡Æo inv lida!\n");
                                   opcao_valida = false;
                              }
                         } else { 
                              printf("Selecione o n£mero de parcelas mensais:\n");
                              for(h=0; h<=8; h++) {
                                   printf("%d - %s\n", h + 1, parcela[h]);
                              } 
                              scanf("%d", &o);
                              
                              if (o >= 1 && o <= 8) {

                                   prc = o * 12; 
                                   
                              } else if (o == 9) {

                                   printf("Quantos meses no total? ");
                                   scanf("%d", &prc);

                              } else {

                                   opcao_valida = false;

                              }
                         } 

                         if (opcao_valida) {

                              tx_val = tx[l][(prc/12)-1 > 8 ? 8 : (prc/12)-1]; 
                              tx_decimal = tx_val / 100.0;
                              tac = 95.00;
                              iof_total = emp * (0.0038 + (0.000082 * 30 * prc));

                              if (iof_total > emp * 0.0338) iof_total = emp * 0.0338;
                              
                              valor_total_financiado = emp + iof_total + tac;
                              potencia = pow(1 + tx_decimal, prc);
                              vpar = valor_total_financiado * ((tx_decimal * potencia) / (potencia - 1));
                              mont = vpar * prc;
                              juros_totais = mont - emp;

                              srand(time(NULL));

                              id_transacao = rand() % 8999 + 1000;
                              sprintf(cod_seguranca, "BB-%X", id_transacao);

                              system("cls"); 
                              printf("\n  ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n");
                              printf("  ³             PROTOCOLO DE SIMULA€ÇO               ³\n");
                              printf("  ³  Ref: %d-2026          TOKEN: %-15s   ³\n", id_transacao, cod_seguranca);
                              printf("  ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´\n");
                              printf("  ³  VALOR DO CRDITO:            R$ %10.2f      ³\n", emp);
                              printf("  ³  TRIBUTOS E TARIFAS (CET):    R$ %10.2f      ³\n", iof_total + tac);
                              printf("  ³  MONTANTE TOTAL FINANCIADO:   R$ %10.2f      ³\n", valor_total_financiado);
                              printf("  ³  --------------------------------------------    ³\n");
                              printf("  ³  PRAZO DO CONTRATO:           %3d PRESTA€åES    ³\n", prc);
                              printf("  ³  TAXA DE JUROS NOMINAL:            %6.2f %% p.m. ³\n", tx_val);
                              printf("  ³  VALOR DA PARCELA FIXA:       R$ %10.2f      ³\n", vpar);
                              printf("  ³  TOTAL A PAGAR (FINAL):       R$ %10.2f      ³\n", mont);
                              printf("  ³  CUSTO FINANCEIRO TOTAL:      R$ %10.2f      ³\n", juros_totais);
                              printf("  ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");

                              printf("\nFLUXO DE AMORTIZA€ÇO (Proje‡Æo das 5 primeiras parcelas):\n");
                              s_dev = valor_total_financiado;    

                              for(z = 1; z <= 5 && z <= prc; z++) {

                                   juros_mes = s_dev * tx_decimal;
                                   amortizacao = vpar - juros_mes;
                                   s_dev = s_dev - amortizacao;
                                   printf("  Parcela %02d | Juros: R$ %7.2f | Amortiza‡Æo: R$ %7.2f\n", z, juros_mes, amortizacao);
                             
                              }

                              printf("\nDeseja realizar uma nova cota‡Æo? (1) Sim | (0) Menu: ");
                              scanf("%d", &op3); 
                              if (op3 != 1) k = 1;
                              else system("cls");
                         }
                    }
               break;
          } 
     }
     return 0;
}