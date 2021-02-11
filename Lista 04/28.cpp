#include <stdio.h>
#include <stdlib.h>

	int main(){
	int matriz[9][9],vetor[9]={0}, desvetor[9],inversov[9];
	int i, j,k;
	
	for (i = 0; i < 9; i ++){
		for (j = 0; j < 9; j++){
			scanf("%d",&matriz[i][j]);
			
		}
	}
		
	for ( i = 0, k = 8  ; i < 9; i ++, k--){
		
		for (j = 0; j < 9; j++){
			if(i == j){
			vetor[k] = matriz[i][j];
			}
			if (i + j == 8){
			desvetor[k] = matriz[i][j];
			}
		}
		
	}

	
	for ( i = 0 ; i < 9; i ++){
		
		for (j = 0; j < 9; j++){
			if(i == j){
			matriz[i][j] = desvetor[i];
			}
			if (i + j == 8){
			matriz[i][j] = vetor[i];
			}
		}
		
	}
	
	printf("\n");
	for ( i = 0 ; i < 9; i ++){
		for (j = 0; j < 9; j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
		
	}
	
		return 0;
	}
