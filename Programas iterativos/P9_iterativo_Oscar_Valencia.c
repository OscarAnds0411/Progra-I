/*
        Programación I
    Programa 1 numeros pares
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

int main()    
{    
 int n1=0,n2=1,n3,i,number=10;    
 //printf("Enter the number of elements:");    
 //scanf("%d",&number);    
 printf("\n %d\t %d\t",n1,n2);//printing 0 and 1    
 for(i=2;i<number;++i)//loop starts from 2 because 0 and 1 are already printed    
 {    
  n3=n1+n2;    
  printf(" %d\t",n3);    
  n1=n2;    
  n2=n3;    
 }  
  return 0;  
 }   