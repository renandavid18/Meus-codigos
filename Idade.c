#include <stdio.h>
#include <stdlib.h>

int main() {
	int nasc, atual, idade = 0;
			
	printf("Digite seu ano de nascimento \n");
	scanf("%d", &nasc);
	printf("Digite o ano atual \n");
	scanf("%d", &atual);
	
	idade = atual - nasc;
	
	printf("Sua idade e de: %d.", idade);
	return 0;
}
