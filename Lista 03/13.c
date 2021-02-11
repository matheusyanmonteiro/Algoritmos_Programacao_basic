#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(){
    int i, tabuada = 0, n;
    scanf("%d",&n);

    for ( i = 1 ; i <= 10 ; i++ ){
        tabuada = n*i;
        printf("%dx%d=%d\n",n,i,tabuada);
    }


    return 0;
}
