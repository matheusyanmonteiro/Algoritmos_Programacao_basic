#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero[135];
    int i, limite_inferior, limite_superior;


    for (i = 0;  i < 135; i++){
        scanf("%d",&numero[i]);

    }
    scanf("%d",&limite_inferior);
    scanf("%d",&limite_superior);

    if (limite_inferior < limite_superior){




    for (i = 0;  i < 135 ; i++){
            if ( numero[i] < limite_inferior || numero[i] > limite_superior ){
        printf("%d  ",numero[i]);
    }
    }
    }

    return 0;
}
