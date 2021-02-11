#include <stdio.h>
#include <stdlib.h>

int main()
{
    double dpst, juro, imp;
    float rendimento, imposto, juros;

        scanf("%lf %lf %lf",&dpst,&juro,&imp);

            juros = (float)(dpst * (juro/100));
                imposto = (float) (juros * (imp/100));
                    rendimento = (float) dpst + (juros - imposto);

            printf(" %.2f",imposto);
        printf(" %.2f", rendimento);

    return 0;
}
