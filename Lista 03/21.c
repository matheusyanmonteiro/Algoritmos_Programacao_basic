#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(){
    int nvt, i,tv = 0, penalidade = 0, tempototal = 0,
    menor =  214783647, maior = -1,voltarapida = 0,voltalenta = 0;

    scanf("%d",&nvt);

       for (i = 1 ; i <= nvt; i++){
        do{

            scanf("%d",&tv );
            if (tv == -1){
                scanf("%d",&tv ) ;
                tv +=10;
           }
            if (tv == -2){
                scanf("%d",&tv ) ;
                tv +=25;
           }
            if (tv == -3){
                scanf("%d",&tv ) ;
                tv +=40;
           }
        }while( tv <= 0);

        if (tv >= maior){
            maior = tv;
            voltalenta = i;
        }
        if (tv < menor ){
            menor = tv;
            voltarapida = i;
        }

        tempototal +=  tv;

    }

    printf("Melhor volta: %d - %d seg\nPior volta:  %d - %d seg\n",voltarapida,menor,voltalenta,maior);
    printf("Tempo total: %d seg\n",tempototal);
    return 0;
}

