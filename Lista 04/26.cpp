#include <stdio.h>
#include <stdlib.h>

	int main(){
		
		int matriz[10][5],soma[10] = {0},controle = 0, exata;
		int i, j;
		
		for (i = 0; i < 10; i++){
			for (j = 0; j < 5; j++){
				scanf("%d",&matriz[i][j]);
				soma[i] += matriz[i][j];
			}
		}
		
		for ( i = 0; i < 10; i++){
			if (soma[i] > controle){
				controle = soma[i];
				exata = i;
			}
		}
		
		printf("%d",exata);
		
		return 0;
	}
