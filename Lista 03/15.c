#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(){
    int i,n,comodo = 0,larg,compri;
    scanf("%d",&n);

    for ( i = 1 ; i <= n ; i++ ){
      scanf("%d %d",&larg,&compri);
      comodo += larg * compri;

    }
    printf("%d",comodo);



    return 0;
}
