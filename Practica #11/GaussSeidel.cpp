#include <stdio.h>
#include<math.h>
float A[3][3] = {{10,2,-1},{-3,-6,2},{1,1,5}}; 
float b[3] = {27,-61.5,-21.5}; 
float x_inicial1,x_inicial2,x_inicial3,E1,E2,E3,x1old,x2old,x3old; 
float x_iteracion_1,x_iteracion_2,x_iteracion_3; 
int i,j;
int main()
{
 // Gauss Seidel
for(j=0;j<5;j++){
    if(j==0){ 
        x_iteracion_1 = b[0]/A[0][0];
        x_iteracion_2 = ((-A[1][0]*x_iteracion_1)+b[1])/A[1][1];
        x_iteracion_3 = ((-A[2][0]*x_iteracion_1)-(A[2][1]*x_iteracion_2)+b[2])/A[2][2];
        printf("Metodo de Gaus Seidel\n" );
        printf("x_1 La iteracion 1 es igual a %f\n",x_iteracion_1);
        printf("x_2 La iteracion 1 es igual a %f\n",x_iteracion_2);
        printf("x_3 La iteracion 1 es igual a %f\n",x_iteracion_3);
    }

    else {
        x1old = x_iteracion_1;
        x_iteracion_1 = ((-A[0][1]*x_iteracion_2)-(A[0][2]*x_iteracion_3)+b[0])/A[0][0];
        E1=fabs((x_iteracion_1-x1old)/(x_iteracion_1))*100;
        x2old = x_iteracion_2;
        x_iteracion_2 = ((-A[1][0]*x_iteracion_1)-(A[1][2]*x_iteracion_3)+b[1])/A[1][1];
        E2=fabs((x_iteracion_2-x2old)/(x_iteracion_2))*100;
        x3old = x_iteracion_3;
        x_iteracion_3 = ((-A[2][0]*x_iteracion_1)-(A[2][1]*x_iteracion_2)+b[2])/A[2][2];
        E3=fabs((x_iteracion_3-x3old)/(x_iteracion_3))*100;
        printf("x_1 La iteracion %d es igual a %f, Con un error del %f %%\n",j+1,x_iteracion_1,E1);
        printf("x_2 La iteracion %d es igual a %f, Con un error del %f %%\n",j+1,x_iteracion_2,E2);
        printf("x_3 La iteracion %d es igual a %f, Con un error del %f %%\n",j+1,x_iteracion_3,E3);
        }
    }
}
