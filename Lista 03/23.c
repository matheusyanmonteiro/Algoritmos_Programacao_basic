#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(){
   double compra, venda, resultado = 0, conta1 = 0,conta2 = 0, conta3 = 0, dinheiro = 50000,totalcompra = 0, totalvenda = 0;
   int i, armazenalucro = 0, armazenaprejuiso = 0;

   for(i = 1; i <=6; i ++){
        do{
                scanf("%lf",&compra);

        }while(compra <=0 || compra > dinheiro);

                scanf("%lf",&venda);


            if (venda > compra ){

                    armazenalucro++;

            }else if ( compra > venda ){

                    armazenaprejuiso++;
            }

            totalcompra +=compra;
            totalvenda  += venda;

            conta1 =   (dinheiro - totalcompra) + totalvenda ;
            conta2 = conta1 - dinheiro;
            conta3 = (conta2 / dinheiro ) * 100;

    }

        printf("%.2lf %d %d\n",conta3,armazenalucro,armazenaprejuiso);
    return 0;
}



