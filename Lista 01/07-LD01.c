#include <stdio.h>
#include <stdlib.h>

int main()
{
    double altura, raio,calculo;

        scanf("%lf %lf",&altura, &raio);

            calculo = ((raio * raio)*altura)*3.1416;

        printf("%.1lf \n",calculo);

    return 0;
}
