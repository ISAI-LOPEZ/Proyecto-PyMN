#include<stdio.h>



int main(){
int num, i=0 , a[900];

printf("Dame el numero decimal a convertir");
scanf("%i",&num);

while(num != 0){
	
	a[i]= num%2;
	num= num/2;
	i++;
	}
	
	i--;
	printf("La conversion a binario es: \n");
	
     while (i>=0){
     	printf("%i", a[i]);
     	i--;
	 }
}
	
	

