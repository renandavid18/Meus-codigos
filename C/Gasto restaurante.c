    #include <stdlib.h>
    #include <stdio.h>
    #include <locale.h>
    #include <windows.h>


    int main(){
        int pessoas, d, c, i, j, h;
        double gasto, prctgorjelta, gorjeta = 0, valortotal, troco, valordado = 0, valorpagar, valordiv;
        setlocale(LC_CTYPE, "Portuguese");

        printf("Me informe quantas pessoas dividirão essa conta: ");
        scanf("%d", &pessoas);

        printf("Alguem vai dar um valor fixo? \n");
        printf("EX: 1 pessoa vai dar 20 reais\n");
        printf("(1) SIM | (0) Não \n");
        scanf("%d", &d);
        if(d==1){
            
            printf("Quantas pessoas darão um valor fixo?\n");
            scanf("%d", &c);
            double pv[c];
            pessoas = pessoas - c;
            for(i=0;i<=c-1;i++){
            
                printf("A %d-Pessoa vai dar: ", i+1);
                scanf("%lf", &pv[i]);
            }
            for(i=0;i<=c-1;i++){
            
                valordado = pv[i] + valordado;
            }
        }
        
        system("cls");

        printf("Sabe a porcentagem da gorjeta?");
        printf("\n(1) SIM | (0) Não \n");
        scanf("%d", &h);

        if(h==1){

            printf("Me informa qual a porcentagem da gorjeta do restaurante:\n");
            printf("Não precisa por %% apenas o número \n");
            scanf("%lf", &prctgorjelta);

            prctgorjelta = prctgorjelta/100;
        
        }else if(h==0){
        
            printf("Ok mas sabe o valor da gorjeta?");
            printf("\n(1) SIM | (0) Não \n");
            scanf("%d", &j);
        
            if(j==1){ 
                
                printf("Me informa o valor da gorjeta: ");
                scanf("%lf", &gorjeta);
                prctgorjelta = 1;
            }else gorjeta = 0; 
        }

        
        printf("Me informa o total do valor gasto no restaurante: \n");
        printf("Caso tenha declarado a gorjeta ou a porcentagem ela não informe ela no valor!!\n");
        scanf("%lf", &gasto);
        
        system("pause");
        system("cls");

        if(h==1){
            gorjeta = prctgorjelta * gasto;
        }

        if(h==1 || j==1){
            valortotal = gorjeta + gasto;
        }else valortotal = gasto;
        
        if(valortotal < valordado){

            troco = valordado - valortotal;
            
            printf("Os valores dados já cobriram o valor gasto e receberam de troco: %.2lfR$\n", troco);
        }else if(valordado < valortotal){

            valorpagar = valortotal - valordado;
            valordiv = valorpagar / pessoas;

            printf("O valor que será dividido entre cada um que não pagou (%d pessoas) será de: %.2lfR$\n",pessoas, valorpagar);
            system("pause");
            printf("Cada um deverá pagar %.2lfR$\n", valordiv);
            system("pause");
        }
    }