#include <stdio.h>

int main()
{
    long long int a,b,c;
    int n, i=1;
    double na;
    a=0,b=1,c=0;
    printf ("Introduce el numero de elementos: ");
    scanf("%d", &n);
    printf ("El resultado de la division de numeros de cada elemento es: \n");
    
 for (i=1;i<n;i++)
 { c=a+b;
 na=(double)(c)/b;
 printf ("%15lf\n", na);
 a=b; b=c;
 printf("\n"); }
 
    return 0;
}
