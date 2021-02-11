#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3;
    scanf("%d %d %d",&n1,&n2,&n3);
    double med = (double) (n1+n2+n3)/3;
    printf("%.1lf\n",med);

    return 0;
}
