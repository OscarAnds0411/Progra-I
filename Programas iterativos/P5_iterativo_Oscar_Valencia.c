/*
        Programación I
    Programa 5 serie 
    Oscar Andrés Valencia Magaña
    15/09/2022
*/
/*
Realiza el diagrama de flujo y programa que calcule la suma de la
siguiente serie \sum_{i=1}^n \frac{1}{i}, donde “n” es un número que el usuario deberá
introducir por el teclado.

*/
#include <stdio.h>
#include<conio.h>  

int main(){
    int i, n;
    float psum = 0;
    printf("Programa 5: Hallar la suma parcial de una serie\n");
    printf("De la serie sum_{n}^{i=1} (1/i), ingrese hasta que termino desea calcular:\n");
    scanf("%d", &n);
    if (n<=0){
        printf("ERROR\t Favor de ingresar un numero mayor a 0\n");
    } else{
        for (i = 1; i <= n; i++){
            psum=psum+((float)1/(float)i);
        }
        printf("La suma parcial de la serie es: %f\n", psum);
    }
}