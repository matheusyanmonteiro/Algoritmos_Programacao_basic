#include <stdio.h>
char *extraiSobrenome(char *nome){
	
	int i;
	char *sobrenome;
	
	 for (i = 0; i < 30; i++){
		if ( *nome == '_'){
			 *nome = '\0';
			 sobrenome = nome + 1 ;
		}
		++nome;
	}
	
	
	return sobrenome;	
}

int main(){
    char nome[30];
    char * sobrenome;
    scanf("%s", nome);
    sobrenome = extraiSobrenome(nome);
    printf("Nome\n%s\nSobrenome\n%s\n",nome, sobrenome );
    return 0;
}
