#include <stdio.h>

int main () {

    int altura1, altura2, i=0;

    scanf("%d%d", &altura1, &altura2);

    while (i>=0) {

        if (altura1>altura2){
            altura1+=2;
            altura2+=3;
            i++;
        }
        else if (altura1<=altura2){
            break;
        }
    }
    printf("%d", i);

    return 0;
}
