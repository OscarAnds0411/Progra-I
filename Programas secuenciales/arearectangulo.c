/*
        Programación I
    Programa 2 área de un rectángulo
    Oscar Andrés Valencia Magaña
    03/09/2022
*/

#include <stdio.h>
#include<conio.h>  

int main(){
    int h,b;
    printf("Programa 2 Area de un rectangulo\n");
    printf("Ingrese la base del rectangulo;\n");
    scanf("%d", &b);
    printf("Ingrese la altura del rectangulo;\n");
    scanf("%d", &h);
    printf("El area del rectangulo es: %d\n", b*h);
}