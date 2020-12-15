#include<stdio.h>
#include<math.h>
 
int main()
{
float xpos, xnega;
int   a,b,c;
   
    printf("Ingrese el valor de a:\n");
    scanf("%d",&a);
    
    printf("Ingrese el valor de b:\n");
    scanf("%d",&b);
    
    printf("Ingrese el valor de c:\n");
    scanf("%d",&c);
    
if(a!=0)

	{
if (b*b-4*a*c>=0)

	{
    xpos= (-b+sqrt(b*b-4*a*c))/(2*a);
	xnega=(-b-sqrt(b*b-4*a*c))/(2*a);
	
	
	printf("\nvalor de X1 %.2f", xpos);
	printf("\nvalor de X2 %.2f", xnega);
   	}
	else
	  
    printf("\nError las soluciones no son reales");
}
    return 0;
}
