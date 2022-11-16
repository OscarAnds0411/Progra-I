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
#include <stdio.h>
#include<conio.h>  

int main(){
    int i;
   for (i=0; 2*i+1<=10000; i++){
        printf("%d\t", 2*i+1);
        if (i != 0 && i%100 == 0){
            printf("\n%d numeros impares\n", i);
        }
   }
}