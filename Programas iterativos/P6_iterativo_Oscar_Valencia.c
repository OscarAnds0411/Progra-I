/*
        Programación I
    Programa 1 numeros pares
    Oscar Andrés Valencia Magaña
    15/09/2022
*/
/*
Realiza el diagrama de flujo y programa que lea un número “N” de 3
dígitos e imprima si dicho número es Armstrong. Un número es
Armstrong si la suma de los dígitos que lo componen elevados al cubo
es igual al número. Ejemplo: 153=1^3+5^3+3^3

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