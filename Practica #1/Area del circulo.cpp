#include <stdio.h>
#include<math.h>
#define PI 3.1416
float radio, area;
 int main () 
{
printf( "Ingrese valor para el radio");
scanf("%f", &radio);
area = PI*radio *radio;
printf("El area del circulo es %f", area);
}

