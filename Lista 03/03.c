#include <stdio.h>
#include <stdlib.h>

int main()
{
       int i, h=0;
       int controle;
       scanf("%d",&controle);

       for(i = 1; i <= controle; i++){
        h += i;
       }
       printf("%d",h);



    return 0;
}
