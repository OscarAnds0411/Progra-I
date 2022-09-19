/*
        Programación I
    Programa 1 área de un rectángulo
    Oscar Andrés Valencia Magaña
    19/09/2022
*/
/*
    1. Realizar el diagrama de flujo y programa que calcule el área de un rectángulo e imprima
el resultado. El usuario tiene que ingresar los datos de base y altura. En caso que sean
valores negativos los que ingresa u otra restricción que considere, mandar un mensaje
de error y termina el programa.
*/
#include <stdio.h>
#include<conio.h>  

int main(){
    int h,b;
    printf("Programa 1 Area de un rectangulo\n");
    printf("Ingrese la base del rectangulo;\n");
    scanf("%d", &b);
    printf("Ingrese la altura del rectangulo;\n");
    scanf("%d", &h);
    if (h<0 || b<0){
        printf("ERROR\n no existen las distancias negativas\n");
    } else
        printf("El area del rectangulo en u^2 es: %d\n", b*h);
}