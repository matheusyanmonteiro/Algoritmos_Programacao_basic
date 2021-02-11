
 int extraiSobrenome(char nome[]){
   int i;
   for(i=0;nome[i]!='_';i++){}
   nome[i]='\0';
   i++;
   return &nome[i];
 }

int main(){
    char nome[30];
    char * sobrenome;
    scanf("%s", nome);
    sobrenome = extraiSobrenome(nome);
    printf("Nome\n%s\nSobrenome\n%s\n",nome, sobrenome );
    return 0;
}
[2/12 16:54] Matheus Afonso: 1
[2/12 16:54] Matheus Afonso: #include <stdio.h>

void trocaValores(int *prt1,int *prt2){
  int aux;
  aux=*prt1;
  *prt1=*prt2;
  *prt2=aux;
}

int main(){
    int var1, var2;
    scanf("%d %d", &var1, &var2);
    trocaValores(&var1, &var2);
    printf("%d\n%d\n", var1, var2);
    return 0;
}
[2/12 16:54] Matheus Afonso: 2
[2/12 16:54] Matheus Afonso: 3
[2/12 16:54] Matheus Afonso: #include <stdio.h>
#include <stdlib.h>
#define MAX 9

void trocaDiagonal(int m[][MAX]){
  int i,j,aux[MAX];
  for(i=0;i<MAX;i++){
    aux[i]=m[i][i];
  }
  for(i=0;i<MAX;i++){
    for(j=8;j>=0;j--){
      if((j+i)==8){
        m[i][i]=m[i][j];
      }
    }
  }
  for(i=0;i<MAX;i++){
    for(j=8;j>=0;j--){
      if((j+i)==8){
      m[i][j]=aux[i];
    }
  }
  }
}

int main()
{
  int M[MAX][MAX];
  int l, c;

  for(l=0;l<MAX;l++)
    for(c=0;c<MAX;c++)
       scanf("%d",&M[l][c]);

  trocaDiagonal(M);
  printf("\n");

  for(l=0;l<MAX;l++)
  {
    for(c=0;c<MAX;c++)
      printf("%d ",M[l][c]);
    printf("\n");
  }

  return 0;
}
[2/12 16:54] Matheus Afonso: 4
[2/12 16:54] Matheus Afonso: #include <stdio.h>

struct pessoa{
	int age;
	char name[20];
};

int main(){
	int n,i;
	struct pessoa p[1003];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %d",p[i].name,&p[i].age);
	}

	int ordenei = 1;
	while(ordenei){
		ordenei = 0;
		for(i = 0;i < n;i++){
			if( i+1 < n ){
				if( p[i+1].age < p[i].age ){
					struct pessoa tmp = p[i+1];
					p[i+1] = p[i];
					p[i] = tmp;

					ordenei = 1;
				}
			}
		}
	}
	for(i=n-1;i>=0;i--){
		printf("%s\n",p[i].name);
	}
	return 0;
}
[2/12 16:54] Matheus Afonso: 5
[2/12 16:54] Matheus Afonso: #include <stdio.h>

typedef struct house{
    char toy[20];
}thouse;

int main(){
    int n,x,i,j,m;
    scanf("%d",&n);
    thouse houses[n];
    for(x=0;x<n;x++){
        scanf("%s",houses[x].toy);
    }
    scanf("%d",&m);
    for(x=0;x<m;x++){
        scanf("%d%d",&j,&i);
        thouse aux;
        aux=houses[j];
        houses[j]=houses[i];
        houses[i]=aux;
    }
    for(x=0;x<n;x++){
        printf("%s\n",houses[x].toy);
    }
    return 0;
}
[2/12 16:55] Matheus Afonso: 6
[2/12 16:55] Matheus Afonso: #include <stdio.h>

struct bilhete{
	int horarioEntrada,horarioSaida,minEntrada,minSaida,horaSaida,horaEntrada,preco;
};

void extrairHoraMin(struct bilhete *t){
	t->horaEntrada=t->horarioEntrada/100;
	t->horaSaida=t->horarioSaida/100;
	t->minSaida=t->horarioSaida%100;
	t->minEntrada=t->horarioEntrada%100;
}

int obterIntervalo(struct bilhete t){
	int total;
	total=((t.horaSaida)-(t.horaEntrada))*60-((t.minEntrada)-(t.minSaida));
	return total;
}

int obterValorEstacionamento(int t){
	int total;
	if(t<=15){
		return 0;
	}
	else{
		if(t<=60){
			total=t*30;
		}
		else if(t<=120){
			total=(60*30)+((t-60)*20);
		}
		else if(t>120){
			total=(60*30)+(60*20)+(t-120)*10;
		}
	}
	return total;
}

int main()
{
    struct bilhete bilhetes[100];
    int contaCentavos, intervalo, receita=0;
    int contadorCarros=0, i, total=0;

    scanf("%d", &bilhetes[contadorCarros].horarioEntrada);
    while (bilhetes[contadorCarros].horarioEntrada>=0)
    {
        do
        {
            scanf("%d", &bilhetes[contadorCarros].horarioSaida);
        }
        while(bilhetes[contadorCarros].horarioSaida < bilhetes[contadorCarros].horarioEntrada);

        extrairHoraMin(&bilhetes[contadorCarros]);
        intervalo = obterIntervalo(bilhetes[contadorCarros]);
        contaCentavos = obterValorEstacionamento(intervalo);
        bilhetes[contadorCarros].preco = contaCentavos;
        printf("Entrada\n%02d:%02d\nSaida\n%02d:%02d\nDuracao(min)\n%d\nPreco(centavos)\n%d\n",bilhetes[contadorCarros].horaEntrada, bilhetes[contadorCarros].minEntrada, bilhetes[contadorCarros].horaSaida, bilhetes[contadorCarros].minSaida,intervalo, bilhetes[contadorCarros].preco);
        total += contaCentavos;
        contadorCarros++;
        scanf("%d", &bilhetes[contadorCarros].horarioEntrada);
    }

    printf("Faturamento total (centavos)\n%d\n", total);

    int inicioIntervalo, finalIntervalo;
    scanf("%d", &inicioIntervalo);
    do
    {
        scanf("%d", &finalIntervalo);
    }
    while (finalIntervalo  < inicioIntervalo);

    for (i = 0; i < contadorCarros ; i++)
    {
        if (bilhetes[i].horarioSaida>inicioIntervalo && bilhetes[i].horarioSaida< finalIntervalo)
        {
            receita += bilhetes[i].preco;
        }
    }

    printf("\nFaturamento no periodo (centavos)\n%d\n", receita);

    return 0;
}
[2/12 16:55] Matheus Afonso: 7
[2/12 16:55] Matheus Afonso: #include <stdio.h>

//é permitido criar funções auxiliares, desde que não se altere nenhuma linha do método main

int conferir_contagem(int *my_hand){
	//escreva seu código aqui
  int i,j;
  for(i=0;i<5;i++){
    for(j=i;j>=0;j--){
      if(my_hand[i]<my_hand[j]){
        return 0;
      }
      else{

      }
    }
  }
  return 1;
}

void corrigir_contagem(int *my_hand){
	//escreva seu código aqui
  int i,j,aux;
  for(i=4;i>=0;i--){
    for(j=i;j>=0;j--){
      if(my_hand[i]<my_hand[j]){
        aux=my_hand[i];
        my_hand[i]=my_hand[j];
        my_hand[j]=aux;
      }
    }
  }
}

int main(){
	int i, mao[5];
	for(i=0; i<5; ++i)
		scanf("%d", &mao[i]);

	if(conferir_contagem(mao))printf("Contagem Correta\n");
	else{
		printf("Contagem Incorreta\n");
		printf("Sequencia certa: ");
		corrigir_contagem(mao);
		for(i=0; i<5; ++i)
			printf("%d%c", mao[i], ((i==4)? '\n' : ' '));
	}

 return 0;
}
[2/12 16:55] Matheus Afonso: 8
[2/12 16:55] Matheus Afonso: #include <stdio.h>
#include <math.h>


/* Crie suas funções, structs ou qualquer elemento que desejar dentro da área de edição na main()
ou fora da main porém sem alterar nenhuma outra função dada */

typedef struct tri{
	int x,y;
}ttri;

typedef struct Triangle{
	ttri a,b,c;
}ttriangle;

//Nao altere essa função
double area(struct Triangle t){
	return 0.5*fabs(t.a.x*(t.b.y-t.c.y) + t.b.x*(t.c.y-t.a.y) + t.c.x*(t.a.y-t.b.y));
}
int main(){

	/*inicio da area editavel */
	ttriangle my_tri;
	scanf("%d%d%d%d%d%d",&my_tri.a.x,&my_tri.a.y,&my_tri.b.x,&my_tri.b.y,&my_tri.c.x,&my_tri.c.y);
	/*fim da area editavel */
	double resp  = area(my_tri);
	if(!resp)printf("Nao e um triangulo\n");
	else printf("A area do triangulo e %.2lf\n", resp);
 return 0;
}
[2/12 16:55] Matheus Afonso: 9
[2/12 16:55] Matheus Afonso: #include <stdio.h>
#include <math.h>

//suas structs
typedef struct tower{
    double r;
    int x,y;
}ttower;
typedef struct phone{
    int x,y;
}tphone;
//cálculo da distância (pode ser modificado para suas structs)
double distance(struct phone a,struct tower b){
	return hypot(a.x-b.x,a.y-b.y);
}

int main(){
    int i;
    tphone fone;
    scanf("%d%d",&fone.x,&fone.y);
    ttower towers[3];
    for(i=0;i<3;i++){
        scanf("%lf%d%d",&towers[i].r,&towers[i].x,&towers[i].y);
    }
    double dist;
    i=0;
    while(i<=2){
        dist=distance(fone,towers[i]);
        if(towers[i].r<dist){
            printf("Nao foi possivel encontrar\n");
            break;
        }
        else if(towers[i].r>=dist){}
        i++;
    }
    if(i==3){
        printf("Celular encontrado\n");
    }


 return 0;
}Notepad++ v7.6 new feature and bug-fixes:

1.  Add Built-in Plugins Admins. Users can install, update and remove plugins by some clicks via Plugins Admin:
    https://notepad-plus-plus.org/features/plugin-admin.html
2.  Change plugin loading method: Remove the legacy plugin loading way and apply only the new plugin loading method.
3.  Add new message NPPM_GETPLUGINHOMEPATH in Notepad++ API for plugin, so plugin can get its path easily.
4.  Fix a regression of performance issue while word wrap option is enable.
5.  Fix a performance issue for switching back to folded document.
6.  Fix crash issue due to Unix style path input in Open file dialog.
7.  Fix UTF-8 detection problem: 4 byte characters UTF-8 character can be detected now.
8.  Enhance/Fix encoding detection/problem.
9.  Fix auto-indent issue by typing Enter on empty line.
10. Fix "Close all but this" behaviour if multiple views are present and some files are dirty.
11. Fix tool tip in document switcher showing the old name issue (after being renamed).
12. Add autoit and lua autoCompletion


Included plugins:

1.  NppExport v0.2.8 (32-bit x86 only)
2.  Converter 4.2.1
3.  Mime Tool 2.1
4.  DSpellCheck 1.4.6


Updater (Installer only):

* WinGup (for Notepad++) v5.0.4
