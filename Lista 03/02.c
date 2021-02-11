#include <stdio.h>
#include <stdlib.h>

int main()
{
       int i, nh=1, soma=0;

       for(i = 0; i < 30; i++){
        scanf("%d",&nh);
        soma +=nh;
       }
       printf("%d",soma);


    return 0;
}
