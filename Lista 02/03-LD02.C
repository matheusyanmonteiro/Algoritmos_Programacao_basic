#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);
    if ( a % 3 == 0 , a % 7 == 0){
        printf("MULTIPLO");
    }else {
        printf("NAO E MULTIPLO");
    }

    return 0;
}
