/*
        Programación I
    Programa 4 peso de una persona en la tierra
    Oscar Andrés Valencia Magaña
    03/09/2022
*/
/*Realizar el diagrama de flujo que calcule el peso de cualquier persona, si
P=mg. El usuario ingresa los datos de la masa. La gravedad se toma de 9.81
m/s^2 */
#include <stdio.h>
#include<conio.h>  

int main(){
    float g=9.81;
    int m;
    printf("Programa 4 peso de una persona en la tierra\n");
    printf("Considere la constante g en m/s^2 como: %f\n", g);
    printf("Ingrese la masa de la personna en Kg;\n");
    scanf("%d", &m);
    printf("El peso de una persona en N es: %f\n", g*m);
}