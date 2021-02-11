#include <stdio.h>

int main () {

    int voltas=1, i=0, maior=-1, menor=9999999, total=0, melhor, pior, k=0;

    while (voltas!=0) {

        scanf("%d", &voltas);

        if (voltas!=0){

        if (voltas < 0){

            k=-voltas;

            while (voltas<0){

                scanf("%d", &voltas);
            }
        }

        voltas+=k;
        total += voltas;
        i++;

            if (voltas >= maior){
                maior = voltas;
                pior = i;
            }
            if (voltas < menor ){
                menor = voltas;
                melhor = i;
            }

        }

        k=0;
    }

    printf("Melhor volta: %d - %d seg\nPior volta:  %d - %d seg\nTempo total: %d seg\n",melhor,menor,pior,maior,total);

    return 0;
    }
