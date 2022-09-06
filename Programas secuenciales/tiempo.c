/*
        Programación I
    Programa 9 tiempo vivido
    Oscar Andrés Valencia Magaña
    03/09/2022
*/
/*Realizar el diagrama de flujo que calcule la conversión de grados centígrados
a Farenheit. El usuario ingresa los datos de la temperatura en Centígrados. */
#include <stdio.h>
#include<conio.h>  
#include <math.h>

int main(){
    int edad;
    float mes,sem,day;
    double hrs;
    printf("Programa 9 tiempo vivido\n");
    printf("Ingrese su edad;\n");
    scanf("%d", &edad);
    mes=edad*12;
    sem=edad*52.14;
    day=edad*365.25;
    hrs=edad*8765.81277;
    printf("La persona ha vivido:\n");
    printf("meses %f\n", mes);
    printf("semanas %f\n", sem);
    printf("dias %f\n", day);
    printf("horas %lf\n", hrs);
}