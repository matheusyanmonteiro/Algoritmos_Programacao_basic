#include <stdio.h>
#include <stdlib.h>

int main()
{
   int id;
   scanf("%d",&id);
   if (id <16){
    printf("NAO ELEITOR");
   }
    if (id >=16){
     if(id < 18 ){
      printf("FACULTATIVO");
     }
    }
     if (id >=18){
     if(id < 65 ){
      printf("OBRIGATORIO");
     }
    }
    if (id >=65){
    printf("FACULTATIVO");
    }

    return 0;
}