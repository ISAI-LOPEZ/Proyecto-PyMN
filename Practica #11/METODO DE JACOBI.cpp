#include <stdio.h>
#include <math.h>

//METODO DE JACOBI Y CRAMER PARA LA SALUCIONS DE SISTEMA DE ECUACIONES LINEALES 


int main()

{
//DECLARACION DE MIS VARIABLES
float x10=0,x20=0,x30=0,ni=0,error=.1;	
float x1,x2,x3,e1,e2,e3,x,y,z;
float A[3][3]={3,3,-1,-1,5,-2,6,1,1},det,v[3][1]={1,2,1},detx,dety,detz;
int fila, col; 

printf("\n-----------SISTEMA DE ECUACIONES LINEALES------------\n\n");


//------------AQUI SE INICIA EL METODO DE JACOBI-------------//

printf("------------------METODO DE JACOBI-------------------\n\n");
printf("   10x1 + 2x2 -  x3 =  27\n   -3x1 - 6x2 + 2x3 = -61.5\n     x1 +  x2 + 5x3 = -21.5\n\n");
printf("-----------------------------------------------------\n\n");

printf ("  i        x1              error           x2              error           x3              error\n\n");
do{//SE UTILZA L DO WHILE YA QUE ES UN METODO CON ITERACIONES

    //AQUI SE CALCULAN LOS VALORES 
  	x1=(27-2*x20 +x30)/10; 
  	x2=(-61.5+3*x10-2*x30)/-6;
  	x3=(-21.5-x10-x20)/5;
    
    //AQUI SE CALCULA EL ERROR  DE CADA VALOR
	e1= fabs((x1-x10)/x1)*100;
    e2= fabs((x2-x20)/x2)*100;
    e3= fabs((x3-x30)/x3)*100;
    
	//AQUI SE IGUALAN MIS VALORES PARA PODER REALIZAR LA SIGUIENTE OPERACION CON LOS NUEVOS VALORES  
    x10=x1;
    x20=x2;
    x30=x3;
    
    //AQUI SE IMPRIME LA TABLA DE VALORES 
    printf("  %.0f\t %.4f \t  %.1f %%  \t %.4f \t  %.1f %%  \t %.4f \t  %.1f %%\n",ni,x1,e1,x2,e2,x3,e3);
    ni=ni+1;
}
while (error<e1);

    return 0; 	
}
