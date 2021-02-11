#include <stdio.h>
#include <stdlib.h>

int main()
{
   double sala, newsala, cal;
   scanf("%lf",&sala);
   cal = (sala * 0.25);
   newsala = (sala + cal);
   printf("%.2lf \n",newsala);


    return 0;
}
