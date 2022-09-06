/*
        Programación I
    Programa 8 IVA
    Oscar Andrés Valencia Magaña
    03/09/2022
*/
/*Realizar el diagrama de flujo que calcule la conversión de grados centígrados
a Farenheit. El usuario ingresa los datos de la temperatura en Centígrados. */
#include <stdio.h>
#include<conio.h>  
#include <math.h>

int main(){
    float pf,pd,po;
    printf("Programa 8 IVA\n");
    printf("Ingrese el costo inicial;\n");
    scanf("%f", &po);
    pf=po*0.92;
    pd=0.8*po;
    printf("El costo con descuento es: %f\n", pd);
    printf("El costo total a pagar es: %f\n", pf);
}