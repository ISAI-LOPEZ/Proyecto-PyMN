#include<stdio.h>

#define g 9.8

float masa, Fuerza;

main()
{
	     printf ("Cual es la masa de la persona?");
	     scanf("%f",&masa);
	     Fuerza=masa*g;
	     printf("la fuerza de atraccion de la persona es de %.2f" ,Fuerza);
	
}
