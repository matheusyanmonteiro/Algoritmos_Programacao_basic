#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(){
    int i, entradas, valores, maior = -1;
    scanf("%d",&entradas);

    for (i = 1; i <= entradas; i++){
        scanf("%d",&valores);
        if (valores > maior){
            maior = valores;

                /*    if (maior < 10){
                        printf("1");
                    }else if (maior <=20){
                        printf("2");
                    }else if (maior > 20){
                        printf("3");
                    }*/
        }

    }
       if (maior < 10){
                        printf("1");
                    }else if (maior <=20){
                        printf("2");
                    }else if (maior > 20){
                        printf("3");
                    }
    return 0;
}
