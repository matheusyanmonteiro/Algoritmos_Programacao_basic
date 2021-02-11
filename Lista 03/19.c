#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int i = 0,  valor, maior = 0 , menor = 0;


               maior = -1 ;
              menor =    214783647;

        for (i = 0 ; i < 20; i++){

               scanf("%d",&valor);


            if (valor >= maior)
                maior = valor;
            if (valor < menor)
                menor = valor;

        }

    printf("Menor: %d\nMaior: %d\n",menor,maior);
    return 0;
}

