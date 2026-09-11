    #include <stdlib.h>
    #include <stdio.h>
    #include <locale.h>
    #include <windows.h>

    
    int main(){

        int a, *b;
        
        a = 50;

        b = &a;

        printf("\nEndereço e A: %p", &a);
        
        printf("\nEndereço e B: %p", &b);

        printf("\nA antes de mexer: %d", a);

        *b = 100;

        printf("\nA depois: %d \n", a);
        system("pause");
   }