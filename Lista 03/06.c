#include <stdio.h>
#include <stdlib.h>

int main()
{
  int numero, soma, totaln;
  float media;
  numero = 0;
  soma = 0;
  totaln = 0;
  media = 0;

  while(numero>=0){
        scanf("%d",&numero);
        if (numero>=0){
            soma = soma + numero;
            totaln = totaln + 1;
        }

  }
  media = (float) soma/totaln;
    printf("%d\n%.1f\n",soma,media);
    return 0;
}
