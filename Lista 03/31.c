#include <stdio.h>

int main() {

	int T, i = 0;
		
	//Entrada de valores
	do{
		scanf("%d", &T);
	} while (1 > T && T > 3000);
	
	int populacaoA[T], populacaoB[T], anos[T];
	double taxaA[T], taxaB[T];
	
	for(i = 0; i < T; i++){	
	
		scanf("%d %d %lf %lf", &populacaoA[i], &populacaoB[i], &taxaA[i], &taxaB[i]);
		
		anos[i] = 0;
		
		while (populacaoA[i] < populacaoB[i]){
			populacaoA[i] = populacaoA[i] +((int)populacaoA[i] * taxaA[i]) / 100; 	
			populacaoB[i] = populacaoB[i] +((int)populacaoB[i] * taxaB[i]) / 100;
			anos[i] += 1;
		}
		
		if (anos[i] > 100) {
			printf("Mais de 1 seculo.\n");
		}
		else{
			printf("%d anos.\n", anos[i]);
		}
	}	
	return 0;
}
