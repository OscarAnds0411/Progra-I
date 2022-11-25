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

int main(){    
 int n1=0,n2=1,i,number=100, opc=0, caja;    
 long int n3;
 //printf("Enter the number of elements:");    
 //scanf("%d",&number);
 	while (opc!= 3){
 	printf("Programa 9: serie de Fibonacci\n");
 	printf("Favor de ingresar la opcion deseada:\n1. desplegar los 100 primeros valores de la serie de fibonacci\n2. hallar el valor n-esimo de la serie\n3. salir\n");
	scanf("%d", &opc);
	switch (opc){
	case 1:
		printf("\n n_1=%d\t n_2=%d\t",n1,n2);
 		for(i=2;i<=number;++i){  
  			n3=n1+n2;    
  			printf(" n_%d=%d\t",i+1,n3);    
  			n1=n2;    
  			n2=n3;    
 		} 
		printf("\n");		
		system("pause");
		system("cls");
		break;
	case 2:
		printf("Ahi vemos\n");
		system("pause");
		system("cls");
		break;
	case 3:
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