#include <stdio.h>
#include <stdlib.h>

int main()
{
       int i, h=1;
       int controle;
       scanf("%d",&controle);

       if (controle >= 0){

       for(i = 1; i <= controle; i++){
                 h *= i;

       }
       printf("%d",h);

       }else{
       printf("nao existe");
       }



    return 0;
}
