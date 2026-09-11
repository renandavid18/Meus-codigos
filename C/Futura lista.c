    #include <stdlib.h>
    #include <stdio.h>
    #include <locale.h>
    #include <windows.h>

    typedef struct Dados{

        int i, j, k, d, id, n, c, r, q, l;
        double pes, f;
        char nome[61], cpf[12];

    }dados;

    void exibir() {
        
        system("cls");
        printf("===================================================\n");
        printf("           |Sistema de Doação de Sangue|           \n");
        printf("===================================================\n\n");
    
    }

    void imprimir(dados d[], int lim) {

        if (lim == 0) {
            printf("\nNenhum doador cadastrado na memória ainda.\n");
            return;
        }

        for(int h=0;h<lim;h++){
 
            printf("\n\033[1;         %d-Doador:\n\033[0m", h + 1);
            printf("\n          Dados:");
            printf("\nNome:  | %60s |", d[h].nome);
            printf("\nCPF:   | %12s |", d[h].cpf);
            printf("\nIdade: | %12d |", d[h].id);
            printf("\nPeso:  | %10.2lf |", d[h].pes);
            
            if(d[h].pes >= 50 && d[h].id >= 16){
                
                printf("\nDoador Possibilitado de doar até ");
                
                if(d[h].n==1 && d[h].pes<56.2){
                    
                    d[h].f = d[h].pes*8;
                    printf("%.2lfml de sangue\n", d[h].f);
                }else printf("450ml de sangue\n");

            }else if(d[h].pes<50 || d[h].id<16){
                printf("\n\033[1;31mDoador Impossibilitado!\033[0m\n");
            }
            printf("======================================================================");
        }
    }

    int inserir(dados d[], int inicio){
        int g;

        for(g=inicio;g<200;g++){

            exibir();
            printf("Cadastrando doador número: %d\n", g + 1);
            printf("\nInsira as seguintes informações por favor:\n");
            printf("\nVocê biológicamente é do sexo:");
            printf("\n(0) Masculino | (1) Feminino \n");
            scanf("%d", &d[g].n);
            
            while(d[g].i==0){
            
                setbuf(stdin, NULL);
                printf("informe seu nome completo: \n");
                fgets(d[g].nome, 61, stdin);
                d[g].nome[strcspn(d[g].nome, "\n")] = '\0'; 

                printf("\nSeu nome completo é: \n| %60s |", d[g].nome);
                printf("\nSeu nome está correto?");
                printf("\n(1) SIM | (0) Não \n");
                scanf("%d", &d[g].d);
                
                if(d[g].d==1) d[g].i=1;

            }

            while(d[g].j==0){
                
                setbuf(stdin, NULL);
                printf("informe seu CPF:\n");
                fgets(d[g].cpf, 12, stdin);
                d[g].cpf[strcspn(d[g].cpf, "\n")] = '\0'; 

                printf("\nSeu CPF é: \n| %12s |", d[g].cpf);
                printf("\nEstá correto?");
                printf("\n(1) SIM | (0) Não \n");
                scanf("%d", &d[g].k);
                
                if(d[g].k==1) d[g].j=1;

            }

            printf("\nMe informa sua idade: ");
            scanf("%d", &d[g].id);
            printf("\nMe informa seu peso em kg: ");
            scanf("%lf", &d[g].pes);


            exibir();
            
            printf("\nSeus dados:");
            printf("\nNome:  | %-60s |", d[g].nome);
            printf("\nCPF:   | %-12s |", d[g].cpf);
            printf("\nIdade: | %-12d |", d[g].id);
            printf("\nPeso:  | %-10.2lf |", d[g].pes);

            printf("\nAnalisando Dados");        
            
            for(int s=0;s<=5;s++){
                
                Sleep(1000);
                printf(".");
                fflush(stdout);

                if(s==2){
                    printf("\r                                \rAnalisando Dados");
                    fflush(stdout);
                }
            }   
            printf("\n");
            system("pause");
            exibir();

            printf("\n       |Dados recebidos com suvesso!|       \n");

            if(d[g].pes >= 50 && d[g].id >= 16){
                
                printf("Você pode doar sangue!\nProcure nossa agência mais proxima de sua casa!\n");
                
                if(d[g].n==1 && d[g].pes<56.2){
                    
                    d[g].f = d[g].pes*8;
                    printf("Você pode doar cerca de %.2lfml de sangue\n", d[g].f);
                }else printf("Você pode doar até 450ml de sangue\n");

            }else if(d[g].pes<50 || d[g].id<16){
                
                    
                printf("Você não pode doar pois: \n");
                    
                if(d[g].pes<50 && d[g].id<16) printf("Seu peso de %.2lf é menor que 50 (peso minimo)\n E sua idade de %d é menor que 16 (idade minima) \n", d[g].pes, d[g].id);
                
                else if(d[g].pes<50) printf("Seu peso de %.2lf é menor que 50 (peso minimo exigido) \n", d[g].pes);
                    
                else if(d[g].id<16) printf("Sua idade de %.2lf é menor que 16 (idade minima exigida) \n", d[g].id);
            }
            system("pause");
            exibir();
            printf("Deseja adicionar outro doador?");
            printf("\n(1) SIM | (0) Não \n");
            scanf("%d", &d[g].c);
        
            if (d[g].c == 0) {
            return g + 1; 
            }
        }
        return g;
    }

    void salvar(dados d[], int total) {
        FILE *arquivo = fopen("doadores.bin", "wb");
        if (arquivo == NULL) {
            printf("\n\033[1;31mErro ao abrir o arquivo para salvar!\033[0m\n");
            return;
        }
        fwrite(d, sizeof(dados), total, arquivo);
        fclose(arquivo);
        printf("\n\033[1;32m%d Registros salvos com sucesso em 'doadores.bin'!\033[0m\n", total);
    }

    
    int carregar(dados d[]) {
        FILE *arquivo = fopen("doadores.bin", "rb");
        if (arquivo == NULL) {
            printf("\nNenhum arquivo de salvamento prévio encontrado. Iniciando zerado.\n");
            return 0;
        }
        int total = 0;
        while (fread(&d[total], sizeof(dados), 1, arquivo) == 1) {
            total++;
            if (total >= 200) break; // Trava de segurança para o tamanho do vetor
        }
        fclose(arquivo);
        printf("\n\033[1;32m%d registros carregados com sucesso do HD para a memória!\033[0m\n", total);
        return total;
    }

    int main(){

        dados d[200] = {0};
        setlocale(LC_CTYPE,"Portuguese");
        int op, ttc = 0;;

        exibir();

        do {
            system("cls");
            exibir();
            printf("\n====MENU==== \n");
            printf("1 Inserir \n");
            printf("2 Imprimir \n");
            printf("3 Salvar \n");
            printf("4 Carregar \n");
            printf("0 Sair \n");
            printf("Opcao: ");
            scanf("%d", &op);
            
            switch (op) {
            
            
                case 1: {
                    exibir();
                    ttc = inserir(d, ttc); 
                    break;
                }
                case 2:
                    exibir(); 
                    imprimir(d, ttc); 
                    break;

                case 3: 
                    exibir();
                    salvar(d, ttc); 
                    break;
                
                case 4: 
                    exibir();
                    ttc = carregar(d); 
                    break;
                
                case 0:
                    exibir();
                    printf("Saindo... \n");
                break;
                
                default:
                    printf("Opcao invalida \n");
            }

                if (op != 0) {
                    system("pause");
                }
        } while (op != 0);
        return 0;
    }  
    