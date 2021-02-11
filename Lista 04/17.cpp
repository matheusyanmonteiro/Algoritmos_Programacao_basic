#include <stdio.h>
#include <stdlib.h>
#include <math.h>

	int main () {
		
		int matriz[8][8], guardavalor[8] = {0}, somalinha[8] = {0};
		int i,j;
		int somadiago = 0, teste = 0, maior = 0;
		
			for (i = 0; i < 8; i++){

				for(j = 0; j < 8; j++){
					scanf("%d",&matriz[i][j]);
					if (i == j)
					somadiago +=  matriz[i][j];
					
					somalinha[i] += matriz[i][j];
				}
			}
			
			for ( i = 0; i < 8; i++){
				guardavalor[i] = somalinha[i] % somadiago;
				if (guardavalor[i] > teste){
					teste = guardavalor[i];
					maior = i;	
				}
			}
			

				printf("%d",maior);
		
		
		return 0;
		
	}
