#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double x,fx;
    scanf("%lf",&x);

    if (x <=1){
        printf("1.0");
    }
    if (x > 1){
        if (x <= 2){
            printf("2.0");
        }
    }
    if (x > 2){
        if (x <= 3){
            fx = pow(x,2);
            printf("%.1lf \n",fx);
        }
    }
     if (x > 3){
            fx = pow(x,3);
            printf("%.1lf \n",fx);

    }




    return 0;
}

