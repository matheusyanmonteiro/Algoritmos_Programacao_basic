#include <stdio.h>
#include <stdlib.h>
#include <math.h>

	int main(){
		
		int numero[28];
		int i;
		float soma = 0 , media_simples = 0, novo[28],novoaoquadrado[28], media_2 = 0, soma2 = 0, desvio = 0 ;
		
		for (i = 0; i < 28; i++){
			
			scanf("%d",&numero[i]);
			soma = soma + numero[i];
			
		}
		
			media_simples = soma / 28;
	
		for (i = 0; i < 28; i++)		{
			novo[i] = numero[i] - media_simples;
			novoaoquadrado[i] = pow(novo[i],2);
		
			soma2 = soma2 + novoaoquadrado[i];
		}
				
			media_2 = soma2 / 28;
			desvio = sqrt(media_2);
			printf("%.1f\n",media_2);
			printf("%.1f",desvio);
			
		
		
		
		return 0;
	}
