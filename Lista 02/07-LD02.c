#include <stdio.h>
#include <stdlib.h>

int main()
{
  float peso,altura,imc;
  scanf("%f %f",&peso,&altura);

    imc = peso / (altura*altura);

  if (imc < 20){
    printf("ABAIXO");
  }
  if (imc >= 20){
    if(imc < 25){
        printf("NORMAL");
    }
  }
  if (imc >=25){
    if(imc < 30){
        printf("SOBREPESO");
    }
  }
  if (imc >= 30){
   if(imc<40){
    printf("OBESO");
   }
  }
  if (imc >=40){
    printf("MORBIDO");
  }
    return 0;
}