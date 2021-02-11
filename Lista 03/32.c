#include <stdio.h>

int main() {

	int T, i = 0, j,numero = 0, indice;
	double maior = 0;
	
		scanf("%d", &T);

	int tamanhoA[T], tamanhoB[T], anos[T];
	double taxaA[T], taxaB[T], D[i];
	
	for(i = 0; i < T; i++){	
	
		scanf("%d %d %lf %lf %lf", &tamanhoA[i], &tamanhoB[i], &taxaA[i], &taxaB[i], &D[i]);
		anos[i] = 0;
		
		while (tamanhoA[i] <= tamanhoB[i]){
			tamanhoA[i] = tamanhoA[i] +((int)tamanhoA[i] * taxaA[i]) / 100; 	
			tamanhoB[i] = tamanhoB[i] +((int)tamanhoB[i] * taxaB[i]) / 100;
			anos[i] += 1;
			
			if(D[i] > maior){
				maior = D[i];
				indice = i + 1;
			}
		}
		if (anos[i] > 100) {
			printf("Mais de 1 seculo.\n");
		}
		else{
			printf("%d anos.\n", anos[i]);
		}
	}
	
	printf("Maior distancia: %.1lf, par %d.\n\n", maior, indice); 
	
	for(i = 0; i <= T; i++){
		for(j = 0; j < i; j++){
			if(j % 2 == 0){
				printf("*");
			}
			else{
				printf("%d", ++numero);
			}
		}
		printf("\n");
	}
	
	return 0;
}
