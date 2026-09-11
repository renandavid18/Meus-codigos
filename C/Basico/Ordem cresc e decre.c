    #include <stdlib.h>
    #include <stdio.h>
    #include <locale.h>
    #include <windows.h>
    #include <conio.h>

    int k=0, d=0, l=0, f=0, o=0;

    int menu(){
        int q=0, g=0;
        char tecla;
        while(g==0){
            printf("===========MENU===========");
            printf("\n(1) Quantidade de Números");
            printf("\n(2) Pular um número");
            printf("\n(3) Parar em um número");
            printf("\n(4) finalizar");
            printf("\n(5) Cancelar execução do código\n");
            tecla = getch(); 


            switch(tecla){
                case '1':
                    printf("\n\nDeseja ver quantos números? \n");
                    scanf("%d", &k);
                    fflush(stdin);
                    break;
            
                case '2':
                    printf("\n\nDeseja pular qual número da conagem? \n");
                    scanf("%d", &l);
                    fflush(stdin);
                    l=l-1;
                    f=1;
                    break;
                    

                case '3':
                    printf("\n\nDeseja parar em qual número? \n");
                    scanf("%d", &d);
                    fflush(stdin);
                    o=1;
                    break;

                case '4':
                    g=1;
                    break;
                
                case '5':
                    printf("\n\nTem certeza que deseja finalizar o código antes da execução?");
                    printf("\n(1) Sim | (0) Não \n");
                    scanf("%d", &q);
                    fflush(stdin);
                    if(q==1){
                        exit(0);
                        break;
                    }
                    else break;

                default:
                    printf("\n\n[Erro] Opção inválida! Escolha de 1 a 5.\n");
                    system("pause");
                    break;
            }
            if(k==0){
                k=20;
            }
        }
    }

    int main(){
        setlocale(LC_CTYPE, "Portuguese");
        int i, j, t, n=1, c;
        while(n==1){
            menu();
            system("cls");
            printf("Ordem crescente: \n");
            for(i=0;i<=k;i++){
                
                if(f==1 && l!=0 && i==l){
                    continue; 
                }
                if(o==1 && d!=0 && i==d){
                    printf("%d\n", i); 
                break; 
                }
                printf("%d\n", i);
            }
            system("pause");
            
            

            printf("\nDeseja Usar as informações passadas anteriormente?");
            printf("\n(1) Sim | (0) Não \n");
            if(scanf("%d", &t)!= 1){
                printf("\n[ERRO] Por favor, digite apenas números!\n");
                while (getchar() != '\n'); 
                break; 
            }
            
            if(t==0){
                f=0;
                o=0;
                menu();
                
                printf("\nEscrevendo na ordem decrescente: \n");
                for(j=k;j>=0;j--){
                    
                    if(f==1 && l!=0 && j==l){
                        continue; 
                    }
                    if(o==1 && d!=0 && j==d){
                        printf("%d\n", j); 
                    break; 
                    }
                    printf("%d\n", j);
                }
            }else{
                printf("\nReescrevendo na ordem decrescente: \n");
                for(j=k;j>=0;j--){
                    
                    if(f==1 && l!=0 && j==l){
                        continue; 
                    }
                    if(o==1 && d!=0 && j==d){
                        printf("%d\n", j); 
                    break; 
                    }
                    printf("%d\n", j);
                }
            }
            printf("\nDeseja refazer a operação?");
            printf("\n(1) Sim | (0) Não \n");
            if(scanf("%d", &c)!= 1){
                printf("\n[ERRO] Por favor, digite apenas números!\n");
                while (getchar() != '\n'); 
                break; 
            }
            if(c==0) n=0;
        }
        return 0;
    }