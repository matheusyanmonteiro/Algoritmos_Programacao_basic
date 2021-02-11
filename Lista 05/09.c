#include <stdio.h>
#include <math.h>

//suas structs
struct ponto{
    int x,y;
    double raio;

};

//cálculo da distância (pode ser modificado para suas structs)
double distance(struct ponto a,struct ponto b){
	return hypot(a.x-b.x,a.y-b.y);
}

int main(){
struct ponto celular,c1,c2,c3;
scanf("%d%d",&celular.x,&celular.y);
scanf("%lf%d%d",&c1.raio,&c1.x,&c1.y);
scanf("%lf%d%d",&c2.raio,&c2.x,&c2.y);
scanf("%lf%d%d",&c3.raio,&c3.x,&c3.y);
if(distance(celular,c1)>c1.raio||distance(celular,c2)>c2.raio||distance(celular,c3)>c3.raio){
    printf("Nao foi possivel encontrar");
}else{
    printf("Celular encontrado");
}
 return 0;
}
