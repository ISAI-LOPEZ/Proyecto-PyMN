// Programa donde se calcula una derivada numerica de orden h2 hacia adelante
#include <stdio.h>
#include<math.h>
// Declarar la funcion de derivacion hacia adelante
float dad(float h, float(xi));
float da(float h, float(xi));
float dc(float h, float(xi));
float errdad(float h, float (xi));
float errda(float h, float (xi));
float errdc(float h, float (xi));
//Declaramos las variables para ejecutar la funcion en el programa
float xi,h;

int main()
{
    xi=0.6; 
    printf("Calculando la derivada de f(x)=1-e^(-x/0.2) en el punto xi=0.6\n");
    printf("ingrese el valor de Incremento (H): ");
    scanf("%f",&h);
    printf("\nh            \tAdelante                Atras             Centrada             ");
    printf("\n%f        %f            %f           %f            ",h,dad(h,xi),da(h,xi),dc(h,xi));
    printf("\nEr%%             %f           %f          %f               ",errdad(h,xi),errda(h,xi),errdc(h,xi));
}
// Definimos la funcion f'(xi) = (-f(xi+2)+4f(xi+1)-3f(xi))/2h

float errdad(float h, float (xi)){ 
    float A,eR;
    A= 5*exp(-xi/0.2);
       eR=(fabs((dad(h,xi)-A)/A)*100); 
       
	   return eR;
    }

float errda(float h, float (xi)){ 
    float A,eR;
    A = 5*exp(-xi/0.2);
       eR=(fabs((da(h,xi)-A)/A)*100); 
       
	   return eR;
    }
float errdc(float h, float (xi)){ 
    float A,eR;
    A = 5*exp(-xi/0.2);
       eR=(fabs((dc(h,xi)-A)/A)*100); 
	   
	   return eR;
    }
    
    
    
float dad(float h, float(xi)){
    float dfxi, fxi, fxip1, fxip2,eR;
    fxi = 1-exp(-xi/0.2); //Evaluando la funcion en xi f(xi)
    fxip1 = 1-exp(-(xi+h)/0.2); // Evaluando f(xi+1)
    fxip2 = 1-exp(-(xi+2*h)/0.2); //Evaluando f(xi+2)
    dfxi = (-fxip2+4*fxip1-3*fxi)/(2*h);
    eR=(fabs ((dfxi-fxi)/fxi)*100);
    
    return dfxi; 
	 }
    
    float da(float h, float(xi)){
    float dfxi, fxi, fxip1, fxip2;
    fxi = 1-exp(-xi/0.2); //Evaluando la funcion en xi f(xi)
    fxip1 = 1-exp(-(xi-h)/0.2); // Evaluando f(xi-1)
    fxip2 = 1-exp(-(xi-2*h)/0.2); //Evaluando f(xi-2)
    dfxi = (3*fxi-(4*fxip1)+fxip2)/(2*h);
    
    return dfxi;                
	 }
    
    float dc(float h, float(xi)){
    float dfxi, fxi, fxip1, fxip2,fxip_1,fxip_2;
    fxi = 1-exp(-xi/0.2); //Evaluando la funcion en xi f(xi)
    fxip_1 = 1-exp(-(xi-h)/0.2); // Evaluando f(xi-1)
    fxip_2 = 1-exp(-(xi-2*h)/0.2); //Evaluando f(xi-2)
    fxip1 = 1-exp(-(xi+h)/0.2); // Evaluando f(xi+1)
    fxip2 = 1-exp(-(xi+2*h)/0.2); //Evaluando f(xi+2)
    dfxi = (-fxip2+(8*fxip1)-(8*fxip_1)+fxip_2)/(12*h);
    
    return dfxi;            
	   
	  }
	  
