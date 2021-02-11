#include <stdio.h>
#include <stdlib.h>

/*Escreva um c ´odigo que leia os valores de uma matriz A (7x9) de
inteiros e mostre na tela sua
transposta.*/

	int main(){
		int matrizA[7][9], matrizAT[9][7];
		int i,j;
		
		
		for (i = 0; i < 7; i++){
			for (j = 0; j < 9; j++){
				scanf("%d",&matrizA[i][j]);
				matrizAT[j][i]=matrizA[i][j];
			}
		}
		
		for (i = 0; i < 9; i++){
			for (j = 0; j < 7; j++){
				printf("%d ",matrizAT[i][j]);
			}
				printf("\n");
		}
		
		
		
		return 0;
	}
