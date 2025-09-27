/*
        Programación I
    Programa 8 Sistema de Vacunación
    Oscar Andrés Valencia Magaña
    19/09/2022
*/
/*
La secretaria de salud requiere el diagrama de flujo y programa que representen el
algoritmo que permita determinar qué tipo de vacuna (A, B o C) debe aplicar a una
persona, considerando que si es mayor de 70 años, sin importar el sexo, se le aplica
la tipo C; si tiene entre 16 y 69 años, y es mujer, se le aplica la B, y si es hombre, la
A; si es menor de 16 años, se le aplica la tipo A, sin importar el sexo.*/
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>  


int main(){
    char sexo;
    int edad;
    
    printf("Programa 8: Sistema de asignacios de vacunacion\n");
    printf("Favor de ingresar su sexo\t Masculino (M) \t Femenino (F)\n");
    scanf(" %c", &sexo);
    if (sexo == 'M' || sexo == 'm' || sexo == 'f' || sexo == 'F'){
        printf("Favor de ingresar su edad en an'os\n");
        scanf("%d", &edad);
        if (edad<0){
            printf("ERROR\nFavor de ingresar una edad coherente\n");
        } else if (edad>70){
            printf("Le toca la vacuna tipo C\n");
        } else if ((edad>=16 && edad<=69) && (sexo == 'f' || sexo == 'F')){
            printf("Le toca la vacuna tipo B\n");
        } else if ((edad>=16 && edad<=69) && (sexo == 'm' || sexo == 'M')){
            printf("Le toca la vacuna tipo A\n");
        } else {
            printf("Le toca la vacuna tipo A\n");
        }
    } else{
        printf("ERROR\nFavor de ingresar una opcion correcta\n");
    }   
}