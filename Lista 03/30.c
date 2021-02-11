#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
    int numero,base, dec = 0, i, junkiman = 0;
    scanf("%d", &numero);


    do{
       scanf("%d", &base);
    }while(base <= 0 || base >= 10);


    if (base == 2 ){

    for(i = 0; numero > 0; i++)
    {

        if(numero%10>=base){
            printf("ERROR");
            junkiman = junkiman +1;
            break;
        }else{
        dec = dec + pow(2, i) * (numero % 10);
        numero = numero / 10;

        }

    }
    if (junkiman == 0)
        printf("%d\n", dec);

    }



    //base 3
  if (base == 3 ){

    for(i = 0; numero > 0; i++)
    {

        if(numero%10>=base){
            printf("ERROR");
            junkiman = junkiman +1;
            break;
        }else{
        dec = dec + pow(3, i) * (numero % 10);
        numero = numero / 10;

        }

    }
    if (junkiman == 0)
        printf("%d\n", dec);

    }
    //base 4
   if (base == 4 ){

    for(i = 0; numero > 0; i++)
    {

        if(numero%10>=base){
            printf("ERROR");
            junkiman = junkiman +1;
            break;
        }else{
        dec = dec + pow(4, i) * (numero % 10);
        numero = numero / 10;

        }

    }
    if (junkiman == 0)
        printf("%d\n", dec);

    }

    //base 5
    if (base == 5 ){

    for(i = 0; numero > 0; i++)
    {

        if(numero%10>=base){
            printf("ERROR");
            junkiman = junkiman +1;
            break;
        }else{
        dec = dec + pow(5, i) * (numero % 10);
        numero = numero / 10;

        }

    }
    if (junkiman == 0)
        printf("%d\n", dec);

    }

    //base 6
   if (base == 6 ){

    for(i = 0; numero > 0; i++)
    {

        if(numero%10>=base){
            printf("ERROR");
            junkiman = junkiman +1;
            break;
        }else{
        dec = dec + pow(6, i) * (numero % 10);
        numero = numero / 10;

        }

    }
    if (junkiman == 0)
        printf("%d\n", dec);

    }

    //base 7
   if (base == 7 ){

    for(i = 0; numero > 0; i++)
    {

        if(numero%10>=base){
            printf("ERROR");
            junkiman = junkiman +1;
            break;
        }else{
        dec = dec + pow(7, i) * (numero % 10);
        numero = numero / 10;

        }

    }
    if (junkiman == 0)
        printf("%d\n", dec);

    }

    //base 8
    if (base == 8 ){

    for(i = 0; numero > 0; i++)
    {

        if(numero%10>=base){
            printf("ERROR");
            junkiman = junkiman +1;
            break;
        }else{
        dec = dec + pow(8, i) * (numero % 10);
        numero = numero / 10;

        }

    }
    if (junkiman == 0)
        printf("%d\n", dec);

    }

  //base 9
   if (base == 9 ){

    for(i = 0; numero > 0; i++)
    {

        if(numero%10>=base){
            printf("ERROR");
            junkiman = junkiman +1;
            break;
        }else{
        dec = dec + pow(9, i) * (numero % 10);
        numero = numero / 10;

        }

    }
    if (junkiman == 0)
        printf("%d\n", dec);

    }

    return 0;

}
