#include <stdio.h> 

#include <stdlib.h> 

#include <locale.h> 

#include <stdbool.h> // <--- Biblioteca necessária para verdadeiro e falso para declarar uma variavel loógica





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

          scanf("%d", expl); 





          if (expl != 0){

               printf("sobre as taxas todas foram em base de um peril entre medio e baixo de creditos \n"); 

               printf("Onde buscamos a maior fidelidade possível e temos as taxas de 10 bancos \n"); 

               printf("as taxas variam de acordo com a parcela e o valor usado \n"); 

               printf("OBS: As taxas originais variam de acordo com seu perfil de crédito \n"); 

               printf("após a leitura digite ENTER para continuar \n"); 

               system("pause"); 

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



          switch (op1) { 



               case 1:



                    printf("======================================================== \n");

                    printf("                     BANCO DO BRASIL                     \n");

                    printf("======================================================== \n");



                    for(y=1;y<=2;y++){
            	     
                            timer(3)
                                      printf("Loading");
                                      printf(".");
                                      printf(".");
                                      printf(". \n");
                            timer(0)

                    }


                    while (k != 1) { 


                	     printf("Selecione a opção que corresponde ao valor de seu empréstimo: \n");

                         if(z=1;z<=5;z++){
                              
                              printf("%d - %  \n" z, fx[z]);

                         }
                         scanf("%", l);






                         if (l < 1 || l > 5) { 

                              printf("Opção inválida! Tente novamente... \n"); 

                              opcao_valida = false ;

                	     }





                         printf("Agora digite o valor do emprestimo \n"); 

                         scanf("%.2f", emp); 



                         printf("Você deseja selecionar em meses as parcelas? \n");

                         printf("(1) Sim | (0) Não (escolher por anos) \n"); 

                         printf("Caso não você escolherá quantos anos irá dividir \n"); 

                         printf("escolha qual for do seu agrado não muda no resultado final \n"); 

                	     printf("OBS: se digitar algo diferente será selecionado a opção meses \n"); 

                         scanf("%d", op2); 



                         opcao_valida = true; 



                         if (op2 == 0) { 

                              printf("Agora selecione a opção que corresponde ao numero de parcelas:  \n"); 


                              for(__DEC64X_MIN__)
                              para x de 1 ate 9 faca
                                   escreval(x, " - ", parcela[x])
                              fimpara
                              scanf("%d", c);

                              if (c = 9) {

                                   scanf("Digite quantos anos por favor \n");

                                   scaf("%d", o);

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

                              printf("Você irá pagar em menos de 96 vezes? \n");

                              escreval("(1) SIM |(0) Não (- de 96 vezes) \n"); 

                              scanf("%d", esc); 

                              if (esc == 1) { 

                                   printf("Agora selecione a opção que corresponde ao numero de parcelas:  \n");
						}
                              para h de 1 ate 9 faca
                                   escreval(x, " - ", parcela[x])
                              fimpara
                              
                              scanf("%d", o);

                              if (o >= 1 && o <= 8) {
                                   c = o;
                              } else {
                                   if (o == 9) {
                                        printf("Quantos anos você irá pagar? \n");
                                        scanf("%d", &c);  // precisa do & para variáveis do tipo int
                                   } else if (o < 1 || o > 9) {
                                        printf("Opção inválida! Reiniciando... \n");
                                        opcao_valida = false;
                                   }
                              } 



                              if (opcao_valida = true){

                                   printf("A taxa ao mês aplicada em cima do empréstimo será de: ", tx[l,c], "%"); 


                                   tx_val <- tx[l,c]    // ex: 0,9 (0,9%) 

							para i de 1 ate prc faca 

    								inv_pot <- inv_pot / (1 + tx[l,c]) 

							fimpara
                                   
                                   
							mont = emp * (1 + tax_val) ^ prc ;

                                   vpar = mont / prc ;  

							jr = mont - emp;
                                   jr_m = jr / prc;

                                  	printf("----------------------------------------- \n"); 

                                	printf("RESULTADO DO EMPRÉSTIMO \n"); 

                                   printf("Taxa aplicada: %% ao mês \n", tx[l, c]); 

                                   printf("Valor de cada parcela: R$ %.2f", vpar:2:2); 

                                	printf("Total de juros: R$  %.2f \n", jr:2:2);
                                   
                                   printf("Total de juros sobre cada parcela foi: R$ %.2f \n" jr_m); 

                                   printf("Total a pagar: R$ %.2f", mont:2:2); 

                                   printf("Liquidado em: %d meses \n", prc; 

                                   printf("----------------------------------------- \n");

                                   printf("Digite ENTER para continuar \n"); 

                                   system(pause); 

                                   printf("\n");
                                   printf("\n");

                                   printf("Você deseja refazer as contas no mesmo banco? \n"); 

                                   printf("(1) Sim | (0) Não, qualquer valor diferente disso voltará ao menu \n");

                                   scanf("%d", op3); 



                                   if op3 <> 1 { 

                                      k <- 1 

                                   }
                              }
                         }
                    }

                              
               continue;

          case 2:
          
			
		
                    
