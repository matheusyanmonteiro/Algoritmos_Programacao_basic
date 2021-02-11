//
//  main.c
//  APC_PraticaVetores
//
//  Created by Nilton Correia da Silva on 08/11/2018.
//  Copyright ? 2018 Nilton Correia da Silva. All rights reserved.
//

#include <stdio.h>
#define DIM 7

/* ####################  C?DIGOS A SEREM COMPLETADOS ################## */

/*
 COMPLETE O PROCEDIMENTO Diagonal ABAIXO.
 */

void Diagonal(int M[DIM][DIM])
{
    int i,j;
    int resgatadiagonal[DIM];
    int soma = 0, media = 0;

	for (i = 0; i < DIM; i++ ){
		for (j = 0; j < DIM; j++){
			if (i == j){
            resgatadiagonal[i] = M[i][j];
			}
		}
	}
    for (i = 0; i < DIM; i++){
        soma += resgatadiagonal[i];
    }
    media = soma / DIM;

    for (i = 0; i < DIM; i++ ){
		for (j = 0; j < DIM; j++){
			if (i == j){
                if ( resgatadiagonal[i] > media){
                    M[i][j] = 1;
                }else if ( resgatadiagonal [i] < media){
                    M[i][j] = 0;
                }
			}
		}
	}

}

/*
 COMPLETE O PROCEDIMENTO TS ABAIXO.
 */

void TS(int M[DIM][DIM])
{
    int i,j;
    int triangulo =0, media = 0 , contador = 0;
    for (i = 0; i < DIM; i++ ){
		for (j = i+1 ; j < DIM; j++){
			triangulo += M[i][j];
			contador +=1;
		}
	}

    media = triangulo / contador;

     for (i = 0; i < DIM; i++ ){
		for (j = i+1 ; j < DIM; j++){
			if (M[i][j]> media){
                M[i][j] = 1;
			}else if (M[i][j] < media){
                M[i][j] = 0;
			}
		}
	}

}


/*
 COMPLETE O PROCEDIMENTO TI ABAIXO.
 */

void TI(int M[DIM][DIM])
{


}

/* #############  FIM DE C?DIGOS A SEREM COMPLETADOS ################## */



/*
 N?O ALTERE A FUN??O MAIN.
 N?O ALTERE NENHUMA OUTRA PARTE DESTE ARQUIVO AL?M DOS PROCEDIMENTOS Diagonal,TS e TI ACIMA.
*/

int main()
{
    int Numbers[DIM][DIM];
    int l,c;

    /* Input the elements of Numbers*/
    printf("Informe os elementos da matriz:\n ");
    for(l=0; l<DIM; l++)
        for(c=0; c<DIM; c++)
            scanf("%d", &Numbers[l][c]);

    /*
       Atualizar a diagonal principal com 0s e 1s
    */
    Diagonal(Numbers);

    /*
     Atualizar o tri?ngulo superior com 0s e 1s
     */
    TS(Numbers);

    /*
     Atualizar o tri?ngulo inferior com 0s e 1s
     */
    TI(Numbers);

    /*
       Mostrar a matriz resultante
    */
    printf("Matriz Resultante:\n");
    for(l=0; l<DIM; l++){
        for(c=0; c<DIM; c++)
            printf("%d ", Numbers[l][c]);
        printf("\n");
    }

    return 0;
}