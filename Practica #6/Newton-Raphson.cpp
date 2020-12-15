
#include <stdio.h>
#include <math.h>
#include<conio.h>
float f(float x);
float fp(float x);
int main()
{
float x[50],xi,div,e;
int ac,it,i=0;
printf("\n\t\tMetodo de Newton-Raphson de la funcion  2x^3-11x^2+17.7x-5   \n\n");
printf("Introduce el valor inicial de Xi: ");
scanf("%f",&xi);
printf("Introduce el numero de iteraciones: ");
scanf("%d",&it);

e=1;

x[0]=xi;
printf("\nX0=% .2f\n",x[0]);
printf("\ni            \tXi           E\n");
do {
ac++;
div=(f(x[i])/fp(x[i]));
x[i+1]= (x[i]-div);
e=(x[i+1]-x[i]);
e=e/x[i+1];
e=fabs(e)*100;

printf("\n%d            %5.6f       %5.3f%%",ac,x[i+1],e);
i++;

}
while(ac<it);
getch();
}
float f(float x)
{
float y;
y= (2*(x*x*x)-11*(x*x)+17.7*x-5);
return y;

}
float fp(float x)
{
float y;
y=(6*(x*x)-22*x+17.7);
return(y);
}

