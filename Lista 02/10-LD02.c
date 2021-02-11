#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    scanf("%d",&i);
    if (i < 5){
        printf("SEM CATEGORIA");
    }
    if (i >= 5){
        if ( i <= 7){
            printf("INFANTIL A");
        }
    }
    if ( i >= 8){
        if ( i <= 10){
            printf("INFANTIL B");
        }
    }
    if ( i >= 11){
        if (i <= 13){
            printf("JUVENIL A");
        }
    }
    if ( i >= 14){
        if (i <= 17){
            printf("JUVENIL B");
        }
    }
    if (i >18){
        printf("SENIOR");
    }

    return 0;
}
