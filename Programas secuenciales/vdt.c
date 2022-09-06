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
    float d,t;
    printf("Programa 3 velocidad de un movil\n");
    printf("Ingrese la distancia recorrida en Km;\n");
    scanf("%f", &d);
    printf("Ingrese el tiempo tomado en h;\n");
    scanf("%f", &t);
    printf("La velocidad del movil en Km/h es: %f\n", d/t);
}
