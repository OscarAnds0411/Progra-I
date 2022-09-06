/*
        Programación I
    Programa 3 velocidad de un móvil
    Oscar Andrés Valencia Magaña
    03/09/2022
*/
/*Realizar el diagrama de flujo que calcule la velocidad de un automóvil y
muestre el resultado, si v=d/t. El usuario tiene que ingresar los datos de
distancia y tiempo. */
#include <stdio.h>
#include<conio.h>  

int main(){
    int d,t;
    printf("Programa 3 velocidad de un movil\n");
    printf("Ingrese la distancia recorrida en Km;\n");
    scanf("%d", &d);
    printf("Ingrese el tiempo tomado en h;\n");
    scanf("%d", &t);
    printf("La velocidad del móvil en Km/h es: %d\n", d/t);
}