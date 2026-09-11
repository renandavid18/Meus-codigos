	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <locale.h>
	#include <time.h>
	
	#define MAX_VENDAS 18250
	
	typedef struct{
	    char cliente[50], servico[50];
	    double valor, custo, total, lucro;
	    int quantidade, devolucoes, dia, mes;
	} Atendimento;
	
	
	typedef struct{
	    char nome[50];
	    double precoVenda,  custo;
	} Produto;
	
	
	Produto tabela[] = {
	    {"", 0.00, 0.00},
		{"Aplique de Fibra Sintetica Ondulada", 180.00, 140.00},
		{"Aplique de Fibra Sintetica Cacheada", 220.00, 180.00},
		{"Aplique de Fibra Sintetica Lisa", 250.00, 210.00},
		{"Aplique Masculino Sintetico Ondulado", 120.00, 90.00},
		{"Aplique Masculino Sintetico Cacheado", 140.00, 110.00},
		{"Aplique Masculino Sintetico Liso", 160.00, 130.00},
		{"Aplicacao de Mega Hair Simples", 300.00, 240.00},
		{"Manutencao Simples de Aplique", 60.00, 40.00},
		{"Escova Simples", 40.00, 25.00},
		{"Tonalizacao Basica", 70.00, 50.00},
		{"Corte Simples Feminino", 25.00, 10.00},
		{"Kit Shampoo Basico", 20.00, 12.00},
		{"Serum Capilar Simples", 15.00, 8.00},
		{"Escova Basica Mega Hair", 35.00, 20.00},
		{"Fita Adesiva Comum", 18.00, 10.00},
		{"Removedor Simples de Cola", 12.00, 6.00}
	};
	
	
	void limparBuffer(){
	    int c;
	    while ((c = getchar()) != '\n' && c != EOF);
	}
	
	
	void obterProduto(int codigo, char *nome, double *preco, double *custo){
	    if(codigo >= 1 && codigo <= 16){
	        strncpy(nome, tabela[codigo].nome, 49);
	        nome[49] = '\0';
	
	        *preco = tabela[codigo].precoVenda;
	        *custo = tabela[codigo].custo;
	    }
	}
	
	
	void carregarTeste(Atendimento vendas[], int *totalVendas){

	    char nomes[][50] = {
	        "Ana","Bruna","Carlos","Daniel","Eduarda","Felipe","Gabriel","Helena",
	        "Igor","Julia","Kaique","Larissa","Marcos","Natasha","Otavio","Paula",
	        "Rafael","Sabrina","Tiago","Vanessa","William","Yasmin","Aline","Bianca",
	        "Caio","Diego","Erica","Fernando","Giovana","Henrique","Isabela","Joao",
	        "Karina","Leonardo","Marina","Nicolas","Patricia","Renato","Silvia","Tatiane",
	        "Ursula","Victor","Wellington","Xavier","Yuri","Zelia","Amanda","Beatriz",
	        "Cristina","Debora","Elisa","Fabio","Gustavo","Hugo","Iara","Janaina",
	        "Kelly","Lucas","Mateus","Nathalia","Priscila","Roberta","Samuel","Valeria"
	    };
	
	    int totalNomes = sizeof(nomes) / sizeof(nomes[0]);
	
	    int i = 0, mes, clienteMes, cod, maxdias;
	
	    for(mes = 1; mes <= 8; mes++){
	
	        if(mes == 2) maxdias = 28;
	        else if(mes == 4 || mes == 6) maxdias = 30;
	        else maxdias = 31;
	
	        for(clienteMes = 0; clienteMes < 20; clienteMes++){
	
	            if(i >= MAX_VENDAS) break;
	
	            strcpy(vendas[i].cliente, nomes[rand() % totalNomes]);
	
	            cod = 1 + rand() % 16;
	
	            obterProduto(cod, vendas[i].servico, &vendas[i].valor, &vendas[i].custo);
	
	            vendas[i].quantidade = 1 + rand() % 4;
	            vendas[i].devolucoes = rand() % 4;
	
	            vendas[i].mes = mes;
	            vendas[i].dia = 1 + rand() % maxdias;
	
	            vendas[i].total = vendas[i].valor * vendas[i].quantidade;
	
	            vendas[i].lucro = (vendas[i].valor - vendas[i].custo) * vendas[i].quantidade;
	
	            if(vendas[i].devolucoes >= 2){
	                vendas[i].total += 20;
	                vendas[i].lucro += 20;
	            }
	
	            i++;
	        }
	    }
	
	    *totalVendas = i;
	}
	
	
	void exibirRelatorioDiario(Atendimento vendas[], int totalVendas){

        int dia_busca, mes_busca, encontradas = 0, i;

        double bruto_dia = 0, taxas_dia = 0, faturamento_dia = 0, lucro_dia = 0;

        printf("\n--- CONSULTA DE RELATORIO DIARIO ---\n");

        printf("Digite o dia: ");
        scanf("%d", &dia_busca);

        printf("Digite o mes: ");
        scanf("%d", &mes_busca);

        limparBuffer();

        printf("\n================ RELATORIO DIARIO %02d/%02d ================\n",
            dia_busca, mes_busca);

        printf("CLIENTE         | QTD | TOTAL\n");
        printf("-----------------------------------------------------------\n");

        for(i = 0; i < totalVendas; i++){

            if(vendas[i].dia == dia_busca &&
            vendas[i].mes == mes_busca){

                printf("%-15s | %3d | R$ %8.2f\n",
                    vendas[i].cliente,
                    vendas[i].quantidade,
                    vendas[i].total);

                bruto_dia += vendas[i].valor *
                            vendas[i].quantidade;

                if(vendas[i].devolucoes >= 2)
                    taxas_dia += 20;

                faturamento_dia += vendas[i].total;
                lucro_dia += vendas[i].lucro;

                encontradas++;
            }
        }

        printf("-----------------------------------------------------------\n");

        if(encontradas == 0){

            printf("Nenhum pedido encontrado.\n");

        }else{

            printf("Pedidos              : %d\n", encontradas);
            printf("Faturamento Bruto    : R$ %.2f\n", bruto_dia);
            printf("Taxas de Devolucao   : R$ %.2f\n", taxas_dia);
            printf("Faturamento Total    : R$ %.2f\n", faturamento_dia);
            printf("Lucro Liquido        : R$ %.2f\n", lucro_dia);
        }

        printf("\nENTER para voltar...");
        getchar();
    }
        
	
	void exibirRelatorioMensal(Atendimento vendas[], int totalVendas){

        int mes_busca, i, j, encontradas = 0;

        double bruto_mes = 0, taxas_mes = 0, faturamento_mes = 0, lucro_mes = 0;

        static Atendimento vendas_mes[MAX_VENDAS];

        printf("\nDigite o mes (1 a 12): ");
        scanf("%d", &mes_busca);

        limparBuffer();

        for(i = 0; i < totalVendas; i++){

            if(vendas[i].mes == mes_busca){

                vendas_mes[encontradas] = vendas[i];

                bruto_mes += vendas[i].valor *
                            vendas[i].quantidade;

                if(vendas[i].devolucoes >= 2)
                    taxas_mes += 20;

                faturamento_mes += vendas[i].total;
                lucro_mes += vendas[i].lucro;

                encontradas++;
            }
        }

        for(i = 0; i < encontradas - 1; i++){

            for(j = 0; j < encontradas - 1 - i; j++){

                if(vendas_mes[j].total <
                vendas_mes[j + 1].total){

                    Atendimento t = vendas_mes[j];
                    vendas_mes[j] = vendas_mes[j + 1];
                    vendas_mes[j + 1] = t;
                }
            }
        }

        char nomes_meses[][15] = {
            "Janeiro","Fevereiro","Marco","Abril",
            "Maio","Junho","Julho","Agosto",
            "Setembro","Outubro","Novembro","Dezembro"
        };

        printf("\n=========== RELATORIO MENSAL - %s ===========\n",
            nomes_meses[mes_busca - 1]);

        printf("Pedidos              : %d\n", encontradas);
        printf("Faturamento Bruto    : R$ %.2f\n", bruto_mes);
        printf("Taxas de Devolucao   : R$ %.2f\n", taxas_mes);
        printf("Faturamento Total    : R$ %.2f\n", faturamento_mes);
        printf("Lucro Liquido        : R$ %.2f\n", lucro_mes);

        printf("\n------------------------------------------------------------\n");
        printf("POS | DATA  | CLIENTE         | TOTAL\n");
        printf("------------------------------------------------------------\n");

        for(i = 0; i < encontradas; i++){

            printf("%3d | %02d/%02d | %-15s | R$ %8.2f\n",
                i + 1,
                vendas_mes[i].dia,
                vendas_mes[i].mes,
                vendas_mes[i].cliente,
                vendas_mes[i].total);
        }

        printf("------------------------------------------------------------\n");

        printf("\nENTER para voltar...");
        getchar();
    }


	void exibirRelatorioAnual(Atendimento vendas[], int totalVendas){

        double faturamento_meses[12] = {0}, bruto_anual = 0, taxas_anual = 0,  total_fat = 0, total_luc = 0, lucro_meses[12] = {0};

        int ordem_meses[12],  i, j, m;

         

        for(i = 0; i < 12; i++)
            ordem_meses[i] = i + 1;

        for(i = 0; i < totalVendas; i++){

            bruto_anual +=
                vendas[i].valor *
                vendas[i].quantidade;

            if(vendas[i].devolucoes >= 2)
                taxas_anual += 20;

            m = vendas[i].mes - 1;

            faturamento_meses[m] += vendas[i].total;
            lucro_meses[m] += vendas[i].lucro;

            total_fat += vendas[i].total;
            total_luc += vendas[i].lucro;
        }

        for(i = 0; i < 11; i++){

            for(j = 0; j < 11 - i; j++){

                if(faturamento_meses[j] <
                faturamento_meses[j + 1]){

                    double auxFat = faturamento_meses[j];
                    faturamento_meses[j] = faturamento_meses[j + 1];
                    faturamento_meses[j + 1] = auxFat;

                    double auxLuc = lucro_meses[j];
                    lucro_meses[j] = lucro_meses[j + 1];
                    lucro_meses[j + 1] = auxLuc;

                    int auxMes = ordem_meses[j];
                    ordem_meses[j] = ordem_meses[j + 1];
                    ordem_meses[j + 1] = auxMes;
                }
            }
        }

        char nomes_meses[][15] = {
            "Janeiro","Fevereiro","Marco","Abril",
            "Maio","Junho","Julho","Agosto",
            "Setembro","Outubro","Novembro","Dezembro"
        };

        printf("\n================ RELATORIO ANUAL ================\n");

        printf("Faturamento Bruto Anual : R$ %.2f\n", bruto_anual);
        printf("Taxas de Devolucao      : R$ %.2f\n", taxas_anual);
        printf("Faturamento Total Anual : R$ %.2f\n", total_fat);
        printf("Lucro Liquido Anual     : R$ %.2f\n", total_luc);

        printf("\n----------------------------------------------------------\n");
        printf("POS | MES          | FATURAMENTO\n");
        printf("----------------------------------------------------------\n");

        int pos = 1;

        for(i = 0; i < 12; i++){

            if(faturamento_meses[i] > 0){

                printf("%3d | %-12s | R$ %10.2f\n",
                    pos,
                    nomes_meses[ordem_meses[i] - 1],
                    faturamento_meses[i]);

                pos++;
            }
        }

        printf("----------------------------------------------------------\n");

        printf("\nENTER para voltar...");
        getchar();
    }
	
	
	
	int main(){
	    static Atendimento vendas[MAX_VENDAS];
	    int totalVendas = 0, opcao, cod, max_dias, i;
	
	    srand(time(NULL));
	
	    carregarTeste(vendas, &totalVendas);
	
	    do{
	        printf("\n=== SISTEMA ===\n");
	        printf("1 - Registrar Atendimento\n");
	        printf("2 - Relatorio Diario\n");
	        printf("3 - Relatorio Mensal\n");
	        printf("4 - Relatorio Anual\n");
	        printf("0 - Sair\n");
	        printf("Opcao: ");
	
	        scanf("%d", &opcao);
	        limparBuffer();
	
	        switch(opcao){
	
	            case 1:
	            	
				    if(totalVendas >= MAX_VENDAS){
				        printf("\n=================================\n");
				        printf(" LIMITE MAXIMO DE VENDAS ATINGIDO\n");
				        printf(" Nenhum novo atendimento pode ser cadastrado.\n");
				        printf(" Exclua registros ou aumente MAX_VENDAS.\n");
				        printf("=================================\n");
				        getchar();
				        break;
				    }
				
				    printf("\nNome cliente: ");
	                fgets(vendas[totalVendas].cliente, 50, stdin);
	                vendas[totalVendas].cliente[strcspn(vendas[totalVendas].cliente, "\n")] = 0;
	
	                printf("\nServicos:\n");
	                for(i = 1; i <= 16; i++){
	                    printf("%d - %s (%.2f)\n", i, tabela[i].nome, tabela[i].precoVenda);
	                }
	
	                do{
	                    printf("Codigo: ");
	                    scanf("%d", &cod);
	                    limparBuffer();
	                }while(cod < 1 || cod > 16);
	
	                obterProduto(cod, vendas[totalVendas].servico,
	                    &vendas[totalVendas].valor,
	                    &vendas[totalVendas].custo);
	
	                do{
	                    printf("Quantidade: ");
	                    scanf("%d", &vendas[totalVendas].quantidade);
	                    limparBuffer();
	                }while(vendas[totalVendas].quantidade <= 0);
	
	                do{
	                    printf("Mes: ");
	                    scanf("%d", &vendas[totalVendas].mes);
	                    limparBuffer();
	                }while(vendas[totalVendas].mes < 1 || vendas[totalVendas].mes > 12);
	
	                max_dias = 31;
	                if(vendas[totalVendas].mes == 4 || vendas[totalVendas].mes == 6 ||
	                   vendas[totalVendas].mes == 9 || vendas[totalVendas].mes == 11){
	                    max_dias = 30;
	                } else if(vendas[totalVendas].mes == 2){
	                    max_dias = 28;
	                }
	
	                do{
	                    printf("Dia: ");
	                    scanf("%d", &vendas[totalVendas].dia);
	                    limparBuffer();
	                }while(vendas[totalVendas].dia < 1 || vendas[totalVendas].dia > max_dias);
	
	                double taxa;

					printf("Devolucoes: ");
					scanf("%d", &vendas[totalVendas].devolucoes);
					limparBuffer();
					
					taxa = 0;
					
					if(vendas[totalVendas].devolucoes >= 2)
					    taxa = 20;
					
					vendas[totalVendas].total =
					    (vendas[totalVendas].valor *
					    vendas[totalVendas].quantidade) + taxa;
					
					vendas[totalVendas].lucro =
					    ((vendas[totalVendas].valor -
					    vendas[totalVendas].custo) *
					    vendas[totalVendas].quantidade) + taxa;
	
	                printf("\nVenda registrada!\n");
	                totalVendas++;
	                getchar();
	                system("cls");
	                fflush(stdin);
	                break;
	
	            case 2:
	            	
	                exibirRelatorioDiario(vendas, totalVendas);
	                system("cls");
	                fflush(stdin);
	                break;
	
	            case 3:
	            	
	                exibirRelatorioMensal(vendas, totalVendas);
	                system("cls");
	                fflush(stdin);
	                break;
	
	            case 4:
	            	
	                exibirRelatorioAnual(vendas, totalVendas);
	                system("cls");
	                fflush(stdin);
	                break;
	
	            case 0:
	            	
	                printf("\nSaindo...\n");
	                getchar();
	                system("cls");
	                fflush(stdin);
	                break;
	
	            default:
	            	
	                printf("\nOpcao invalida!\n");
	                getchar();
	                system("cls");
	                fflush(stdin);
	        }
	    }while(opcao != 0);
	
	    printf("\nFim do programa\n");
	    getchar();
	    return 0;
	}