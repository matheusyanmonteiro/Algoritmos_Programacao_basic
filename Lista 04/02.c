#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero[300];
    int i;


    for (i = 0;  i < 300; i++){
        scanf("%d",&numero[i]);
        if (numero[i] <0)
            break;
    }


    for (i = i-1;  i >= 0 ; i--){
        printf("%d  ",numero[i]);
    }
    return 0;
}
