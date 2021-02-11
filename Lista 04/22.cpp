#include <stdio.h>
#include <stdlib.h>

	int main(){
		
		int matriz[7][7];
		int i,j; 
		int soma =0;
		
		for (i = 0; i < 7; i++){
			for (j = 0; j < 7; j++){
				scanf("%d",&matriz[i][j]);
				if(i == j){
					soma += matriz[i][j];
				}
			}
		}
		
		printf("%d",soma);
		
		return 0;
	}
