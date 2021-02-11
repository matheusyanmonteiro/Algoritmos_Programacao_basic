#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero[200];
    int i;

    for (i = 0;  i < 200; i++){
        scanf("%d",&numero[i]);
    }


    for (i = 199;  i >= 0 ; i--){
        printf("%d  ",numero[i]);
    }
    return 0;
}
