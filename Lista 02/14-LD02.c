#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ent, said, hrsaida, mnsaida, hrentrada, mnentrada, duracao, calculo;
    scanf("%d%d",&ent,&said);

    hrentrada = ent / 100;
    mnentrada = ent % 100;

    hrsaida = said / 100;
    mnsaida = said % 100;

    duracao = (hrsaida * 60 + mnsaida) - (hrentrada * 60 + mnentrada);

    if (duracao <= 15){
        printf("Entrada \n%02d:%02d \nSaida  \n%02d:%02d \nDuracao(min) \n%d \nPreco(centavos) \n 0",hrentrada,mnentrada,hrsaida,mnsaida,duracao);

        }else if(duracao <= 60){
            calculo = duracao * 30;
           printf("Entrada \n%02d:%02d \nSaida  \n%02d:%02d \nDuracao(min) \n%d \nPreco(centavos) \n %d",hrentrada,mnentrada,hrsaida,mnsaida,duracao,calculo);

        }else if(duracao <= 120){
            calculo = (duracao - 60)  * 20  + 1800;
           printf("Entrada \n%02d:%02d \nSaida  \n%02d:%2d \nDuracao(min) \n%d \nPreco(centavos) \n %d",hrentrada,mnentrada,hrsaida,mnsaida,duracao,calculo);

        }else if(duracao > 120){
            calculo = (duracao - 120) * 10 + 1800  + 1200;
           printf("Entrada \n%02d:%02d \nSaida  \n%02d:%02d \nDuracao(min) \n%d \nPreco(centavos) \n %d",hrentrada,mnentrada,hrsaida,mnsaida,duracao,calculo);
        }





    return 0;
}
