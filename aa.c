     #include <stdio.h> 

     #include <stdlib.h> 

     #include <locale.h> 

     #include <stdbool.h> // <--- Biblioteca necessária para verdadeiro e falso para declarar uma variavel loógica

     #include <math.h> // OBRIGATÓRIO PARA POW()
     
     #include <windows.h>




     char parcela[8] = "01 a 12 meses (Ate 1 ano)", "13 a 24 meses (Ate 2 anos)", "25 a 36 meses (Ate 3 anos)", "37 a 48 meses (Ate 4 anos)", "49 a 60 meses (Ate 5 anos)", "61 a 72 meses (Ate 6 anos)", "73 a 84 meses (Ate 7 anos)", "85 a 96 meses (Ate 8 anos)", "Acima de 96 meses (9 anos +)";
          
     int op1, op2, op3, expl, l, q, x, y, z, h, o, c, prc, id_transacao, esc;             
          
     bool opcao_valida; 

     float emp, vpar,t mont, jr, tx_val, tx_decimal, tac, iof_total, valor_total_financiado, potencia, juros_totais, s_dev, juros_mes, amortizacao;  
          
     char cod_seguranca[20];  


     int main(int argc, char *argv[]) { 
          

          int i = 0;              
          int k = 0;              
   
          
          setlocale(LC_CTYPE, "Portuguese");

          printf("Bom dia, seja bem vindo ao simulador de empréstimo financeiro! \n"); 

          printf("\n"); 



          while (i != 1) {

               k = 0 ;

               printf("deseja uma explicação mais detalhada sobre os valores? (1) para sim (0) para não \n"); 

               scanf("%d", &expl); 

              if (expl != 0) {
                    system("cls");
                    printf("  \xDA\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xBF\n");
                    printf("  \xB3                INFORMACOES TECNICAS               \xB3\n");
                    printf("  \xC3\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xB4\n");
                    printf("  \xB3 As taxas sao baseadas em perfis de credito       \xB3\n");
                    printf("  \xB3 entre medio e baixo, buscando fidelidade real.   \xB3\n");
                    printf("  \xB3 O calculo utiliza dados de 10 bancos distintos.  \xB3\n");
                    printf("  \xB3 Os valores variam conforme parcela e emprestimo. \xB3\n"); // Ajustado aqui
                    printf("  \xC3\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xB4\n");
                    printf("  \xB3         Pressione ENTER para continuar...         \xB3\n");
                    printf("  \xC8\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xBC\n");
                    system("pause > nul");
               } 

               system("cls");
               printf("  \xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
               printf("  \xBA           ESCOLHA A INSTITUICAO BANCARIA             \xBA\n");
               printf("  \xCC\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xB9\n");
               printf("  \xBA  [01] Banco do Brasil                               \xBA\n");
               printf("  \xBA  [02] Caixa Economica Federal                      \xBA\n");
               printf("  \xBA  [03] Bradesco                                     \xBA\n");
               printf("  \xBA  [04] Itau Unibanco                                \xBA\n");
               printf("  \xBA  [05] Santander                                    \xBA\n");
               printf("  \xBA  [06] Banco Inter                                  \xBA\n");
               printf("  \xBA  [07] Pagbank                                      \xBA\n");
               printf("  \xBA  [08] Nubank                                       \xBA\n");
               printf("  \xBA  [09] Mercado Pago                                 \xBA\n");
               printf("  \xBA  [10] Picpay                                       \xBA\n");
               printf("  \xBA                                                    \xBA\n");
               printf("  \xBA  [00] Sair do Sistema                               \xBA\n");
               printf("  \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
               printf("\n Digite sua opcao: ");
               scanf("%d", &op1);


               switch(op1) { 

                    case 1:

                         system("cls"); 
                         printf("  \xDA\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xBF\n  \xB3                BANCO DO BRASIL                        \xB3\n  \xC8\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xBC\n");

                          for(q = 0; q <= 100; q++) {
                         
                              printf("\r[+] Carregando sistema: %d%%", q);
                              fflush(stdout); 
                              Sleep(20); 
                         }

                         while (k != 1) { 

                              printf("Selecione a opção que corresponde ao valor de seu empréstimo: \n");

                              for(z=1;z<=5;z++){
                                   
                                   printf("%d - %  \n" z, fx[z]);

                              }
                              scanf("%", &l);

                              if (l < 1 || l > 5) { 

                                   printf("Opção inválida! Tente novamente... \n"); 

                                   opcao_valida = false ;

                              }

                              printf("Agora digite o valor do emprestimo \n"); 

                              scanf("%.2f", &emp); 


                              printf("Você deseja selecionar em meses as parcelas? \n (1) Sim | (0) Não (escolher por anos) \n Caso não você escolherá quantos anos irá dividir \n escolha qual for do seu agrado não muda no resultado final \n OBS: se digitar algo diferente será selecionado a opção meses \n"); 

                              scanf("%d", &op2); 


                              opcao_valida = true; 

                              if (op2 == 0) { 

                                  printf("Selecione a opcao de parcelas (Anos): \n");  

                                   for(x=1;x<=9;x++){
                                   
                                        printf("%d - %  \n", x, parcela[x]);

                                   }
                                   scanf("%d", &c);

                                   if (c == 9) {

                                        scanf("Digite quantos anos por favor \n");

                                        scaf("%d", &o);

                                        prc = o ;

                                   } else {

                                        if (c >= 1 || c <= 8) { 

                                                  prc = c ;

                                        } else{

                                             printf("Opção invalida! Reiniciando... \n");

                                             opcao_valida = false ;

                                        } 

                                   }
                                   if (opcao_valida){
                                        prc = prc * 12 ;
                                   }
                              } else{ 

                                   printf("Você irá pagar em menos de 96 vezes? \n (1) SIM |(0) Não (- de 96 vezes) \n"); 

                                   scanf("%d", &esc); 

                                   if (esc == 1) { 

                                        printf("Agora selecione a opção que corresponde ao numero de parcelas:  \n");
                                   }

                                   for(h=1;h<=9;h++){
                                   
                                        printf("%d - %  \n", x, parcela[x]);
                                        
                                   } 
                                   scanf("%d", &o);

                                   if (o >= 1 && o <= 8) {

                                        c = o;

                                   } else if (o == 9) {

                                             printf("Quantos anos você irá pagar? \n");
                                             scanf("%d", &c);  

                                        } else if (o < 1 || o > 9) {

                                             printf("Opção inválida! Reiniciando... \n");
                                             opcao_valida = false;

                                        }
                              } 

                              if (opcao_valida) {
                                   
                                   tx_val = tx_pessoal[l][c];
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
                                   printf("\n  \xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
                                   printf("  \xBA                PROTOCOLO DE SIMULACAO                \xBA\n");
                                   printf("  \xBA  ID: %d-2026          AUTENTICACAO: %-15s \xBA\n", id_transacao, cod_seguranca);
                                   printf("  \xCC\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xB9\n");
                                   printf("  \xBA  VALOR SOLICITADO:         R$ %10.2f             \xBA\n", emp);
                                   printf("  \xBA  (-) TAXAS (TAC/IOF):      R$ %10.2f             \xBA\n", iof_total + tac);
                                   printf("  \xBA  (=) TOTAL FINANCIADO:     R$ %10.2f             \xBA\n", valor_total_financiado);
                                   printf("  \xBA  ---------------------------------------------------  \xBA\n");
                                   printf("  \xBA  PLANO DE PAGAMENTO:       %3d PARCELAS FIXAS       \xBA\n", prc);
                                   printf("  \xBA  TAXA MENSAL APLICADA:          %6.2f %%              \xBA\n", tx_val);
                                   printf("  \xBA  VALOR DA PRESTACAO:       R$ %10.2f             \xBA\n", vpar);
                                   printf("  \xBA  VALOR TOTAL AO FINAL:     R$ %10.2f             \xBA\n", mont);
                                   printf("  \xBA  CUSTO DO CREDITO:         R$ %10.2f             \xBA\n", juros_totais);
                                   printf("  \xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");

                                   printf("\n  RESUMO DAS PRIMEIRAS PARCELAS:\n");
                                   s_dev = valor_total_financiado; 
                                   for(z = 1; z <= 5 && z <= prc; z++) {
                                        juros_mes = s_dev * tx_decimal;
                                        amortizacao = vpar - juros_mes;
                                        s_dev = s_dev - amortizacao;
                                        printf("  Mes %02d | Juros: R$ %7.2f | Amortizacao: R$ %7.2f\n", z, juros_mes, amortizacao);
                                   }

                                   printf("\nDeseja refazer no mesmo banco? (1) Sim | (0) Nao: ");
                                   scanf("%d", &op3); 
                                   if (op3 != 1) k = 1;
                                   else system("cls");

                              }
                         }
                    }
               break;  

               case 2:
          
			
		
                    
