/*
        Programación I
    Programa 1 numeros pares
    Oscar Andrés Valencia Magaña
    15/09/2022
*/
/*
R Escriba un programa tal que dada un cantidad entera de hasta 10
dígitos, imprima el número de dígitos que la componen.
Ejemplo: 234 tiene 3 dígitos
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