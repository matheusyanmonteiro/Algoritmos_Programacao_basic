#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero[53];
    int numeros,soma = 0;
    int i,c =0,  limite;
    float media = 0, b =0;



    for (i = 0;  i < 53; i++){
            scanf("%d",&numero[i]);
    }
    scanf("%d",&limite);


    for (i = 0;  i < 53 ; i++){
            if (numero[i] <= limite){
                    b += 1;
                soma += numero[i];
                media = (float) (soma / b);
                //printf("%d - ",numero[i]);

            }
    }

    printf("%.1f",media);
    return 0;
}
