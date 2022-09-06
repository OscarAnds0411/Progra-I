/*
        Programación I
    Programa 6 Teorema de pitagoras
    Oscar Andrés Valencia Magaña
    03/09/2022
*/
/*Realizar el diagrama de flujo que calcule la conversión de grados centígrados
a Farenheit. El usuario ingresa los datos de la temperatura en Centígrados. */
#include <stdio.h>
#include<conio.h>  
#include <math.h>

int main(){
    float a,b;
    printf("Programa 6 Teorema de pitagoras\n");
    printf("Ingrese la medida del primer cateto;\n");
    scanf("%f", &a);
    printf("Ingrese la medida del segundo cateto;\n");
    scanf("%f", &b);
    printf("la hipotenusa es: %f\n", sqrt(pow(a,2)+pow(b,2)));
}