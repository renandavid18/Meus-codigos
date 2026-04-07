     #include <stdio.h> 

     #include <stdlib.h> 

     #include <locale.h> 

     #include <stdbool.h> // <--- Biblioteca necessária para verdadeiro e falso para declarar uma variavel loógica

     #include <math.h> // OBRIGATÓRIO PARA POW()
     
     #include <windows.h>




     parcela[0], "01 a 12 meses (Ate 1 ano)";
     parcela[1], "13 a 24 meses (Ate 2 anos)";
     parcela[2], "25 a 36 meses (Ate 3 anos)";
     parcela[3], "37 a 48 meses (Ate 4 anos)";
     parcela[4], "49 a 60 meses (Ate 5 anos)";
     parcela[5], "61 a 72 meses (Ate 6 anos)";
     parcela[6], "73 a 84 meses (Ate 7 anos)";
     parcela[7], "85 a 96 meses (Ate 8 anos)";
     parcela[8], "Acima de 96 meses (9 anos +)";



     int main(int argc, char *argv[]) { 
     
          bool opcao_valida = false;
          int expl, op1, op2, m, k, o, c, i, x, y, z, prc;
          float emp, vpar, mont, jr;
          
          setlocale(LC_CTYPE, "Portuguese");

          printf("Bom dia, seja bem vindo ao simulador de empréstimo financeiro! \n"); 

          printf("\n"); 



          while (i != 1) {



               

               bool opcao_valida = false;
               int expl, op1, op2, op3, m, k, o, c, prc;
               float emp, vpar, mont, jr, tx_val;

               m = 0 ;

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

                                   printf("Agora selecione a opção que corresponde ao numero de parcelas:  \n"); 


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
                                   } else {
                                        if (o == 9) {
                                             printf("Quantos anos você irá pagar? \n");
                                             scanf("%d", &c);  
                                        } else if (o < 1 || o > 9) {
                                             printf("Opção inválida! Reiniciando... \n");
                                             opcao_valida = false;
                                        }
                                   } 



                                   if (opcao_valida == true){

                                        printf("A taxa ao mês aplicada em cima do empréstimo será de: ", tx[l,c], "%"); 


                                        tx_val = tx[l,c]    // ex: 0,9 (0,9%) 

                                        for(i=1;i<=prc;x++){
                                   
                                        inv_pot = inv_pot / (1 + tx[l,c]) 
                                        
                                        }
                                        
                                        
                                        mont = emp * (1 + tax_val) ^ prc ;

                                        vpar = mont / prc ;  

                                        jr = mont - emp;
                                        jr_m = jr / prc;

                                        printf("----------------------------------------- \n RESULTADO DO EMPRÉSTIMO \n Taxa aplicada: %% ao mês \n", tx[l, c]); 

                                        printf("Valor de cada parcela: R$ %.2f Total de juros: R$  %.2f \n Total de juros sobre cada parcela foi: R$ %.2f \n Total a pagar: R$ %.2f Liquidado em: %d meses \n", vpar, jr, jr_m, mont, prc;) 

                                        printf("----------------------------------------- \n Digite ENTER para continuar \n"); 

                                        system(pause); 

                                        printf("\n");
                                        printf("\n");

                                        printf("Você deseja refazer as contas no mesmo banco? \n (1) Sim | (0) Não, qualquer valor diferente disso voltará ao menu \n");

                                        scanf("%d", &op3); 



                                        if op3 != 1 { 

                                        k = 1 

                                        }
                                   }
                              }
                         }

                                   
                    break;

               case 2:
          
			
		
                    
