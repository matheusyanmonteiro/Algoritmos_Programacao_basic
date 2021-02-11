#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	int main (){

  	char part1[100] = {'\0'}, part2[100] = {'\0'}, palavra[200] = {'\0'};
  	int i = 0, j = 0 , k = 0;
  	
  	gets(part1);
  	gets(part2);
  	
  	
  	while ( 1 != 0){
  		if ( part1[j] != '\0' ){
  			palavra[i] = part1[j];
  			++i;
		}
		
		if ( part2[k] != '\0' ){
			palavra[i] = part2[k];
			++i;
		}
		
		if ( part1[j] == '\0' && part2[k] == '\0'){
		
		break;
	}
		++j;
		++k;
	  }
	
 	for (i = 0; i < strlen(palavra); i++){
        printf("%c", palavra[i]);
    }
	
		return 0;
	}
