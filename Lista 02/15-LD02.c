#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char opcao;
    scanf("%c",&opcao);
    float num1, num2, num3;
    float soma,sub,mult,divi,mod,poten,raiz,bhask1,r1,r2;


        switch (opcao) {
    case '+':
    scanf("%f %f",&num1,&num2);
     soma = num1 + num2;
     printf("%.3f",soma);
    break;

    case '-':
    scanf("%f %f",&num1,&num2);
     sub = num1 - num2;
     printf("%.3f",sub);
    break;

    case '*':
    scanf("%f %f",&num1,&num2);
     mult = num1 * num2;
     printf("%.3f",mult);
    break;

    case '/':
    scanf("%f %f",&num1,&num2);
    if (num2 > 0){
            divi = num1 / num2;
     printf("%.3f",divi);
    } else {
    printf("ERROR!");
    }
    break;

     case '%':
    scanf("%f %f",&num1,&num2);

if ((num1 - (int)num1 == 0) && (num2 - (int)num2 == 0) && num2 !=0){

		mod = fmod(num1,num2);

		printf("%.3f\n", mod);}

		else if ((num2 == 0) || (num1 - (int)num1 != 0) || (num2 - (int)num2 != 0))
			printf("ERROR!\n");
    break;

     case 'r':
    scanf("%f",&num1);
    if (num1 > 0){
     raiz = sqrt(num1);
     printf("%.3f",raiz);
    }else {
    printf("ERROR! \n");}

    break;

       case 'p':
    scanf("%f %f",&num1, &num2);
   if (num1 < 0 && ((num2 - (int)num2 != 0)))
			printf("ERROR!\n");
		else if (num1 < 0 && ((num2 - (int)num2 == 0)))
			printf("%.3lf\n", pow(num1,num2));
		else
			printf("%.3lf\n", pow(num1,num2));
    break;

    case 'b':
    scanf("%f %f %f",&num1,&num2,&num3);
    if ((num1 == 0 || num2 == 0 || num3 == 0) || (num1 == 0 && num2 == 0 && num3 == 0)){
			printf("ERROR!\n");
			}

			else if( num1 != 0){
				bhask1 = (num2*num2) - (4 * num1 * num3);
				if (bhask1 < 0)
					printf("ERROR!\n");
				if (bhask1 == 0) {
					r1 = (-num2 + sqrt(bhask1)) / (2*num1);
					r2 = r1;
					printf("%.3lf %.3lf\n", r1, r2);}
				if (bhask1 > 0){
					r1 = (-num2 + sqrt(bhask1)) / (2*num1);
					r2 = (-num2 - sqrt(bhask1)) / (2*num1);
					printf("%.3lf\n%.3lf\n", r1 , r2);
				}
		}

    break;
        }

    return 0;
}