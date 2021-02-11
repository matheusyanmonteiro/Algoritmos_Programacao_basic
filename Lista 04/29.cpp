#include <stdio.h>
#include <stdlib.h>

	int main(){
		int matriz[10][10];
		int i, j;
		int soma = 0;
		
		for (i = 0; i < 10; i++){
			for (j = 0; j < 10; j++){
				scanf("%d", &matriz[i][j] );
			}
		}
		
		for(i = 0; i < 10; i++ ){
			for (j = 0; j <= i; j++){
				soma += matriz[i][j];
			}
		}
		
			printf("%d ",soma);
		
		return 0;
	}
