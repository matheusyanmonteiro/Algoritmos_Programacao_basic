#include <stdio.h>

int main () {

    double resis, i=6, maior=-1, r=0, media, dif;

        while (i!=0) {

            scanf("%lf", &resis);

            r+=resis;

            media=r/6;

                if ( resis >= maior ){
                    maior = resis;
                }
            dif=maior-media;

            i-=1;
        }

    printf("%.4lf %.4lf %.4lf \n", r, (1/r), dif);

    return 0;
}
