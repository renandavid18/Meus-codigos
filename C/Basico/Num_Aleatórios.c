    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <locale.h>
    #include <windows.h>

    int main(){
        int i, num[10];

        for(i=0;i<=9;i++){
            num[i] = rand();
        }
        for(i=0;i<=9;i++){
            printf("%d\n", num[i]);
            
        }
        system("pause");
    }