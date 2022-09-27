/*
        Programación I
    Programa 2 peso de una persona
    Oscar Andrés Valencia Magaña
    19/09/2022
*/
/*
2. Realizar el diagrama de flujo y programa que calcule el peso de cualquier persona, si
P=mg. El usuario deberá ingresar los datos de la masa. La gravedad se toma de 9.81
m/s^2. En caso que sea valor negativo la masa u otra restricción que considere, mandar un
mensaje de error y terminar el programa.
*/
#include <stdio.h>
#include<conio.h>  

int main(){
    float g=9.81, m;
    printf("Programa 2: Calcular el peso de una persona en la tierra\n");
    printf("Considere la constante g=%.2f m/s^2\n", g);
    printf("Ingrese la masa de la persona en kg;\n");
    scanf("%f", &m);
    if (m<0){
        printf("Error\nLa masa negativa carece de sentido\n");
    } else
        printf("El peso de una persona en %.3f N \n", g*m);
}