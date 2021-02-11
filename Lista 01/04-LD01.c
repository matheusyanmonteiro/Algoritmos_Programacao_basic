#include <stdio.h>
#include <stdlib.h>

int main()
{
 double sala,pcl,novosala,aument;
    scanf("%lf %lf",&sala,&pcl);
        aument = sala * (pcl/100);
        novosala = aument + sala;
    printf("%.2lf",aument);
    printf(" %.2lf",novosala);


    return 0;
}
