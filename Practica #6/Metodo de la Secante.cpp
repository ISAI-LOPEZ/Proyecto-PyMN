
#include <stdio.h>
#include <math.h>
float f(float x);

int main(){ 
    float x0=-4,x1=3,xf,d,e,x2;
int i=1;
printf("\n\tMetodo de de la Secante en funcion de  8*sin(x)*exp(-x)-1 con 5 iteraciones\n");
printf("\nLos valor iniciales son:  X0= -%.2f  X-1= %.2f \n",x0,x1);
printf("\ni            \tXi                Xi+1                 ?f'(xi)\t             E\n");

do { 
x2 = x0 - ( (f(x0)*(x1-x0))/(f(x1)-f(x0)) );
d=( f(x1)-f(x0))/(x1-x0);
e=(fabs ((x2-x1)/x2)*100);
printf("\nX%d            %.5f\t           %.5f\t             %.5f\t           %.5f%%",i,x0,x2,d,e);
x0=x1;
x1=x2;
i++;
}
while(i<=5);
return x2;
}

float f(float x){ 
float y= 2*(x*x*x)-11*(x*x)+17.7*x-5;
return y; }
