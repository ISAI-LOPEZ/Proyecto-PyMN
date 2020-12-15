#include <stdio.h>
#include <math.h>
#define PI 3.1416

float radio, volumen;


main()
{
        printf("Ingrese el valor del radio en metros");
        scanf("%f",&radio);
        volumen = 4 * PI * pow(radio, 3)/3;
        printf("El volumen de la esfera es de %.3f", volumen);
        
        
}

