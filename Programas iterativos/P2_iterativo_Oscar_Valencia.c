/*
        Programación I
    Programa 1 numeros pares
    Oscar Andrés Valencia Magaña
    15/09/2022
*/
/*
   Realiza el diagrama de flujo y programa que seleccione realizar diferentes
operaciones matemáticas (calcular el seno, coseno, tangente, raíz
cuadrada, logaritmo, logaritmo base 10, el valor elevado a una potencia “x”,
valor absoluto). El usuario ingresa el número que se desea calcular y elegir
a través de un menú el cálculo solicitado Al terminar la conversión
solicitada, deberá refrescar la pantalla y regresar al menú. Una de las
opciones de dicho menú será terminar el programa.
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