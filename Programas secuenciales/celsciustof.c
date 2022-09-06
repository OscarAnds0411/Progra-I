/*
        Programación I
    Programa 5 Celcius a Farenheit
    Oscar Andrés Valencia Magaña
    03/09/2022
*/
/*Realizar el diagrama de flujo que calcule la conversión de grados centígrados
a Farenheit. El usuario ingresa los datos de la temperatura en Centígrados. */
#include <stdio.h>
#include<conio.h>  

int main(){
    float c;
    printf("Programa 5 Celcius a Farenheit\n");
    printf("Ingrese la temperatura en Celcius;\n");
    scanf("%f", &c);
    printf("El equivalente en Farenheit es: %f\n", ((c*9)/5)+32);
}