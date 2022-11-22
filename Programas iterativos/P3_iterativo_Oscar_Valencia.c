/*
        Programación I
    Programa 3 convertor de temperaturas
    Oscar Andrés Valencia Magaña
    15/09/2022
*/
/*
   Realiza el diagrama de flujo y programa que haga la conversión en las
diferentes escalas de temperatura. El usuario elegirá la conversión de
temperatura que desea de 6 posibles (°C-°F, °C-K, °F-°C,°F-K, K-°C, K-°F).
Esto debe aparecer en forma de menú. Al terminar la conversión solicitada,
deberá refrescar la pantalla y regresar al menú. Una de las opciones de
dicho menú será terminar el programa.
*/
#include <stdio.h>
#include<conio.h>  
#include<math.h>  
#include<stdbool.h> 

int main(){
    int opc=0;
    float num1;
    while (opc != 7){
       num1 = 0;    
        printf("Programa 3 conversores de temperaturas\n");
        printf("Que opcion desea calcular\n1. C - F\n2. C - K\n3. F - C\n4. F - K\n5. K - C\n6. K - F\n7.Salir\n");
        scanf("%d", &opc);
        switch (opc){
        case 1:
            printf("Ingrese la temperatura en Celsius que desa convertir en Fahrenheit\n");
            scanf("%f", &num1);
            printf("El resultado de la conversion es: %.2f F\n", (1.8*num1)+32);
            system("pause");
            system("cls");
        break;
        case 2:
            printf("Ingrese la temperatura en Celsius que desa convertir en Kelvin\n");
            scanf("%f", &num1);
            printf("El resultado de la conversion es: %.2f K\n", num1+273.15);
            system("pause");
            system("cls");
        break;
        case 3:
            printf("Ingrese la temperatura en Fahrenheit que desa convertir en Celsius\n");
            scanf("%f", &num1);
            printf("El resultado de la conversion es: %.2f C\n", (num1-32)/1.8);
            system("pause");
            system("cls");
        break;
        case 4:
            printf("Ingrese la temperatura en Fahrenheit que desa convertir en Kelvin\n");
            scanf("%f", &num1);
            printf("El resultado de la conversion es: %.2f K\n", ((5*(num1-32)/9))+273.15);
            system("pause");
            system("cls");
        break;
        case 5:
            printf("Ingrese la temperatura en Kelvin que desa convertir en Celsius\n");
            scanf("%f", &num1);
            printf("El resultado de la conversion es: %.2f C\n", num1-273.15);
            system("pause");
            system("cls");
        break;
        case 6:
            printf("Ingrese la temperatura en Kelvin que desa convertir en Fahrenheit\n");
            scanf("%f", &num1);
            printf("El resultado de la conversion es: %.2f F\n", 1.8*(num1-273.15)+32);
            system("pause");
            system("cls");
        break;
        case 7:
            printf("Adios c:\n");
            system("pause");
        break;
        default:
            printf("ERROR\t favor de ingresar una opcion correcta\n");
            system("pause");
            system("cls");
            break;
        }
    }
}