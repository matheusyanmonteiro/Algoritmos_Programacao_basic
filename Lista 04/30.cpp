#include <stdio.h>
#include <stdlib.h>

	int main(){
		int matriz[7][7];
		int i,j;
		int somacruz = 0, somaqd1 = 0, somaqd2 = 0, somaqd3 = 0, somaqd4 = 0, calculogeral = 0;
		
		for (i = 0; i < 7; i++){
			for ( j = 0; j < 7; j++){
				scanf("%d", &matriz[i][j]);
			}
		}
		//soma da cruz
		for (i = 0; i < 7; i++){
			somacruz += matriz[3][i];
			somacruz += matriz[i][3];
		}
		somacruz -= matriz[3][3];
		//termino soma da cruz 
		// soma qd1
		for (i = 0; i < 3; i++){
			for (j = 0; j < 3; j++){
				somaqd1 += matriz[i][j];
			}
		}
		//termino qd1
		//soma qd2
		for (i = 0; i < 3; i++){
			for (j = 4; j < 7; j++){
				somaqd2 += matriz[i][j];
			}
		}
		//termino qd2
		//soma qd3
		for ( i = 4; i < 7; i++){
			for (j = 0; j <3; j++){
				somaqd3 += matriz[i][j];
			}
		}
		//termino qd3
		//soma qd3
		for ( i = 4; i < 7; i++){
			for (j = 4; j <7; j++){
				somaqd4 += matriz[i][j];
			}
		}
		//termino qd3
		
		//calculo geral
		if ( somaqd1 > somacruz)
			calculogeral +=somaqd1;
		if ( somaqd2 > somacruz)
			calculogeral +=somaqd2;
		if ( somaqd3 > somacruz)
			calculogeral +=somaqd3;
		if ( somaqd4 > somacruz)
			calculogeral +=somaqd4;
			
		
	   // printf("%d\n",somaqd1);
	    //printf("%d\n",somaqd2);
	   // printf("%d\n",somaqd3);
	   // printf("%d\n",somaqd4);
	    
	    printf(" %d",calculogeral);
		//printf("soma da cruz :%d",somacruz);
		

		
		
		
		
		return 0;
	}
