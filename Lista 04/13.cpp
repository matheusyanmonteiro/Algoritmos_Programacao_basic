#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	int main (){
		
		char palavra[80];
		int tamanho;
		
	 	gets(palavra);
		
		tamanho = strlen(palavra);
		
		printf("%d",tamanho);
		
		getchar();
		
		
		return 0;
	}
