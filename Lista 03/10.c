#include <stdio.h>
#include <stdlib.h>

int main(){
    int salario, calculototal = 0, calculodiferenca = 0, totalnumero = 0, totalsalario = 0;

    do{
            scanf("%d",&salario);
            if( salario <= 0 ){
                break;
            }else if(salario <500){
                    calculototal = salario + 100;

            }else if ( salario <=1000 ){
                calculototal = salario + 75;
            }else if ( salario > 1000){
                calculototal = salario + 50;
            }

            totalsalario += salario;
            totalnumero  +=  calculototal;
            calculodiferenca = totalnumero - totalsalario;

    }while(salario > 0);
    printf("%d\n%d",totalnumero,calculodiferenca);


    return 0;

}

