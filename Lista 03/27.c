#include <stdio.h>
#include <math.h>

int main () {

    int i;
    double valorx[10] = {0}, valory[10] = {0}, calculo = 0, somatoriodexy = 0,calculofinal = 0, somatoriodex = 0,somatoriodeyelevado2 = 0, somatoriodey = 0,somatoriodex2 = 0, somatoriodexelevado2 = 0, somatoriodey2 = 0;
   // Entrada do X e Y
    for (i = 0; i < 10; i++){
        scanf("%lf %lf", &valorx[i], &valory[i]);
    }
    //Somatorio de Xi vezes Yi
    for (i = 0; i < 10; i++){
        calculo = valorx[i] * valory[i];
        somatoriodexy = somatoriodexy + calculo;
    }
    //Somatorio de X
    for (i = 0; i < 10; i++){
        calculo = valorx[i];
        somatoriodex = somatoriodex + calculo;
    }
    //Somatorio de y
    for (i = 0; i < 10; i++){
        calculo = valory[i];
        somatoriodey = somatoriodey + calculo;
    }
    //Somatorio de Xi ao quadrado
    for (i = 0; i < 10; i++){
        calculo = valorx[i] * valorx[i];
        somatoriodex2 = somatoriodex2 + calculo;
    }
    //Somatorio de Yi ao quadrado
    for (i = 0; i < 10; i++){
        calculo = valory[i] * valory[i];
        somatoriodey2 = somatoriodey2 + calculo;
    }
    // Somatorio de X elevado ao quadrado
        somatoriodexelevado2 = somatoriodex * somatoriodex;
    // Somatorio de Y elevado ao quadrado
        somatoriodeyelevado2 = somatoriodey * somatoriodey;

    //*****************************

    //Calculo

    // (somatorio de Xi . Yi) subtraido por (somatorio de x . somatorio de y) / 10
    // isso tudo dividido por:
    // (Raiz de (somatorio de Xi ao quadrado - somatorio de x elevado ao quadrado / 10) . (raiz de (somatorio de Yi ao quadrado - somatorio de Y elevado ao quadrado / 10))
    double calculonumerador = (somatoriodexy - ((somatoriodex * somatoriodey) / 10));
    double calculodenominador1 = (somatoriodex2 - (somatoriodexelevado2 / 10));
    double calculodenominador2 = (somatoriodey2 - (somatoriodeyelevado2 / 10));
    double raizdenominador = sqrt(calculodenominador1) * sqrt (calculodenominador2);

    calculofinal = calculonumerador / raizdenominador;

    printf("%.2lf\n", calculofinal);

    return 0;
}
