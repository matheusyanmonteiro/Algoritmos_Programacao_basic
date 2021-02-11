#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numero, inverso;
   scanf("%d", &numero);

   if (numero >= 0) {
    do {
        inverso = numero % 10;
        numero /= 10;
         printf("%d",inverso,"\n");
    }while (numero != 0);

   }else if (numero < 0){

    numero = numero * -1;

    printf("-");

     do {
        inverso = numero % 10;
        numero /= 10;
         printf("%d",inverso,"\n");
    }while (numero != 0);

   }

    return 0;
}
