#include <stdio.h>
#include <stdlib.h>

	/*Seja A e B duas matrizes 4x5 de inteiros. Fac ¸a um programa que
	leia os valores de A e depois
	os de B e imprima a soma da matriz A com a matriz B.*/

	int main(){
		int matrizA[4][5], matrizB[4][5], matrizSoma[4][5];
		int i,j;
		
		for(i = 0; i < 4; i++){
			for(j = 0; j < 5; j++){
				scanf("%d",&matrizA[i][j]);
			}
		}
		for(i = 0; i < 4; i++){
			for(j = 0; j < 5; j++){
				scanf("%d",&matrizB[i][j]);
				matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
			}
		}
		
		for(i = 0; i < 4; i++){
			for(j = 0; j < 5; j++){
				printf("%d ",matrizSoma[i][j]);
			}
			printf("\n");
		}
		
		
		
		
		return 0;
	}
