#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero[87];
    int numeros;
    int i,c =0, limite;



    for (i = 0;  i < 87; i++){
            scanf("%d",&numeros);
    if(numeros > 0){
        numero[i] = numeros;
        c = c +1 ;}
    else
        break;
    }
    scanf("%d",&limite);


    for (i = 0;  i < c ; i++){
            if (numero[i] > limite)
        printf("%d  ",numero[i]);

    }
    return 0;
}
