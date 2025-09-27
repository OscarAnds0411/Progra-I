/*
        Programación I
    Programa 4 factorial
    Oscar Andrés Valencia Magaña
    15/09/2022
*/
/*
Realiza el diagrama de flujo y programa que calcule el factorial de un
número entero dado por el usuario. Debe verificar que el valor ingresado
sea entero y positivo, así como limitar el número de factorial máximo. Al
terminar el cálculo, debe preguntar si requiere
realizar otro cálculo o terminar el programa
*/
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>  

int main(){
    int i, n, fact=1;
    char opc = 's';
    while (opc == 's' || opc == 'S'){    
        fact = 1;
        printf("Programa 4\t Calculo de un factorial\n");
        printf("Favor de ingresar el numero que desea sacar el factorial:\n");
        scanf("%d", &n);
        if (n<=0){
            printf("ERROR\tfavor de ingresar un numero entero positivo\n");
        } else if(n >= 0 && n <= 20){
            for (i = 1; i <= n; i++){
                fact = fact * i;
            }
            printf("El factorial de %d es: %d\n", n, fact);
        } else{
            printf("ERROR\t favor de ingresar un numero mas pequen'o\n");
        }
        printf("Desea volver a usar el programa? (S/N)\n");
        scanf(" %c", &opc);
        system("pause");
        system("cls");
    }
}