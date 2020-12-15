#include<stdio.h>
#include <stdlib.h>




 int main(){
	int res;
	int numero;
	printf("Ingresa la sifra o numero");
	scanf("%d",&numero);
	
	res=(numero%2);
	if(res==0){
		printf("El numero es par");
	
	}
	else{
		printf("El numero es impar");
	}
	
	
	
}
