#include <stdio.h>

int main () {

    int dias_excedentes;
    int resultado[3] = {0,0,0};
    int atual[3] = {0,0,0};
    int nascimento[3] = {0,0,0};

            scanf("%d", &nascimento[0]);
        while (nascimento[0]<0 || nascimento[0]>30) {
           scanf("%d", &nascimento[0]);
        }
            scanf("%d", &nascimento[1]);
        while (nascimento[1]<0 || nascimento[1]>12) {
           scanf("%d", &nascimento[1]);
        }
            scanf("%d", &nascimento[2]);
        while (nascimento[2]<0 || nascimento[2]>2020) {
           scanf("%d", &nascimento[2]);
        }

            scanf("%d", &atual[0]);
        while (atual[0]<0 || atual[0]>30) {
           scanf("%d", &atual[0]);
        }
            scanf("%d", &atual[1]);
        while (atual[1]<0 || atual[1]>12) {
           scanf("%d", &atual[1]);
        }
            scanf("%d", &atual[2]);
        while (atual[2]<0 || atual[2]>2020 || atual[2]<=nascimento[2]) {
           scanf("%d", &atual[2]);
        }

        resultado[0] = nascimento[0] + (nascimento[1] * 30) + (nascimento[2]*360);
        resultado[1] = atual[0] + (atual[1] * 30) + (atual[2] * 360);
        resultado[2] = resultado[1] - resultado[0];

        printf("%d\n", resultado[2]);


    return 0;

}
