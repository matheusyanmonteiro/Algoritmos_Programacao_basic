#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero[106];
    int numeros,soma = 0;
    int i,c =0, limite;



    for (i = 0;  i < 106; i++){
            scanf("%d",&numeros);
    if(numeros > 0){
        numero[i] = numeros;
        c = c +1 ;}
    else
        break;
    }
    scanf("%d",&limite);


    for (i = 0;  i < c ; i++){
            if (numero[i] <= limite){
                soma += numero[i];
                //printf("%d ",numero[i]);
            }
    }

    printf("%d",soma);
    return 0;
}
