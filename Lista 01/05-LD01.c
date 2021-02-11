#include <stdio.h>
#include <stdlib.h>

int main()
{
 double salario, grat, imp, salareal;
    scanf("%lf",&salario);
        grat = (salario *0.05 );
        imp = salario * 0.07;
        salareal = salario + grat - imp;
    printf("%.2lf \n",salareal);



    return 0;
}