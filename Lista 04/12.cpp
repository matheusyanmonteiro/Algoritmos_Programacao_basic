#include <stdio.h>
#include <stdlib.h>

	int main (){
		
		int x[10], y[10], xy[20], controle[10] {0}, vtcontrol[10] {0}, controle1[10] {0};
		int a, b;
		
	for	( a = 0; a < 10; a++ ){
		scanf( "%d", &x[a] );
	}
	
	for ( a = 0; a < 10; a++ ){
		scanf( "%d", &y[a] );
		xy[a] = x[a];
		xy[10 + a] = y[a];
	}
	
	for ( a = 0; a < 20; a++ ){
		for ( b = 0; b < 20; b++ ){
			if ( xy[a] == xy[b] && b < a )
			break;
			if ( a == b )
			printf( "%d ", xy[a] );
		}
		b = 0;
	}
				
				printf("\n");
				
	for ( a = 0; a < 10; a++ ){
		for ( b = 0; b < 10; b ++){
			if ( x[a] == x[b])
			vtcontrol[b] += 1;
			if ( x[a] == y[b])
			controle[a] += 1;
		}
		
		if ( controle[a] == 0 && vtcontrol[a] < 2 ) 
		printf("%d ",x[a]);
	}
	
				printf("\n");
				
	for ( a = 0; a < 10; a++ ){
		for ( b = 0; b < 10; b++ ){
		if ( x[a] == y[b])
		controle[a] += 1;
		}
		if (controle[a] > 0 ) 
		printf("%d ", x[a]);  
	}
		
		return 0;
	}
