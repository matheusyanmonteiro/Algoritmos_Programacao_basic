#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


int main(){
    int i,numero,primo = 0 ,fibonacci = 0, a = 1, b =1, fibonacci2 = 0;

    do{
            scanf("%d",&numero);


    }while(numero<=0 || numero > 1000);

    for (i = 1; i <= numero; i++){
        fibonacci = a + b;
        a = b;
        b = fibonacci;
            if(numero == fibonacci){
                    fibonacci2 = 1;

            }
    }

    for(i = 1; i <= numero; i++){
            if (numero % i  == 0){
                primo++;
            }

    }


    if (primo == 2 && fibonacci2 == 1 )
        printf("SIM");
    else
        printf("NAO");



    return 0;
}



