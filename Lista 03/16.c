#include <stdio.h>

int main () {

    int idade=0, op=0, i=0, soma=0, otimo=0, bom=0, regular=0, ruim=0, pessimo=0;
    double media_idade=0, otimo2=0, bom2=0, regular2=0, ruim2=0, pessimo2=0;

    while (idade >= 0) {
        scanf("%d", &idade);

        if (idade >= 0){

            scanf("%d", &op);

            while(op<=0 || op>5) {
                scanf("%d", &op);
        }

        i++;
        soma+=idade;

            if (op==1) {
                otimo++;
            }
            else if (op==2){
                bom++;
            }
            else if (op==3){
                regular++;
            }
            else if (op==4){
                ruim++;
            }
            else if (op==5){
                pessimo++;
            }

        }

        else {
            break;
        }

    }

    otimo2=((double)otimo/i)*100;
    bom2=((double)bom/i)*100;
    regular2=((double)regular/i)*100;
    ruim2=((double)ruim/i)*100;
    pessimo2=((double)pessimo/i)*100;

    media_idade=(double)soma/i;

    printf("qtde de participantes: %d\nidade media dos participantes: %.1lf\nOtimo: %.1lf%%\nBom: %.1lf%%\nRegular: %.1lf%%\nRuim: %.1lf%%\nPessimo: %.1lf%%\n", i, media_idade, otimo2, bom2, regular2, ruim2, pessimo2);

    return 0;
}
