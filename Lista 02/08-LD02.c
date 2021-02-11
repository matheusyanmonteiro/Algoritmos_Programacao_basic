#include <stdio.h>
#include <stdlib.h>

int main(){
    double sm, credito;
   scanf("%lf",&sm);
    if (sm <= 500){
        credito = sm* 0;
        printf("%.2lf \n",credito);
    }
    if (sm > 500){
        if(sm <=1000){
            credito = sm * 0.3;
            printf("%.2lf \n",credito);
        }
    }
    if (sm > 1000){
        if (sm <= 3000){
            credito = sm * 0.4;
            printf("%.2lf \n",credito);
        }
    }
    if (sm > 3000) {
        credito = sm * 0.5;
        printf("%.2lf \n",credito);
    }


    return 0;
}

