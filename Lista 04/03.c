#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero[300];
    int i, limite;


    for (i = 0;  i < 150; i++){
        scanf("%d",&numero[i]);

    }
    scanf("%d",&limite);


    for (i = 0;  i < 150 ; i++){
            if ( numero[i] < limite){
        printf("%d  ",numero[i]);
    }
    }
    return 0;
}
