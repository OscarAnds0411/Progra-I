/*
        Programación I
    Programa 1 numeros pares
    Oscar Andrés Valencia Magaña
    15/09/2022
*/
/*
Realiza el diagrama de flujo y programa que resuelva un sistema de
ecuaciones de 2x2 y 3x3. El usuario deberá elegir entre ambos
sistemas a calcular. Al final deberá mostrar las soluciones del sistema,
o en su caso mencionar si tiene infinitas soluciones o no tiene solución.
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