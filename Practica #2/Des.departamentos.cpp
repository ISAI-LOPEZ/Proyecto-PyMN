#include<stdio.h>


int opcion, Nbol;
float precio, pf, Pb;


int main(){
	printf("selccione la opcion\n");
	printf("1.- Perfumeria\n");
	printf("2.- salchichoneria\n");
	printf("3.- Carniceria\n");
	printf("4.- Limpieza\n");
	scanf("%d",&opcion);
	
	printf("introduce el precio del producto\n");
	scanf("%f",&precio);
	
	printf("cuantas bolsas de plastico ocupara\n");
	scanf("%d", &Nbol);
	
	Pb=(Nbol*.10);
	
	switch (opcion){
		
		case 1:
			pf=  (precio-(precio*.20))+Pb;
			printf("El precio final del producto es de:%.2f", pf);
			
			break;
		case 2:
			pf=  (precio-(precio*.20))+Pb;
			printf("El precio final del producto es de:%.2f", pf);
			
			break;
		case 3:
			pf=  (precio-(precio*.20))+Pb;
			printf("El precio final del producto es de:%.2f", pf);
			
			break;	
		case 4:
			pf=  (precio-(precio*.20))+Pb;
			printf("El precio final del producto es de:%.2f", pf);
			
			break;	
			
		default:
			printf("Departamento incorrecto");
			break;
			
	
			
	}
	
}
