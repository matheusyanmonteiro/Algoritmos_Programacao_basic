#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	int main (){
		char palavra[109] = {'\0'}, troca1 [109] = {'\0'}, troca2[109] = {'\0'},
		 troca3[109] = {'\0'}, troca4[109] = {'\0'}, troca5[109] = {'\0'};
		int i;
	
	gets(palavra);
	
	for (i = 0; i < strlen(palavra); i++){
		troca1[i] = palavra[i];
		troca2[i] = palavra[i];
		troca3[i] = palavra[i];
		troca4[i] = palavra[i];
		troca5[i] = palavra[i];
	}
	
	for (i = 0;  i < strlen(troca1); i++){
		if (troca1[i] == 'e' || troca1[i] ==  'E'){
			troca1[i] = 'a';
		}
		if (troca1[i] == 'i' || troca1[i] ==  'I' ){
			troca1[i] = 'a';
		}
		if (troca1[i] == 'o' || troca1[i] ==  'O' ){
			troca1[i] = 'a';
		}
		if (troca1[i] == 'u' || troca1[i] ==  'U' ){
			troca1[i] = 'a';
		}
	}
	
	for (i = 0;  i < strlen(troca2); i++){
		if (troca2[i] == 'a' || troca2[i] ==  'A'){
			troca2[i] = 'e';
		}
		if (troca2[i] == 'i' || troca2[i] ==  'I'){
			troca2[i] = 'e';
		}
		if (troca2[i] == 'o' || troca2[i] ==  'O'){
			troca2[i] = 'e';
		}
		if (troca2[i] == 'u' || troca2[i] ==  'U' ){
			troca2[i] = 'e';
		}
	}
	
		for (i = 0;  i < strlen(troca3); i++){
		if (troca3[i] == 'a' || troca3[i] ==  'A' ){
			troca3[i] = 'i';
		}
		if (troca3[i] == 'e' || troca3[i] ==  'E' ){
			troca3[i] = 'i';
		}
		if (troca3[i] == 'o' || troca3[i] ==  'O' ){
			troca3[i] = 'i';
		}
		if (troca3[i] == 'u' || troca3[i] ==  'U' ){
			troca3[i] = 'i';
		}
	}
	
	for (i = 0;  i < strlen(troca4); i++){
		if (troca4[i] == 'a' || troca4[i] == 'A' ){
			troca4[i] = 'o';
		}
		if (troca4[i] == 'e' || troca4[i] == 'E' ){
			troca4[i] = 'o';
		}
		if (troca4[i] == 'i' || troca4[i] == 'I' ){
			troca4[i] = 'o';
		}
		if (troca4[i] == 'u' || troca4[i] == 'U' ){
			troca4[i] = 'o';
		}
	}
	
	for (i = 0;  i < strlen(troca5); i++){
		if (troca5[i] == 'a' || troca5[i] ==  'A' ){
			troca5[i] = 'u';
		}
		if (troca5[i] == 'e' || troca5[i] ==  'E' ){
			troca5[i] = 'u';
		}
		if (troca5[i] == 'i' || troca5[i] ==  'I' ){
			troca5[i] = 'u';
		}
		if (troca5[i] == 'o' || troca5[i] ==  'O' ){
			troca5[i] = 'u';
		}
	}
	
	for (i = 0; i < strlen(troca1); i++){
		printf("%c",troca1[i]);
	}
			printf("\n");
			
	for (i = 0; i < strlen(troca2); i++){
		printf("%c",troca2[i]);
	}
	     	printf("\n");
	     	
	for (i = 0; i < strlen(troca3); i++){
		printf("%c",troca3[i]);
	}
			printf("\n");
			
	for (i = 0; i < strlen(troca4); i++){
		printf("%c",troca4[i]);
	}
			printf("\n");
			
	for (i = 0; i < strlen(troca5); i++){
		printf("%c",troca5[i]);
	}
	
	
		
		
	}
