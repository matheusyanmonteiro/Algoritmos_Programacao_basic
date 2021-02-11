#include <stdio.h>

int main () {

    long int num, i, a=2, b=7, c=3, soma=12;

    scanf("%li", &num);

        if ( num % 3 == 0 ) {

            if ( num == 3 ){
                printf("%li", soma);
            }

            if ( num > 3 ) {
                for (i=1; i<(num/3); i++){
                    a=a*2;
                    b=b*3;
                    c=c*4;

                    soma=soma+(a+b+c);

                }
                printf("%li", soma);
            }

        } else {
            printf("SEM SOMA");
        }

    return 0;
}
