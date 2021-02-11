#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int i = 0, n , valor, maior = 0 , menor = 0;

    scanf("%d",&n);
               maior = -1 ;
              menor =    214783647;

        for (i = 0 ; i < n; i++){
              /* maior = i;
               menor = i;*/
               scanf("%d",&valor);
           /* if(i==0){
                maior = valor;
                menor = valor;
            }*/

            if (valor >= maior)
                maior = valor;
            if (valor < menor)
                menor = valor;

        }

    printf("Menor: %d\nMaior: %d\n",menor,maior);
    return 0;
}

