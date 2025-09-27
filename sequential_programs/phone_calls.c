/*
        Programación I
    Programa 7 costo de llamadas
    Oscar Andrés Valencia Magaña
    03/09/2022
*/
/*Realizar el diagrama de flujo que calcule la conversión de grados centígrados
a Farenheit. El usuario ingresa los datos de la temperatura en Centígrados. */
#include <stdio.h>
#include<conio.h>  
#include <math.h>

int main(){
    float ppm, tmp;
    printf("Programa 7 costo de llamadas\n");
    printf("Ingrese el costo de la llamada en centavos/min;\n");
    scanf("%f", &ppm);
    printf("Ingrese la duracion de la llamada en minutos;\n");
    scanf("%f", &tmp);
    printf("El costo en centavos es: %f\n",ppm*tmp);
}