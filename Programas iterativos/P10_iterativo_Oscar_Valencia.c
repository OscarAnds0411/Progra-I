/*
        Programación I
    Programa 1 numeros pares
    Oscar Andrés Valencia Magaña
    15/09/2022
*/
/*
Realice el diagrama de flujo y programa que representen el algoritmo
para determinar cuántos años, meses y días ha vivido una persona
según su fecha de nacimiento con respecto a la fecha en el que se
corra el programa. El usuario deberá ingresar su fecha de nacimiento
en modo numérico. El programa deberá verificar que los números
ingresados correspondan al número de días, del mes y de los dos
últimos dígitos del año. Por otro lado, solamente verificará del 1922 a la
fecha. De lo contrario, mostrará error. 
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