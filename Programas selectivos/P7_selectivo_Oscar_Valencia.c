/*
        Programación I
    Programa 7 raices grado 2
    Oscar Andrés Valencia Magaña
    19/09/2022
*/
/*
Realizar el diagrama de flujo y programa que calcule la solución de una ecuación
cuadrático del tipo 𝑎𝑥^2 + 𝑏𝑥 + 𝑐 = 0. El usuario deberá ingresar los coeficientes a, b y
c. Al final deberá mostrar si tiene raíces reales o complejas, así como mostrar el valor
de las raíces resueltas.
*/
#include <math.h>
#include <stdio.h>

int main(){
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    
    
    printf("Programa 7 raices del polinomio\n");
    printf("Ingrese los coeficientes a, b y c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    discriminant = b * b - 4 * a * c;

    
    if (discriminant > 0) {
        printf("El polinomio tiene 2 raices reales:\n");
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf y root2 = %.2lf", root1, root2);
    }

    else if (discriminant == 0) {
        printf("El polinomio tiene 1 raiz real:\n");
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }

    
    else {
        printf("El polinomio tiene 2 raices complejas:\n");
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }
}