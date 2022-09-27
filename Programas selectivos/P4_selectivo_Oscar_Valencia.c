/*
        Programación I
    Programa 4 C to F
    Oscar Andrés Valencia Magaña
    19/09/2022
*/
/*
4. Realizar el diagrama de flujo y programa que convierta la temperatura de grados
Centígrados a grados Farenheit o Kelvin, y después lo muestre en el pantalla. El
usuario ingresará el valor en Celsius inicialmente, y deberá elegir la letra “F” o “f” si la
conversión requerida es Farenheit o la letra “K” o “k” si la conversión es Kelvin. En
cualquier otro caso, mandará un mensaje de error y terminará el programa.
*/
#include <stdio.h>
#include<conio.h>  
#include<math.h>  

int main(){
    char opc;
    float cels;
    printf("Programa 4: conversion de temperaturas\n");
    printf("Ingrese la temperatura en Celsius que desea convertir;\n");
    scanf("%f", &cels);
    printf("Desee la opcion que desea convertir\nKelvin (k) o Farenheit (f)\n");
    scanf(" %c", &opc);
    if (opc == 'f' || opc == 'F'){
        printf("La conversion de Celsius a Farenheit es: %.3f F\n", ((cels*9)/5)+32);
    }else if (opc == 'K' || opc == 'k'){
        printf("La conversion de Celsius a Kelvin es: %.3f K\n", cels+273.15);
    }else{
        printf("ERROR\nopcion no valida\n");
    }
}