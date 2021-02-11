#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T,CONTROL;
    float D,TJ;
    float calculo,C1,C2;
    scanf("%f %f %d",&D,&TJ,&CONTROL);

    for(T = 0; T < CONTROL; T++){
            calculo = (D * (TJ/100));
            D += calculo;

    printf("Rendimento no mes %d: %.2f\n",T,calculo);
    }
    printf("Saldo final do investimento: %.2f",D);



    return 0;
}

