#include<stdio.h>


float peso, estatura, IMC;
char nombre[20];
int edad;

main(){
	
	printf("ingrese su nombre \n");
	gets(nombre);
	printf("ingrese su edad\n");
	scanf("%d", &edad);
	printf("ingrese su peso en kilogramos\n");
	scanf("%f", &peso);
	printf("ingrese la estatura em metros\n");
	scanf("%f", &estatura);
	
	
	IMC = peso/(estatura*estatura);
	
	printf("Nombre: %s ,Edad: %d, Peso: %f, IMC: %f",nombre, edad, peso, IMC);

	

	
	
	
	
	
}
