#include <stdio.h>
#include <stdlib.h>

	int main(){
		
	int matriz[9][9];
	int i,j,contador = 0;
	
	for (i = 0; i < 9; i++){
		for (j = 0; j < 9; j++){
			scanf("%d",&matriz[i][j]);
			if (matriz[i][j] == matriz[j][i] ){
				contador++;
			}
		}
	}
	
	if (contador == 81) {
		printf("S\n");
	}
	else{
		printf("N\n");
	}
	
	
		
		
		return 0;
	}
