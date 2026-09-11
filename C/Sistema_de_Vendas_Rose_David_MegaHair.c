  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include <time.h>

  #define MAX_VENDAS 18250

  // Struct para salvar os dados de cada atendimento feito
  typedef struct{
    char cliente[50], servico[50];
    double valor, custo, total, gasto, lucro, taxa_devolucao;
    int quantidade, devolucoes, dia, mes;
  } Atendimento;

  // Struct para o catalogo de servicos do salao
  typedef struct{
    char nome[50];
    double precoVenda, custo;
  } Produto;

  // Lista de servicos cadastrados onde o indice bate com o codigo do menu
  Produto tabela[] = {
    {"", 0.00, 0.00},
    {"Aplique Fibra Sint. Ondulada",   280.00, 160.00},
    {"Aplique Fibra Sint. Cacheada",   320.00, 190.00},
    {"Aplique Fibra Sint. Lisa",       350.00, 210.00},
    {"Aplique Masc. Ondulado",         180.00, 110.00},
    {"Aplique Masc. Cacheado",         200.00, 120.00},
    {"Aplique Masc. Liso",             220.00, 130.00},
    {"Mega Hair Simples",              600.00, 380.00},
    {"Manutencao de Aplique",          120.00,  60.00},
    {"Escova Simples",                  60.00,  25.00},
    {"Tonalizacao Basica",             120.00,  60.00},
    {"Corte Simples Feminino",          60.00,  20.00},
    {"Kit Shampoo Basico",              35.00,  18.00},
    {"Serum Capilar Simples",           40.00,  20.00},
    {"Escova Basica Mega Hair",         70.00,  35.00},
    {"Fita Adesiva Comum",              25.00,  12.00},
    {"Removedor de Cola",               20.00,   8.00}
  };

  // Faz as contas da venda tirando as devolucoes e aplicando taxa se necessário
  void calcularVenda(Atendimento *v) {
    int efetivos = v->quantidade - v->devolucoes;
    if(efetivos<0){
      efetivos = 0;
    }

    v->total = efetivos * v->valor;
    v->gasto = v->quantidade * v->custo;
    v->lucro = v->total - v->gasto;

    if(v->devolucoes>=2){
      v->taxa_devolucao = 20.00;
      v->total += 20.00;
      v->lucro += 20.00;
    }else{
      v->taxa_devolucao = 0.00;
    }
  }

  // Limpa o buffer do teclado para nao dar erro nas leituras de dados
  void limparBuffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF){}
  }

  // Pega as informações do produto na tabela de acordo com o codigo digitado
  void obterProduto(int codigo, char *nome, double *preco, double *custo){
    if(codigo>=1 && codigo<=16){
      strncpy(nome, tabela[codigo].nome, 49);
      nome[49] = '\0'; 
      *preco = tabela[codigo].precoVenda;
      *custo = tabela[codigo].custo;
    }
  }

  #define SEP "+------+----------------+------------------------------+----------+----------+-----+------------+------------+------------+-----+----------+\n"
  #define CAB "| %-4s | %-14s | %-28s | %-8s | %-8s | %-3s | %-10s | %-10s | %-10s | %-3s | %-8s |\n"
  #define LIN "| %-4s | %-14s | %-28s | %8.2f | %8.2f | %-3d | %10.2f | %10.2f | %10.2f | %-3d | %8.2f |\n"

  // Filtra e mostra na tela todos os atendimentos feitos em um dia especifico
  void exibirRelatorioDiario(Atendimento vendas[], int totalVendas){
    int dia_busca, mes_busca, encontradas=0, i;
    double fat=0, gas=0, luc=0;

    printf("\n--- RELATORIO DIARIO ---\n");
    printf("Dia : "); 
    scanf("%d", &dia_busca);
    printf("Mes : "); 
    scanf("%d", &mes_busca);
    limparBuffer();

    printf("\nRELATORIO DIARIO  %02d/%02d\n", dia_busca, mes_busca);
    printf(SEP);
    printf(CAB, "#","CLIENTE","SERVICO","VLR UN.","CUSTO UN.","QTD","FATURAMENTO","GASTO TOT.","LUCRO","DEV","TAXA");
    printf(SEP);

    for(i=0;i<totalVendas;i++){
      if(vendas[i].dia==dia_busca && vendas[i].mes==mes_busca){
        encontradas++;
        char num[12]; 
        sprintf(num, "%d", encontradas);
        printf(LIN, num, vendas[i].cliente, vendas[i].servico, vendas[i].valor, vendas[i].custo, vendas[i].quantidade, vendas[i].total, vendas[i].gasto, vendas[i].lucro, vendas[i].devolucoes, vendas[i].taxa_devolucao);
              
        fat += vendas[i].total;
        gas += vendas[i].gasto;
        luc += vendas[i].lucro;
        }
      }

      printf(SEP);
      if(encontradas==0){
        printf("  Nenhum atendimento nesta data.\n");
      }else{
        printf("  Atendimentos       : %d\n", encontradas);
        printf("  Faturamento do Dia : R$ %10.2f\n", fat);
        printf("  Gasto Total do Dia : R$ %10.2f\n", gas);
        printf("  Lucro do Dia       : R$ %10.2f\n", luc);
      }
      printf("\nENTER para voltar..."); 
      getchar();
  }

  // Filtra as vendas de um determinado mes e ordena do maior faturamento para o menor
  void exibirRelatorioMensal(Atendimento vendas[], int totalVendas){
    int mes_busca, i, j, encontradas = 0;
    double fat=0, gas=0, luc=0;
    static Atendimento vm[MAX_VENDAS];

    printf("\n--- RELATORIO MENSAL ---\n");
    printf("Mes (1-12): "); 
    scanf("%d", &mes_busca); 
    limparBuffer();

    if(mes_busca<1 || mes_busca>12){ 
      printf("Mes invalido!\n"); 
      getchar(); 
      return; 
      }

    for(i=0;i<totalVendas;i++){
      if(vendas[i].mes==mes_busca){
        vm[encontradas++] = vendas[i];
        fat += vendas[i].total;
        gas += vendas[i].gasto;
        luc += vendas[i].lucro;
      }
    }

    if(encontradas==0){ 
      printf("Nenhum dado neste mes.\n"); 
      getchar(); 
      return; 
    }

    for(i=0;i<encontradas-1;i++){
      for(j=0;j<encontradas-1-i;j++){
        if(vm[j].total<vm[j + 1].total){
          Atendimento t = vm[j]; 
          vm[j] = vm[j + 1]; 
          vm[j + 1] = t;
        }
      }
    }

    char meses[][12] = {"Janeiro","Fevereiro","Marco","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};

    printf("\nRESUMO MENSAL: %s\n", meses[mes_busca - 1]);
    printf("  Vendas no Mes       : %d\n", encontradas);
    printf("  Faturamento Mensal  : R$ %10.2f\n", fat);
    printf("  Gasto Total Mensal  : R$ %10.2f\n", gas);
    printf("  Lucro Liquido Mensal: R$ %10.2f\n", luc);
    printf(SEP);
    printf(CAB, "POS","CLIENTE","SERVICO","VLR UN.","CUSTO UN.","QTD","FATURAMENTO","GASTO TOT.","LUCRO","DEV","TAXA");
    printf(SEP);

    for(i=0;i<encontradas;i++){
      char pos[12]; 
      sprintf(pos, "%d", i + 1);
      printf(LIN, pos, vm[i].cliente, vm[i].servico, vm[i].valor, vm[i].custo, vm[i].quantidade, vm[i].total, vm[i].gasto, vm[i].lucro, vm[i].devolucoes, vm[i].taxa_devolucao);
    }
    printf(SEP);
    printf("\nENTER para voltar..."); 
    getchar();
  }

  // Acumula o faturamento total de cada um dos 12 meses e ordena de forma decrescente
  void exibirRelatorioAnual(Atendimento vendas[], int totalVendas){
    double fat[12] = {0}, gas[12] = {0}, luc[12] = {0};
    int dev[12] = {0}, ven[12] = {0}, ord[12], i, j, m;
      
    for(i=0;i<12;i++){
      ord[i] = i + 1;
    }
      
    double tf = 0, tg = 0, tl = 0;
    int tv = 0, td = 0;

    for(i=0;i<totalVendas;i++){
      m = vendas[i].mes - 1;
      if(m>=0 && m<12){
        fat[m] += vendas[i].total;
        gas[m] += vendas[i].gasto;
        luc[m] += vendas[i].lucro;
        dev[m] += vendas[i].devolucoes;
        ven[m]++;
              
        tf += vendas[i].total;
        tg += vendas[i].gasto;
        tl += vendas[i].lucro;
        tv++;
        td += vendas[i].devolucoes;
      }
    }

    for(i=0;i<11;i++){
      for(j = 0; j < 11 - i; j++){
        if(fat[j]<fat[j + 1]){
          double a = fat[j]; fat[j] = fat[j + 1]; fat[j + 1] = a;
          double b = gas[j]; gas[j] = gas[j + 1]; gas[j + 1] = b;
          double c = luc[j]; luc[j] = luc[j + 1]; luc[j + 1] = c;
          int d = dev[j]; dev[j] = dev[j + 1]; dev[j + 1] = d;
          int e = ord[j]; ord[j] = ord[j + 1]; ord[j + 1] = e; 
          int ff = ven[j]; ven[j] = ven[j + 1]; ven[j + 1] = ff;
        }
      }
    }

    char meses[][12] = {"Janeiro","Fevereiro","Marco","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};

    printf("\nRELATORIO ANUAL (FATURAMENTO DECRESCENTE)\n");
    printf("  Total de Vendas         : %d\n", tv);
    printf("  Total de Devolucoes     : %d\n", td);
    printf("  Faturamento Bruto Anual : R$ %10.2f\n", tf);
    printf("  Gasto Total Anual       : R$ %10.2f\n", tg);
    printf("  Lucro Liquido Anual     : R$ %10.2f\n", tl);
    printf("+-----+-----------+--------+------------+----------------+----------------+----------------+\n");
    printf("| %-3s | %-9s | %-6s | %-10s | %-14s | %-14s | %-14s |\n","POS","MES","VENDAS","DEVOLUCOES","FATURAMENTO","GASTO TOTAL","LUCRO LIQUIDO");
    printf("+-----+-----------+--------+------------+----------------+----------------+----------------+\n");

    int pos=1;
    for(i=0;i<12;i++){
      if(fat[i]>0){ 
        printf("| %-3d | %-9s | %-6d | %-10d | R$%11.2f | R$%11.2f | R$%11.2f |\n", pos, meses[ord[i] - 1], ven[i], dev[i], fat[i], gas[i], luc[i]);
        pos++;
      }
    }
    printf("+-----+-----------+--------+------------+----------------+----------------+----------------+\n");
    printf("\nENTER para voltar..."); 
    getchar();
  }

  int main(){
    static Atendimento vendas[MAX_VENDAS];
    int totalVendas = 0, opcao, cod, max_dias, i;

    do{
      printf("\n=== SISTEMA DE VENDAS ===\n");
      printf("1 - Registrar Atendimento\n");
      printf("2 - Relatorio Diario\n");
      printf("3 - Relatorio Mensal\n");
      printf("4 - Relatorio Anual\n");
      printf("0 - Sair\n");
      printf("Opcao: ");
      scanf("%d", &opcao); 
      limparBuffer();

      switch(opcao){
        // Menu para ler e validar todos os dados do novo atendimento
        case 1: 
          if(totalVendas>=MAX_VENDAS){ 
            printf("\nLimite atingido.\n"); 
              getchar(); 
              break; 
          }

          printf("\nNome do cliente: ");
          fgets(vendas[totalVendas].cliente, 50, stdin);
          vendas[totalVendas].cliente[strcspn(vendas[totalVendas].cliente,"\n")] = 0; 

          printf("\nServicos:\n");
          for(i=1;i<=16;i++){
            printf("  %2d - %-28s R$ %.2f (custo R$ %.2f)\n", i, tabela[i].nome, tabela[i].precoVenda, tabela[i].custo);
          }

          do{ 
            printf("Codigo: "); 
            scanf("%d", &cod); 
            limparBuffer(); 
          }while(cod<1 || cod>16);
                  
          obterProduto(cod, vendas[totalVendas].servico, &vendas[totalVendas].valor, &vendas[totalVendas].custo);

          do{ 
            printf("Quantidade: "); 
            scanf("%d", &vendas[totalVendas].quantidade); 
            limparBuffer(); 
          }while(vendas[totalVendas].quantidade<=0);

          do{ 
            printf("Mes (1-12): "); 
            scanf("%d", &vendas[totalVendas].mes); 
            limparBuffer();
          }while(vendas[totalVendas].mes<1 || vendas[totalVendas].mes>12);

          max_dias = 31;
          if(vendas[totalVendas].mes==4 || vendas[totalVendas].mes==6 || vendas[totalVendas].mes==9 || vendas[totalVendas].mes==11){
            max_dias = 30;
          }else if (vendas[totalVendas].mes==2){
            max_dias = 28; 
          }

          do{ 
            printf("Dia (1-%d): ", max_dias); 
            scanf("%d", &vendas[totalVendas].dia); 
            limparBuffer(); 
          }while(vendas[totalVendas].dia<1 || vendas[totalVendas].dia>max_dias);

          do{
            printf("Devolucoes (0 a %d): ", vendas[totalVendas].quantidade);
            scanf("%d", &vendas[totalVendas].devolucoes); 
            limparBuffer();
          }while(vendas[totalVendas].devolucoes<0 || vendas[totalVendas].devolucoes>vendas[totalVendas].quantidade);

          calcularVenda(&vendas[totalVendas]); 

          printf("\n  Faturamento : R$ %.2f\n",   vendas[totalVendas].total);
          printf("  Gasto        : R$ %.2f\n",   vendas[totalVendas].gasto);
          printf("  Lucro        : R$ %.2f\n",   vendas[totalVendas].lucro);
          printf("  Taxa dev.    : R$ %.2f\n",   vendas[totalVendas].taxa_devolucao);
          printf("Venda registrada!\n");

          totalVendas++;  
          system("cls"); 
          limparBuffer();
          getchar();
          break;

        case 2: 
          exibirRelatorioDiario(vendas, totalVendas); 
          system("cls"); 
          limparBuffer(); 
          break;
                  
        case 3: 
          exibirRelatorioMensal(vendas, totalVendas); 
          system("cls"); 
          limparBuffer(); 
          break;

        case 4: 
          exibirRelatorioAnual(vendas, totalVendas);  
          system("cls"); 
          limparBuffer(); 
          break;

        case 0: 
          printf("\nSaindo...\n"); 
          break;

        default: 
          printf("\nOpcao invalida!\n"); 
          system("cls"); 
          limparBuffer();
          getchar(); 
      }
    }while(opcao!=0);

    printf("\nFim do programa\n");
    return 0;
  }