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
 int n1=0,n2=1,i,number=100;    
 long int n3;
 //printf("Enter the number of elements:");    
 //scanf("%d",&number);    
 printf("Programa 9: serie de Fibonacci\n");
 printf("\n n_1=%d\t n_2=%d\t",n1,n2);
 	for(i=2;i<=number;++i){  
  		n3=n1+n2;    
  		printf(" n_%d=%d\t",i+1,n3);    
  		n1=n2;    
  		n2=n3;    
 	}  
  return 0;  
 }   
