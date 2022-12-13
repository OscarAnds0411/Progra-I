/*
        Programación I
    Programa 9 serie de fibonacci
    Oscar Andrés Valencia Magaña
    15/09/2022
*/
/*
Realiza el diagrama de flujo y programa que genere hasta el valor 100
de la serie de Fibonacci. Podrá mostrar los primeros 20 números o
todos los valores de la serie generada. Además el usuario podrá
seleccionar que también se muestre el valor “n-ésimo” entre los
primeros 100 valores de la serie. 
*/
#include<stdio.h>    
#include<stdlib.h>    

int main(){    
 int n1,n2,i,number, opc=0;    
 unsigned long long int n3;
 	while (opc!= 4){
		n1=0, n2=1;
 	printf("Programa 9: serie de Fibonacci\n");
 	printf("Favor de ingresar la opcion deseada:\n1. desplegar los 100 primeros valores de la serie de fibonacci\n2. desplegar los 20 primeros valores de la serie de fibonacci\n3. hallar el valor n-esimo de la serie\n4. salir\n");
	scanf("%d", &opc);
	switch (opc){
	case 1:
		number=100;
		printf("\n n_1=%d\t n_2=%d\t",n1,n2);
 		for(i=2;i< number;++i){  
  			n3=n1+n2;    
  			printf(" n_%d=%llu\t",i+1,n3);    
			if((i+1)%10 == 0){
				printf("\n\n%d terminos de la serie\n\n\n", i+1);
			}
  			n1=n2;    
  			n2=n3;    
 		} 
		printf("\n");		
		system("pause");
		system("cls");
		break;
	case 2:
		number=20;
		printf("\n n_1=%d\t n_2=%d\t",n1,n2);
 		for(i=2;i< number;++i){  
  			n3=n1+n2;    
  			printf(" n_%d=%llu\t",i+1,n3);   
			if((i+1)%10 == 0){
				printf("\n\n%d terminos de la serie\n\n\n", i+1);
			} 
  			n1=n2;    
  			n2=n3;    
 		} 
		printf("\n");		
		system("pause");
		system("cls");
		break;
	case 3:
		printf("Ingrese el termino que desea calcular:\n");
		scanf("%d", &number);
		if (number == 0){
			printf("El %d termino es: 0", number);
		} else if (number == 1){
			printf("El %d termino es : 1", number);
		} else{		
 			for(i=2;i<=number;++i){  
				n3=n1+n2;
  				if(i == number)
					printf("El %d termino es: %llu\n", number, n3);
				n1=n2;
				n2=n3;
 			}
		} 
		system("pause");
		system("cls");
		break;
	case 4:
		printf("Adios :)\n");
		system("pause");
		break;
	default:
		printf("ERROR\tFavor de ingresar una opcion establecida\n");
		system("pause");
		system("cls");
		break;
		}
	}  
} 
