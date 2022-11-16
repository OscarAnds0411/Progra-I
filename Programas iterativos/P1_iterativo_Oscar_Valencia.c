/*
        Programación I
    Programa 1 numeros pares
    Oscar Andrés Valencia Magaña
    15/09/2022
*/
/*
    Realiza el diagrama de flujo y programa que imprima todos los números
impares del 1 al 10,000. Deberá mostrarlos en bloques de 100 números,
pausar y continuar el programa hasta terminar.
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