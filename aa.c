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

          scanf("%d", &expl); 





          if (expl != 0){

               printf("sobre as taxas todas foram em base de um peril entre medio e baixo de creditos \n Onde buscamos a maior fidelidade possível e temos as taxas de 10 bancos \n As taxas variam de acordo com a parcela e o valor usado \n OBS: As taxas originais variam de acordo com seu perfil de crédito \n após a leitura digite ENTER para continuar \n"); 
               system("pause"); 

          } 



          printf("====================MENU==================== \n Escolha seu banco \n 1 - Banco do Brasil \n 2 - Caixa Econômica Federal \n 3 - Bradesco \n 4 - Itaú Unibanco \n 5 - Santander \n 6 - Banco Inter \n 7 - Pagbank \n 8 - Nubank \n 9 - Mercado pago \n 10 - Picpay \n 0 - Sair \n");
          scanf("%d", &op1); 



          switch(op1) { 



               case 1:



                    printf("======================================================== \n                      BANCO DO BRASIL                     \n ======================================================== \n");



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
                                        scanf("%d", &c);  // precisa do & para variáveis do tipo int
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
          
			
		
                    
