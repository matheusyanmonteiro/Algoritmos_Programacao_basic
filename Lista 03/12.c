#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, armazenamento = 0;

    do{
            scanf("%d",&numero);
            if ( numero < 0) {
                break;
            }else{
                    if (numero % 2 == 0){

                    printf("%d: par\n",numero);

                            }else{
                printf("%d: impar\n",numero);
            }
            }

    }while( numero >= 0);



    return 0;
}
