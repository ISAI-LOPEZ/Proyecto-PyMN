#include <stdio.h>
#include <math.h>
float f(float);
int main()
{
    int ni,it;
    float xa,xb,e,t,xi,xt,fa,fb;
    printf("\n\t\tMetodo de la posicion falsa a partir de la funcion log(x)+pow(x,2)-4\n");
    printf("\nIntroduce el valor a: ");
    scanf("%f",&xa);
    printf("\nIntroduce el valor b: ");
    scanf("%f",&xb);
    printf("\nIntroduce el numero de iteraciones: ");
    scanf("%d",&ni);
   it=0;  xi=0;
  
if(f(xi)*f(xb)>0)
    printf("No existe raiz dentro de este intervalo\n");
else{ printf("\ni       a          b     \tXi          Ea\n");
  do{
    it++;
    xt=xi;
    xi=xb-(((f(xb))*(xb-xa))/(f(xb)-f(xa)));
    e=fabs((xi-xb)/xi)*100;
    t=f(xa)*f(xi);
     fa=f(xa);
    fb=f(xb);
    if(t<0)
        xb=xi;
    else if(t>0)
        xa=xi;
    else e=0;
    printf("\n%d    %f    %f    %f    %f",it,xa,xb,xi,e);

  } while(it<ni);
}
return 0;
}
float f(float x){
    return (log(x)+pow(x,2)-4);
	
	}
