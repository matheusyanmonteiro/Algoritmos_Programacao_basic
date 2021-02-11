#include <stdio.h>
#include <stdlib.h>

	int main(){
		
		int matriz[4][5],armazena = 0, coluna = 0, linha =0;
		int i,j;
	
	for ( i = 0; i < 4; i++){
		for(j = 0; j < 5; j++){
			scanf("%d",&matriz[i][j]);
		}
	}
	
	for (i = 0; i < 4; i++ ){
		for (j = 0; j < 5; j++){
			if ( matriz[i][j] > armazena){
			armazena = matriz[i][j];
			coluna = i;	
			linha = j;
			
			}
		}
	
	}
	printf("%d %d %d",armazena,coluna, linha);
	
	
	
	
	
	return 0;
	}
	
	
	
