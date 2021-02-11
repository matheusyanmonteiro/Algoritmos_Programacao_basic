#include <stdio.h>

//é permitido criar funções auxiliares, desde que não se altere nenhuma linha do método main

int conferir_contagem(int *my_hand){
	//escreva seu código aqui
	int i,j,aux[5],n=0;
	for(i=0;i<5;i++){
	    for(j=i+1;j<5;j++){
           if(my_hand[i]>my_hand[j]){
                n++;
           }
	    }
	}
	if(n==0){
        return 1;
	}
	return 0;
}

void corrigir_contagem(int *my_hand){
	//escreva seu código aqui
	int i,j,aux[5];
	for(i=0;i<5;i++){
	    for(j=i+1;j<5;j++){
           if(my_hand[i]>my_hand[j]){
                aux[i]=my_hand[i];
                my_hand[i]=my_hand[j];
                my_hand[j]=aux[i];
           }
	    }
	}


}

int main(){
	int i, mao[5];
	for(i=0; i<5; ++i)
		scanf("%d", &mao[i]);

	if(conferir_contagem(mao))printf("Contagem Correta\n");
	else{
		printf("Contagem Incorreta\n");
		printf("Sequencia certa: ");
		corrigir_contagem(mao);
		for(i=0; i<5; ++i)
			printf("%d%c", mao[i], ((i==4)? '\n' : ' '));
	}

 return 0;
}
