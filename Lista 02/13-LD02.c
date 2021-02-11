#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a, b;
   float c;

   scanf("%d %d", &a,&b);

   switch (a){

    case 1:
        switch (b){
            case 1:
                c = (float) ( 5 + 5);
                printf("Total: R$ %.2f \n",c);
            break;

            case 2:
                c = (float) ( 5 + 7);
                printf("Total: R$ %.2f \n",c);
            break;

            case 3:
                c = (float) ( 5 + 7.5);
                printf("Total: R$ %.2f \n",c);
            break;

            case 4:
                c = (float) ( 5 + 3.5);
                printf("Total: R$ %.2f \n",c);
            break;

            case 5:
                c = (float) ( 5 + 3);
                printf("Total: R$ %.2f \n",c);
            break;
    }
    break;

    case 2:
         switch (b){
            case 1:
                c = (float) ( 7 + 5);
                printf("Total: R$ %.2f \n",c);
            break;

            case 2:
                c = (float) ( 7 + 7);
                printf("Total: R$ %.2f \n",c);
            break;

            case 3:
                c = (float) ( 7 + 7.5);
                printf("Total: R$ %.2f \n",c);
            break;

            case 4:
                c = (float) ( 7 + 3.5);
                printf("Total: R$ %.2f \n",c);
            break;

            case 5:
                c = (float) ( 7 + 3);
                printf("Total: R$ %.2f \n",c);
            break;
    }
    break;

    case 3:
        switch (b){
            case 1:
                c = (float) ( 7.5 + 5);
                printf("Total: R$ %.2f \n",c);
            break;

            case 2:
                c = (float) ( 7.5 + 7);
                printf("Total: R$ %.2f \n",c);
            break;

            case 3:
                c = (float) ( 7.5 + 7.5);
                printf("Total: R$ %.2f \n",c);
            break;

            case 4:
                c = (float) ( 7.5 + 3.5);
                printf("Total: R$ %.2f \n",c);
            break;

            case 5:
                c = (float) ( 7.5 + 3);
                printf("Total: R$ %.2f \n",c);
            break;
    }
    break;

    case 4:
         switch (b){
            case 1:
                c = (float) ( 3.5 + 5);
                printf("Total: R$ %.2f \n",c);
            break;

            case 2:
                c = (float) ( 3.5 + 7);
                printf("Total: R$ %.2f \n",c);
            break;

            case 3:
                c = (float) ( 3.5 + 7.5);
                printf("Total: R$ %.2f \n",c);
            break;

            case 4:
                c = (float) ( 3.5 + 3.5);
                printf("Total: R$ %.2f \n",c);
            break;

            case 5:
                c = (float) ( 3.5 + 3);
                printf("Total: R$ %.2f \n",c);
            break;
    }
    break;

    case 5:
        switch (b){
            case 1:
                c = (float) ( 3 + 5);
                printf("Total: R$ %.2f \n",c);
            break;

            case 2:
                c = (float) ( 3 + 7);
                printf("Total: R$ %.2f \n",c);
            break;

            case 3:
                c = (float) ( 3 + 7.5);
                printf("Total: R$ %.2f \n",c);
            break;

            case 4:
                c = (float) ( 3 + 3.5);
                printf("Total: R$ %.2f \n",c);
            break;

            case 5:
                c = (float) ( 3 + 3);
                printf("Total: R$ %.2f \n",c);
            break;
    }
    break;

   default:
    printf("erro");
   }

    return 0;
}
