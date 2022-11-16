/*
        Programación I
    Programa 1 numeros pares
    Oscar Andrés Valencia Magaña
    15/09/2022
*/
/*
Realiza el diagrama de flujo y programa que calcule el factorial de un
número entero dado por el usuario. Debe verificar que el valor ingresado
sea entero y positivo, así como limitar el número de factorial máximo. Al
terminar el cálculo, debe preguntar si requiere
realizar otro cálculo o terminar el programa
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