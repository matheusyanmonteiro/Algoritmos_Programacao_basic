#include <stdio.h>
#include <stdlib.h>

int main(){
    int Q;
    double PR,
    calculo = 0 , totalfinal = 0;

    do{
        scanf("%d",&Q);

        if(Q<=0){
            break;
        }else{
            do{
            scanf("%lf",&PR);
            }while(PR <=0);
        }
        calculo = (double) Q * PR;
        totalfinal = (double)  totalfinal + calculo;

    }while(Q>0);
    printf("%.2lf",totalfinal);

    return 0;

}
