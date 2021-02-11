#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,f1, f2;
    float calculo = 0;
    scanf("%d %d",&f1,&f2);

    for(i = f1; i <= f2; i++){
        calculo = (float)( i - 32) * 5/9;
        printf("%d F : %.1f C\n",i,calculo);
    }

    return 0;
}
