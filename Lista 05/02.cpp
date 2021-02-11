#include <stdio.h>
#include <stdlib.h>


void trocaValores(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	
}

int main(){
    int var1, var2;
    scanf("%d %d", &var1, &var2);
    trocaValores(&var1, &var2);
    printf("%d\n%d\n", var1, var2);
    return 0;
}
