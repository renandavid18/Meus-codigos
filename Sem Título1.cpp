	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <locale.h>
	#include <time.h>
	
	#define MAX_VENDAS 18250
	
	typedef struct{
	    char cliente[50];
	    char servico[50];
	    float valor;
	    float custo;
	    int quantidade;
	    float total;
	    float lucro;
	    int devolucoes;
	    int dia;
	    int mes;
	} Atendimento;
	
	typedef struct{
	    char nome[50];
	    float precoVenda;
	    float custo;
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
	
	void limparBuffer() {
	    int c;
	    while ((c = getchar()) != '\n' && c != EOF);
	}
	
	void obterProduto(int codigo, char *nome, float *preco, float *custo){
	    if(codigo >= 1 && codigo <= 16){
	        strncpy(nome, tabela[codigo].nome, 49);
	        nome[49] = '\0';
	
	        *preco = tabela[codigo].precoVenda;
	        *custo = tabela[codigo].custo;
	    }
	}
	
	void carregarTeste(Atendimento vendas[], int *totalVendas){
	    int i = 0, cod, j, dia, mes, v, maxdias;
	    float lucroMes = 0, lucro = 30000;
	
	    for(mes = 1; mes <= 6; mes++){
	        lucroMes = 0;
	
	        if(mes == 2) maxdias = 28;
	        else if(mes == 4 || mes == 6) maxdias = 30;
	        else maxdias = 31;
	
	        for(dia = 1; dia <= 3; dia++){
	            for(v = 0; v < 50; v++){
	
	                if(i >= MAX_VENDAS || lucroMes >= lucro) break;
	
	                sprintf(vendas[i].cliente, "Cliente_%d", i + 1);
	                cod = 1 + rand() % 16;
	                obterProduto(cod, vendas[i].servico, &vendas[i].valor, &vendas[i].custo);
	                vendas[i].quantidade = 1 + rand() % 3;
	                vendas[i].devolucoes = rand() % 4;
	                vendas[i].mes = mes;
	                vendas[i].dia = dia;
	                vendas[i].total = vendas[i].valor * vendas[i].quantidade;
	                vendas[i].lucro = (vendas[i].valor - vendas[i].custo) * vendas[i].quantidade;
	
	                if(vendas[i].devolucoes >= 2){
	                    vendas[i].total += 20;
	                    vendas[i].lucro += 20;
	                }
	
	                lucroMes += vendas[i].lucro;
	                i++;
	            }
	            if(i >= MAX_VENDAS || lucroMes >= lucro) break;
	        }
	
	        for(j = 0; j < 200; j++){
	            if(i >= MAX_VENDAS || lucroMes >= lucro) break;
	
	            sprintf(vendas[i].cliente, "Cliente_%d", i + 1);
	            cod = 1 + rand() % 16;
	            obterProduto(cod, vendas[i].servico, &vendas[i].valor, &vendas[i].custo);
	            vendas[i].quantidade = 1 + rand() % 3;
	            vendas[i].devolucoes = rand() % 4;
	            vendas[i].mes = mes;
	            vendas[i].dia = 4 + rand() % (maxdias - 3);
	            vendas[i].total = vendas[i].valor * vendas[i].quantidade;
	            vendas[i].lucro = (vendas[i].valor - vendas[i].custo) * vendas[i].quantidade;
	
	            if(vendas[i].devolucoes >= 2){
	                vendas[i].total += 20;
	                vendas[i].lucro += 20;
	            }
	
	            lucroMes += vendas[i].lucro;
	            i++;
	        }
	    }
	
	    *totalVendas = i;
	}
	
	void exibirRelatorioDiario(Atendimento vendas[], int totalVendas){
	    int dia_busca, mes_busca, encontradas = 0, i, j;
	    float faturamento_dia = 0.0, lucro_dia = 0.0;
	    static Atendimento vendas_dia[MAX_VENDAS];
	
	    printf("\n--- CONSULTA DE RELATORIO DIARIO ---\n");
	    printf("Digite o dia para consulta: ");
	    scanf("%d", &dia_busca);
	    printf("Digite o mes para consulta (1 a 12): ");
	    scanf("%d", &mes_busca);
	    limparBuffer();
	
	    // Filtra os dados da data informada
	    for(i = 0; i < totalVendas; i++){
	        if(vendas[i].dia == dia_busca && vendas[i].mes == mes_busca){
	            vendas_dia[encontradas] = vendas[i];
	            faturamento_dia += vendas[i].total;
	            lucro_dia += vendas[i].lucro;
	            encontradas++;
	        }
	    }
	
	    if(encontradas == 0){
	        printf("Nenhum atendimento nesta data.\n");
	        printf("\nENTER para voltar...");
	        getchar();
	        return;
	    }
	
	    
	    for(i = 0; i < encontradas - 1; i++){
	        for(j = 0; j < encontradas - 1 - i; j++){
	            if(vendas_dia[j].dia > vendas_dia[j + 1].dia){
	                Atendimento t = vendas_dia[j];
	                vendas_dia[j] = vendas_dia[j + 1];
	                vendas_dia[j + 1] = t;
	            }
	        }
	    }
	
	    printf("\nRELATORIO DIARIO (%02d/%02d)\n", dia_busca, mes_busca);
	    for(i = 0; i < encontradas; i++){
	        printf("%s | %s | %.2f | %d | %.2f | %.2f | %d\n",
	            vendas_dia[i].cliente, vendas_dia[i].servico, vendas_dia[i].valor,
	            vendas_dia[i].quantidade, vendas_dia[i].total, vendas_dia[i].lucro,
	            vendas_dia[i].devolucoes);
	    }
	
	    printf("Total: %d\n", encontradas);
	    printf("Faturamento: %.2f\n", faturamento_dia);
	    printf("Lucro: %.2f\n", lucro_dia);
	
	    printf("\nENTER para voltar...");
	    getchar();
	}
	
	void exibirRelatorioMensal(Atendimento vendas[], int totalVendas){
	    int mes_busca, i, j, encontradas = 0;
	    float faturamento_mes = 0.0, lucro_mes = 0.0;
	    static Atendimento vendas_mes[MAX_VENDAS];
	
	    printf("\n--- CONSULTA DE RELATORIO MENSAL ---\n");
	    printf("Digite o mes (1 a 12): ");
	    scanf("%d", &mes_busca);
	    limparBuffer();
	
	    for(i = 0; i < totalVendas; i++){
	        if(vendas[i].mes == mes_busca){
	            vendas_mes[encontradas] = vendas[i];
	            faturamento_mes += vendas[i].total;
	            lucro_mes += vendas[i].lucro;
	            encontradas++;
	        }
	    }
	
	    if(encontradas == 0){
	        printf("\nNenhum dado cadastrado no mes informado.\n");
	        printf("\nPressione ENTER para voltar...");
	        getchar();
	        return;
	    }
	
	    // Ordenacao alterada para organizar por DATA (do dia 1 ao dia 31)
	    for(i = 0; i < encontradas - 1; i++){
	        for(j = 0; j < encontradas - 1 - i; j++){
	            if(vendas_mes[j].dia > vendas_mes[j + 1].dia){
	                Atendimento t = vendas_mes[j];
	                vendas_mes[j] = vendas_mes[j + 1];
	                vendas_mes[j + 1] = t;
	            }
	        }
	    }
	
	    char nomes_meses[][15] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
	
	    printf("\n===================================================== RESUMO MENSAL: %s =====================================================\n", nomes_meses[mes_busca-1]);
	    printf(" Quantidade de Vendas:     %d\n", encontradas);
	    printf(" Faturamento Bruto Mensal: R$ %.2f\n", faturamento_mes);
	    printf(" Lucro Liquido Mensal:     R$ %.2f\n", lucro_mes);
	    printf("-----------------------------------------------------------------------------------------------------------------------------\n");
	    printf(" POSICAO | %-7s | %-15s | %-12s | %-5s | %-12s\n", "Data", "Cliente", "Valor Un.", "Qtd", "Total Venda");
	    printf("-----------------------------------------------------------------------------------------------------------------------------\n");
	
	    for(i = 0; i < encontradas; i++){
	        printf("   %2d.   | %02d/%02d   | %-15s | R$ %-9.2f | %-5d | R$ %-9.2f\n", i + 1, vendas_mes[i].dia, vendas_mes[i].mes, vendas_mes[i].cliente, vendas_mes[i].valor, vendas_mes[i].quantidade, vendas_mes[i].total);
	    }
	    printf("=============================================================================================================================\n");
	
	    printf("\nPressione ENTER para voltar...");
	    getchar();
	}

	void exibirRelatorioAnual(Atendimento vendas[], int totalVendas){
	    float faturamento_meses[12] = {0}, lucro_meses[12] = {0};
	    int ordem_meses[12], i, j, m;
	
	    for(i = 0; i < 12; i++) ordem_meses[i] = i + 1;
	
	    float total_fat = 0, total_luc = 0;
	
	    for(i = 0; i < totalVendas; i++){
	        m = vendas[i].mes - 1;
	        if(m >= 0 && m < 12){
	            faturamento_meses[m] += vendas[i].total;
	            lucro_meses[m] += vendas[i].lucro;
	            total_fat += vendas[i].total;
	            total_luc += vendas[i].lucro;
	        }
	    }
	
	    for(i = 0; i < 11; i++){
	        for(j = 0; j < 11 - i; j++){
	            if(faturamento_meses[j] < faturamento_meses[j + 1]){
	                float tf = faturamento_meses[j];
	                faturamento_meses[j] = faturamento_meses[j + 1];
	                faturamento_meses[j + 1] = tf;
	
	                float tl = lucro_meses[j];
	                lucro_meses[j] = lucro_meses[j + 1];
	                lucro_meses[j + 1] = tl;
	
	                int tm = ordem_meses[j];
	                ordem_meses[j] = ordem_meses[j + 1];
	                ordem_meses[j + 1] = tm;
	            }
	        }
	    }
	
	    char nomes_meses[][15] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
	
	    printf("\n=================================== RELATORIO ANUAL (ORGANIZADO POR FATURAMENTO) ===================================\n");
	    printf(" Faturamento Bruto Anual: R$ %.2f\n", total_fat);
	    printf(" Lucro Liquido Anual:     R$ %.2f\n", total_luc);
	    printf("--------------------------------------------------------------------------------------------------------------------\n");
	    printf(" RANKING | %-12s | %-25s | %-25s\n", "Mes", "Faturamento Bruto", "Lucro Liquido");
	    printf("--------------------------------------------------------------------------------------------------------------------\n");
	
	    int posicao_ranking = 1;
	    for(i = 0; i < 12; i++){
	        if(faturamento_meses[i] > 0){
	            printf("   %2d.   | %-12s | R$ %-22.2f | R$ %-22.2f\n", 
	                posicao_ranking, 
	                nomes_meses[ordem_meses[i] - 1], 
	                faturamento_meses[i], 
	                lucro_meses[i]);
	            posicao_ranking++;
	        }
	    }
	    printf("====================================================================================================================\n");
	
	    printf("\nPressione ENTER para voltar...");
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
	
	                printf("Devolucoes: ");
	                scanf("%d", &vendas[totalVendas].devolucoes);
	                limparBuffer();
	
	                vendas[totalVendas].total =
	                    vendas[totalVendas].valor * vendas[totalVendas].quantidade;
	
	                vendas[totalVendas].lucro =
	                    (vendas[totalVendas].valor - vendas[totalVendas].custo)
	                    * vendas[totalVendas].quantidade;
	
	                if(vendas[totalVendas].devolucoes >= 2){
	                    vendas[totalVendas].total += 20;
	                    vendas[totalVendas].lucro += 20;
	                }
	
	                printf("\nVenda registrada!\n");
	                totalVendas++;
	                getchar();
	                break;
	
	            case 2:
	                exibirRelatorioDiario(vendas, totalVendas);
	                break;
	
	            case 3:
	                exibirRelatorioMensal(vendas, totalVendas);
	                break;
	
	            case 4:
	                exibirRelatorioAnual(vendas, totalVendas);
	                break;
	
	            case 0:
	                printf("\nSaindo...\n");
	                getchar();
	                break;
	
	            default:
	                printf("\nOpcao invalida!\n");
	                getchar();
	        }
	    }while(opcao != 0);
	
	    printf("\nFim do programa\n");
	    getchar();
	    return 0;
	}