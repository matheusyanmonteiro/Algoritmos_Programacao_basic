#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;
    float med;
    scanf("%d %d", &n1, &n2);
    med = (float) (n1+n2)/2;
    if (med >= 7){
        printf("APROVADO");
    }
    if (med  <= 3 ){
        printf("REPROVADO");
    }
    if (med <=6){
        if (med >=4){
            printf("EXAME");
        }
    }

    return 0;
}