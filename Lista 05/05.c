#include <stdio.h>
#include <stdlib.h>
struct Tbrinquedos{
    char nome[100];

};
void trocaBrinquedos(struct Tbrinquedos Brinq[],int n){
    int i,j,l,m;
    scanf("%d",&m);
    struct Tbrinquedos temp[n];
    for(i=0;i<m;i++){
        scanf("%d%d",&l,&j);
        temp[l]=Brinq[l];
        Brinq[l]=Brinq[j];
        Brinq[j]=temp[l];

    }

}

int main()
{
    int n,i;

    scanf("%d",&n);

    struct Tbrinquedos brinquedos[n];

    for(i=0;i<n;i++){
        scanf(" %[^\n]s",brinquedos[i].nome);
    }
    trocaBrinquedos(brinquedos,n);

    for(i=0;i<n;i++){
        printf("%s\n",brinquedos[i].nome);
    }



    return 0;
}
