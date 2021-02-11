#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a, b, c;
   scanf("%d %d %d", &a, &b, &c);
   if(a > b ){
    if (b> c){
        printf(" \n %d \n %d \n %d",c,b,a);
    }
   }
    if(a>c){
     if(c>b){
        printf("\n %d \n %d \n %d",b,c,a);
    }
  }
    if(b>a){
     if(a>c){
        printf("\n %d \n %d \n %d",c,a,b);

        }
    }
     if(b>c){
      if(c>a){
        printf("\n %d \n %d \n %d",a,c,b);

        }
    }
    if(c>a){
      if(a>b){
        printf("\n %d \n %d \n %d",b,a,c);

        }
    }
    if(c>b){
      if(b>a){
        printf("\n %d \n %d \n %d",a,b,c);

        }
    }

    return 0;
}