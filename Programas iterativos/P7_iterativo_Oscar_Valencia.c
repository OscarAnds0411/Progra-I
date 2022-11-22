/*
        Programación I
    Programa 7 cantidad de digitos
    Oscar Andrés Valencia Magaña
    15/09/2022
*/
/*Escriba un programa tal que dada un cantidad entera de hasta 10
dígitos, imprima el número de dígitos que la componen.
Ejemplo: 234 tiene 3 dígitos
*/
#include <stdio.h>
#include <string.h> 
#include <math.h>
#include<conio.h> 

int main(){
    int num;
    char dig[10];

    printf("Programa 7: Cantidad de digitos que componen a un numero\n");
    printf("Favor de ingresar un numero de entre 1 a 10 digitos\n");
    scanf("%d", &num);
    sprintf(dig, "%d", num);
    if(strlen(dig)>=1 && strlen(dig)<=10){
        printf("El numero tiene %d digitos\n", strlen(dig));
    }else{
        printf("ERROR\tFavor de ingresar un numero de entre 1 a 10 digitos\n");
    }
}