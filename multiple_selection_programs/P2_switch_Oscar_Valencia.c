/*
        Programación I
    Programa 2 conversora
    Oscar Andrés Valencia Magaña
    09/11/2022
*
/*
Realiza el diagrama de flujo y programa que haga la conversión en las diferentes
escalas de temperatura. El usuario elegirá la conversión de temperatura que desea
de 6 posibles (°C-°F, °C-K, °F-°C,°F-K, K-°C, K-°F). Esto debe aparecer en forma de
menú. Al terminar la conversión solicitada, deberá terminar el programa. 
*/
#include <stdio.h>
#include<conio.h>  
#include<math.h>  
#include<stdbool.h> 
/*
Para convertir de ºC a ºF use la fórmula:   ºF = ºC x 1.8 + 32.
Para convertir de ºF a ºC use la fórmula:   ºC = (ºF-32) ÷ 1.8.
Para convertir de K a ºC use la fórmula:   ºC = K – 273.15
Para convertir de ºC a K use la fórmula: K = ºC + 273.15.
Para convertir de ºF a K use la fórmula: K = 5/9 (ºF – 32) + 273.15.
Para convertir de K a ºF use la fórmula:   ºF = 1.8(K – 273.15) + 32
*/
int main(){
    int opc;
    float num1;
    printf("Programa 2 conversores de temperaturas\n");
    printf("Que opcion desea calcular\n1. C - F\n2. C - K\n3. F - C\n4. F - K\n5. K - C\n6. K - F\n");
    scanf("%d", &opc);
    switch (opc){
    case 1:
        printf("Ingrese la temperatura en Celsius que desa convertir en Fahrenheit\n");
        scanf("%f", &num1);
        printf("El resultado de la conversion es: %.2f F\n", (1.8*num1)+32);
    break;
    case 2:
        printf("Ingrese la temperatura en Celsius que desa convertir en Kelvin\n");
        scanf("%f", &num1);
        printf("El resultado de la conversion es: %.2f K\n", num1+273.15);
    break;
    case 3:
        printf("Ingrese la temperatura en Fahrenheit que desa convertir en Celsius\n");
        scanf("%f", &num1);
        printf("El resultado de la conversion es: %.2f C\n", (num1-32)/1.8);
    break;
    case 4:
        printf("Ingrese la temperatura en Fahrenheit que desa convertir en Kelvin\n");
        scanf("%f", &num1);
        printf("El resultado de la conversion es: %.2f K\n", ((5*(num1-32)/9))+273.15);
    break;
    case 5:
        printf("Ingrese la temperatura en Kelvin que desa convertir en Celsius\n");
        scanf("%f", &num1);
        printf("El resultado de la conversion es: %.2f C\n", num1-273.15);
    break;
    case 6:
        printf("Ingrese la temperatura en Kelvin que desa convertir en Fahrenheit\n");
        scanf("%f", &num1);
        printf("El resultado de la conversion es: %.2f F\n", 1.8*(num1-273.15)+32);
    break;
    default:
        printf("ERROR\t favor de ingresar una opcion correcta\n");
        break;
    }
}