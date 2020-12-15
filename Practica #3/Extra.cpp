#include <stdio.h>

int main(){
    float acum=0, f;
    int a, b;
   
    printf("Introduce el valor a comparar: ");
    scanf("%d",&a);
    
    for(b=1; b<=a; b++){
    	
    	acum= acum+b;
    	
    	f= 1+(1/acum+1);
    	printf("%f \n", f);
    
		}

    return 0;
}
