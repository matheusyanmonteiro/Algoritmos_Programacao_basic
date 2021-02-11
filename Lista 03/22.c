#include <stdio.h>

int main () {

    int cod, i, codmaior, codmenor;
    double valor, maior=-1, menor=9999999, maiorfinal, menorfinal;

    for( i = 1; i <= 10; i++ ){
        scanf( "%d %lf", &cod, &valor );

            if ( valor >= maior ){
                maior = valor;
                codmaior=cod;

            }
            if ( valor < menor ){
                menor = valor;
                codmenor=cod;
            }
    }

    if ( maior <= 5000 ) {
        maiorfinal = maior*0.015;
    }

    else if ( maior > 5000 && maior < 15000 ){
        maiorfinal = maior*0.035;
    }

    else if ( maior<=15000 ){
        maiorfinal = maior*0.047;
    }

    if ( menor <= 5000 ) {
        menorfinal = menor*0.015;
    }

    else if ( menor > 5000 && menor < 15000 ){
        menorfinal = menor*0.035;
    }

    else if ( menor <= 15000 ){
        menorfinal = menor*0.047;
    }

    printf("%d %.2lf %d %.2lf \n", codmaior, maiorfinal, codmenor, menorfinal);


    return 0;
}
