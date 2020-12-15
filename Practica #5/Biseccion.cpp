#include <stdio.h>
#include <math.h>
float f(float);
int main()
{
    int ni,it;
    float xa,xb,e,t,xi,xt;
    printf("\n\t\tMetodo de Biseccion a partir de la funcion 2xCos(2x)-(x+1)^2\n");
    printf("\nIntroduce el valor a: ");
    scanf("%f",&xa);
    printf("\nIntroduce el valor b: ");
    scanf("%f",&xb);
    printf("\nIntroduce el numero de iteraciones: ");
    scanf("%d",&ni);
   it=0;  xi=0;
  
if(f(xa)*f(xb)>0)
    printf("No existe raiz dentro de este intervalo\n");
else{ printf("\ni       a          b     \tXi          Ea\n");
  do{
    it++;
    xt=xi;
    xi=(xa+xb)/2;
    e=fabs((xi-xb)/xi)*100;
    t=f(xa)*f(xi);
    if(t<0)
        xb=xi;
    else if(t>0)
        xa=xi;
    else e=0;
    printf("\n%d    %f    %f    %f    %.3f %%",it,xa,xb,xi,e);

  } while(it<ni);
}
return 0;
}
float f(float x){
    return (2*x*cos(2*x))-pow(x+1,2);
	
	}
