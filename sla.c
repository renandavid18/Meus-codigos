    #include <stdlib.h>
    #include <locale.h>
    #include <stdio.h>
    
    int main() {
        
        setlocale(LC_CTYPE, "Portuguese");

        printf("Agora o 'à' e o 'ç' funcionam no CMD! \n");
        system("pause");
        return 0;
    }