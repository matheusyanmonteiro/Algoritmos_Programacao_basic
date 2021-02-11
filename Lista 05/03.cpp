#include <stdio.h>
#include <stdlib.h>
#define MAX 9


void trocaDiagonal(int Ma[9][9]){
	int i,j,k;
	
	
	int temp[9],temp2[9];
	
	for( i = 0, k = 8; i < 9; i++,k-- ){
		for( j = 0; j < 9; j++){
			if( i == j){
				temp[k] = Ma[i][j];
			}
			if ( i + j == 8){
				temp2[k] = Ma[i][j];	
			}	
		}
	}
		
	for( i = 0, k = 8; i < 9; i++,k-- ){
		for( j = 0; j < 9; j++){
			if( i == j){
				Ma[i][j] = temp2[k];
			}
			if ( i + j == 8){
				Ma[i][j] = temp[k];
			}	
		}
	}	
}

int main()
{
  int M[MAX][MAX];
  int l, c;

  for(l=0;l<MAX;l++)
    for(c=0;c<MAX;c++)
       scanf("%d",&M[l][c]);

  trocaDiagonal(M);
  printf("\n");

  for(l=0;l<MAX;l++)
  {
    for(c=0;c<MAX;c++)
      printf("%d ",M[l][c]);
    printf("\n");
  }

  return 0;
}
