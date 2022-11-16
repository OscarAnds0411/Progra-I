/*
        Programación I
    Programa 1 numeros pares
    Oscar Andrés Valencia Magaña
    15/09/2022
*/
/*
   Realiza el diagrama de flujo y programa que haga la conversión en las
diferentes escalas de temperatura. El usuario elegirá la conversión de
temperatura que desea de 6 posibles (°C-°F, °C-K, °F-°C,°F-K, K-°C, K-°F).
Esto debe aparecer en forma de menú. Al terminar la conversión solicitada,
deberá refrescar la pantalla y regresar al menú. Una de las opciones de
dicho menú será terminar el programa.
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