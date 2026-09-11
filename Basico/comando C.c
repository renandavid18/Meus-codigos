    #include <stdlib.h>
    #include <stdio.h>
    #include <locale.h>
    #include <windows.h>

       int main(){

              setlocale(LC_CTYPE,"Portuguese");
              int x, y, i, j;
              
              printf("Digite um valor para x e outro para y: ");
              scanf("%d%d", &x, &y);

              for(i=1;i<=y;i++){
                     printf("%d ", i);
                     
                     if(i%x==0){
                            printf("\n");
                     }
              }
              system("pause");
       }