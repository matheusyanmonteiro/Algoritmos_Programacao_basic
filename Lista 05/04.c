#include <stdio.h>

struct informacoes {
    char nome[50];
    int idade;
};

int main(){

    int n, i, j;

    do {
        scanf("%d", &n);
    } while (n < 1 || n > 1000);

    struct informacoes cliente[5];
    struct informacoes temporario;

    for (i = 0; i < n; i++){
        scanf("%s %d", cliente[i].nome, &cliente[i].idade);
    }

    for (i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){
            if (cliente[i].idade < cliente[j].idade){
                temporario = cliente[i];
                cliente[i] = cliente[j];
                cliente[j] = temporario;
            }
        }
    }

    for (i = 0; i < n; i++){
        printf("%s\n", cliente[i].nome);
    }

    return 0;
}