#include <stdio.h>

int main () {

   long int a,b,c;//variaveis de contadores.
   long int fatorial, numero, teste, contadorzero;//variaveis.

   fatorial = 1;
   teste = 0;
   contadorzero = 0;

   do{
    scanf("%ld",&numero);//do while para entrada de dados positivos.
   }while(numero <= 0);

   for (a = 1; a <= numero; a ++){
        fatorial *= a; //for para fazer um numero fatorial, o calculo é  uma vareavel 1 x o contador que no caso é a, sendo que essa vareavel sempre vai armazenar o resultado e multiplicar pelo proximo numero
   }

   for (b = 2; b <= fatorial; b ++){ //for para fazer a contagem dos numeros  de 2 ao resultado fatorial.
        for (c = 2; c <= b; c ++){ // for para dividir o contador pelo outro
            if (fatorial == 2 && c == 2){ // se o resultado fatorial for 2 e contador de divisão for 2 também  ele mostrarar na tela nenhum primo.
                printf("NENHUM PRIMO \n");
                teste +=1 ;//varevel para não zerar e aparecer 2 nenhum primo no final
                break;
            }
            if (b % c == 0){ // se o resto da divisão do contador B por C for igual a zero ele quebrarar a repetição C.
                break;
            }
        }
        if (b == c && teste == 0 ){ //se  contador b é igual ao contador C e o teste for zero ele printarar na tela todos os numeros primos
            printf("%ld ",b);
            contadorzero += 1; // vareavel para não zerar e aparecer 1 nenhum primo depois dos resultados
        }
   }
   if (contadorzero == 0 && teste == 0){
    printf("NENHUM PRIMO \n"); // condição de teste caso coloque um numero invalido
   }

    return 0;
}
