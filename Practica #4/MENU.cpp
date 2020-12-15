 #include<stdio.h>
 #include <stdlib.h>
#include <time.h>
 int opcion;
 
 
 int main(){
 	printf("------------Arreglo vectorial o matrizal------------------\n");
	printf("-------------------MENU-------------------------------\n");
 	printf("1.-ingresar 2 arreglos vectores elemento a elemento\n");
 	printf("2.-Se generarán 2 vectores con elementos enteros y se llenarán de forma aleatoria\n");
 	printf("3.-la suma de los dos arreglos vectoriales\n");
 	printf("4.-la suma de todos los elementos de un arreglo e imprima el resultado a la salida.\n");
 	printf("5.-llenar una matriz cuadrada\n");
 	printf("6.-llenado del arreglo vectorial con números aleatorios donde se va a llenar una matriz cuadrada\n");
 	printf("7.-sumar las dos matrices o arreglos bidimensionales.\n");
 	printf("8.-Multiplicar los dos arreglos matriciales e imprimir resultado\n");
 	 printf("\n");
    printf("Seleccionar una opcion: ");
    scanf("%i", &opcion );
     printf("\n");
    
    switch (opcion){
    	//----------------------------------------------------------------------
    	case 1:{
		
			printf("--------ingresar 2 arreglos vectores elemento a elemento-----------\n");
			
          int tam;
	      printf("Ingrese el tamno del arreglo 1(de 6 a 10)");
	      scanf("%i", &tam);
	
	
	     int arreglo[tam];
	     for (int i=0; i < tam; i++){
		 printf("Escribe el valor %i \n ", 1+i);
		 scanf("%i", &arreglo[i]);
	     }
	
	      int tam2;
           printf("Ingrese el tamno del arreglo 2(de 6 a 10)");
	       scanf("%i", &tam2);
	      int arreglo2[tam2];
	      for (int j=0; j < tam2; j++){
		
		  printf("Escribe el valor %j \n ", 1+j);
		   scanf("%i", &arreglo2[j]);
	     }
	
          printf("Los valores del arreglo 1 son:\n");
	      for(int i=0 ; i <tam; i++){
		
		  printf("%i-", arreglo[i]);
		  printf("\n");
          }
           printf("Los valores del arreglo 2 son:\n");
	       for(int j=0 ; j <tam2; j++){
		
		  printf("%i-", arreglo2[j]);
      }

	break;
}

	//------------------------------------------------------------------------
	   case 2:{
	   	
	   	printf("----------Se generarán 2 vectores con elementos enteros y se llenarán de forma aleatoria----------\n");
	
		
	      int v1[5], v2[5],i;
          srand(time(NULL));
          printf ("Los valores random del vector 1 son: ");
          for(i=0; i<6;i++){
          	
          v1[i]=1+rand()%100;
          printf(" %i ", v1[i]);
		    }
          printf ("\nLos valores random del vector 2 son: ");

          for(i=0; i<5;i++){
          v2[i]=1+rand()%100;
          printf(" %i ", v2[i]);
	      }
	  break;
}
	  //---------------------------------------------------------------------------
	  case 3:{
	  	
	  	printf("---------la suma de los dos arreglos vectoriales---------\n");
	  	
	  	int suma;
	int tam;
	
	int i, j;
	
	printf("Ingrese el tamno del arreglo 1(de 6 a 10)");
	scanf("%i", &tam);
	
	
	int arreglo[tam];
	for (int i=0; i < tam; i++){
		printf("Escribe el valor %i \n ", 1+i);
		scanf("%i", &arreglo[i]);
	}
	
	int tam2;
	printf("Ingrese el tamno del arreglo 2(de 6 a 10)");
	scanf("%i", &tam2);
	int arreglo2[tam2];
	for (int j=0; j < tam2; j++){
		
		printf("Escribe el valor %j \n ", 1+j);
		scanf("%i", &arreglo2[j]);
		
	suma= arreglo[i]+arreglo2[j];
	}
	
	
	printf("Los valores del arreglo 1 son:\n");
	for(int i=0 ; i <tam; i++){
		
		printf("%i-", arreglo[i]);
		
		printf("\n");
  }
    printf("Los valores del arreglo 2 son:\n");
	for(int j=0 ; j <tam2; j++){
		
		printf("%i-", arreglo2[j]);
		printf("\n");
 	
  }
  
  		printf("\n");
  printf("resultado de la suma de los dos arreglos:");
  
  		 printf("%i-", suma);
  
	  }
	  
		break;
	  
	  //----------------------------------------
	  	case 4:{
	  		
	  		printf("-------la suma de todos los elementos de un arreglo e imprima el resultado a la salida.---------\n");
	  		
	  		int suma=0;
	int tam;
	printf("Ingrese el tamno del arreglo ");
	scanf("%i", &tam);
	
	
	int arreglo[tam];
	for (int i=0; i < tam; i++){
		printf("Escribe el valor %i \n ", 1+i);
		scanf("%i", &arreglo[i]);
	

	suma= suma+arreglo[i];
	}
	
	for (int i=0; i<tam; i++){
		printf("%i-", arreglo[i]);
			
	}
	
	printf("\n");
	
printf("La suma de los valores del arreglo es de: %i", suma);
			break;
		  }
	//-----------------------------------------------------------
	case 5:{
		
		printf("---------------llenar una matriz cuadrada--------------\n");
		
		  int numeros[100][100],filas, columnas;
   
   printf("Digite el numero de filas: ");
   scanf("%i", &filas);
   printf("Digite el numero de columnas: ");
   scanf("%i", &columnas);
   
   for(int i=0; i<filas; i++){
   	for(int j=0; j<columnas; j++){
   		printf("digite el numero: [%i , %j] : ", i , j);
   		scanf("%i", &numeros[i][j]);
   		
	   }
   }
    for(int  i=0; i<filas; i++){
    	for(int j=0; j<columnas; j++){
    		printf ("%i-", numeros[i][j]);
		}
		printf("\n");
	}
		break;
	}
//-------------------------------------------------------
	case 6: {
		
		printf("------------llenado del arreglo vectorial con números aleatorios donde se va a llenar una matriz cuadrada------------\n");
		
		 int n,i,j;
     srand(time(NULL));
    printf ("Introduce 3 para un tamano de matriz 3x3 y 4 para un tamano de matriz 4x4: ");
    scanf("%d",&n);
    int m[n][n];
    for(i=0;i<n;i++){
              printf("\n");
              
        printf("\t Matriz %dx%d \n",n,n);
        for(i=0;i<n;i++){
            printf("\n");
            for(j=0;j<n;j++){
            	
                 m[i][j]= 1+rand()%100;
                printf("%6d",m[i][j]);}
				
				}
        return 0;
}
		break;
	}	
	//------------------------------------------
    case 7:{
    	
    	printf("-----------sumar las dos matrices o arreglos bidimensionales---------------\n");
    	
    	 int matriz1[100][100],matriz2[100][100];
   int filas, columnas;
int suma [filas][columnas],i,j;
   
   
   printf("Digite el numero de filas de la matriz 1: ");
   scanf("%i", &filas);
   printf("Digite el numero de columnas de la matriz 1: ");
   scanf("%i", &columnas);
   
   for(int i=0; i<filas; i++){
   	for(int j=0; j<columnas; j++){
   		printf("digite el numero: [%i , %j] : ", i , j);
   		scanf("%i", &matriz1[i][j]);
   		 }
   }
    for(int  i=0; i<filas; i++){
    	for(int j=0; j<columnas; j++){
    		printf ("%i-", matriz1[i][j]);
		}
		printf("\n");
	}

 printf("Digite el numero de filas de la matriz 2: ");
   scanf("%i", &filas);
   printf("Digite el numero de columnas de la matriz 2 : ");
   scanf("%i", &columnas);
   
   for(int i=0; i<filas; i++){
   	for(int j=0; j<columnas; j++){
   		printf("digite el numero: [%i , %j] : ", i , j);
   		scanf("%i", &matriz2[i][j]);
   		 
				 suma[i][j]=matriz1[i][j]+matriz2[i][j];
   	}
   	 
   }
    for(int  i=0; i<filas; i++){
    	for(int j=0; j<columnas; j++){
    		printf ("%i-", matriz2[i][j]);
    
		}
		 printf("\n");	
		
	}
	    printf("Suma de las 2 matrices ");
	    printf("\n");
	    
		for(int  i=0; i<filas; i++){
    	for(int j=0; j<columnas; j++){
    		printf ("%i-", suma[i][j]);
    	
    }
    printf("\n");
}
    	
		break;
	}
	//-----------------------------------------------------------
	  	 case 8:{
	  	 	
	  	 	printf("-----Multiplicar los dos arreglos matriciales e imprimir resultado-----\n");
	  	 	
	  	 	 int matriz1[100][100],matriz2[100][100];
   int filas, columnas;
int multiplicacion[filas][columnas],i,j;
   
   
   printf("Digite el numero de filas de la matriz 1: ");
   scanf("%i", &filas);
   printf("Digite el numero de columnas de la matriz 1: ");
   scanf("%i", &columnas);
   
   for(int i=0; i<filas; i++){
   	for(int j=0; j<columnas; j++){
   		printf("digite el numero: [%i , %j] : ", i , j);
   		scanf("%i", &matriz1[i][j]);
   		 }
   }
    for(int  i=0; i<filas; i++){
    	for(int j=0; j<columnas; j++){
    		printf ("%i-", matriz1[i][j]);
		}
		printf("\n");
	}

 printf("Digite el numero de filas de la matriz 2: ");
   scanf("%i", &filas);
   printf("Digite el numero de columnas de la matriz 2 : ");
   scanf("%i", &columnas);
   
   for(int i=0; i<filas; i++){
   	for(int j=0; j<columnas; j++){
   		printf("digite el numero: [%i , %j] : ", i , j);
   		scanf("%i", &matriz2[i][j]);
   		 
				 multiplicacion[i][j]=matriz1[i][j]*matriz2[i][j];
   	}
   	 
   }
    for(int  i=0; i<filas; i++){
    	for(int j=0; j<columnas; j++){
    		printf ("%i-", matriz2[i][j]);
    
		}
		 printf("\n");	
		
	}
	    printf("La multiplicacion de las 2 matrices ");
	    printf("\n");
	    
		for(int  i=0; i<filas; i++){
    	for(int j=0; j<columnas; j++){
    		printf ("%i-", multiplicacion [i][j]);
    	
    }
    printf("\n");
}
			break;
		   }

	default:
		
	printf("Seleccione una opcion");
	break;
	
}
}

