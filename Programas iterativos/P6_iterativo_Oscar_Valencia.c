/*
        Programación I
    Programa 6 numeros de amstrong
    Oscar Andrés Valencia Magaña
    15/09/2022
*/
/*
Realiza el diagrama de flujo y programa que lea un número “N” de 3
dígitos e imprima si dicho número es Armstrong. Un número es
Armstrong si la suma de los dígitos que lo componen elevados al cubo
es igual al número. Ejemplo: 153=1^3+5^3+3^3
*/
#include <stdio.h>
#include <string.h> 
#include <math.h>
#include<conio.h> 

int main(){
    int num, aux, x,suma=0;

    printf("Programa 6: Verificar que se trata de un numero de Armstrong\n");
    printf("Favor de ingresar un numero de 3 digitos:\n");
    scanf("%d",&num);
    aux=num;
    if (num > 99 && num < 1000){
        while (aux>0){
            x=aux%10;
            suma=suma+(int) pow((float)x,3);
            aux=aux/10;
        }
        if(suma == num) 
            printf("%d es un numero de Armstrong.\n", num);
        else 
            printf("%d no es un numero de Armstrong.\n", num);
    }else {
        printf("ERROR\t favor de ingresar un numero de 3 digitos\n");
    }
}