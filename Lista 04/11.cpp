#include <stdio.h>
#include <stdlib.h>

	int main (){
		
		int numero[500];
		int a,i, j, contador = 0;
		
		for (i = 0; i < 500; i++){
			scanf("%d",&numero[i]);
		}
	
		
		for (i = 0; i <500; i++){
				for (j = 0; j < 500; j++){
						
					if (numero[i] == numero[j] && j < i){
						break;
					}
			if (i == j){
	
				printf("%d ",numero[i]);
			
		}
			}
				j = 0;
			}
		printf("\n");
		
		
		
		return 0;
	}
