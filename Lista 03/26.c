#include <stdio.h>

int main() {

    int i;
    double depositomensal[12], totaldepositado = 0, rendimentomensal = 0, rendimentototal = 0;

    for (i = 0; i < 12; i++){
        scanf("%lf", &depositomensal[i]);
        totaldepositado = totaldepositado + depositomensal[i];

        if (totaldepositado < 10000){
            rendimentomensal = (totaldepositado * 1.75) / 100;
        }
        else if (totaldepositado >= 10000){
            rendimentomensal = (totaldepositado * 2.25) / 100;
        }
        totaldepositado = totaldepositado + rendimentomensal;
        rendimentototal = rendimentototal + rendimentomensal;
    }

    printf("%.2lf\n", rendimentototal);

    return 0;
}
