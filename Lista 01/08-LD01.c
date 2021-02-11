#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int numero;
    float quad, cub, rquad, rcub;
    scanf("%d",&numero);

            quad = (float) pow(numero,2);
                cub = (float)  pow(numero,3);
                    rquad = (float) sqrt(numero);
                        rcub = (float) cbrt(numero);

            printf(" %.1f",quad);
        printf(" %.1f",cub);
    printf(" %.1f",rquad);
printf(" %.1f",rcub);

    return 0;
}
