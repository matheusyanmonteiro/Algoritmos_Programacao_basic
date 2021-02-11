#include <stdio.h>
#include <stdlib.h>

int main()
{
       int i;
    float peso = 1;
    float soma = 0;

    for ( i = 0; i < 25; i++){
        scanf("%f",&peso);
        soma +=peso;
    }

    printf("%.1f\n",soma);


    return 0;
}
