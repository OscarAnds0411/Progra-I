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
//#include <stdafx.h> 
#include <string.h> 
#include <math.h>
#include<conio.h> 

int main(){
    int x=0, y=0, sum=0, n, l;
    char num[3];

    printf("Programa 6: Verificar que se trata de un numero de Armstrong\n");
    printf("Favor de ingresar un numero de 3 digitos:\n");
    scanf("%d",&n);
    sprintf(num, "%d", n);
    l=strlen(num);
    y=n;
    while (y>0){
        x=%10;
        sum=sum+(int) pow((float)x,l);
        y=y/10;
    }
    if(sum == n)
        printf("%d es un numero de Armstrong\n", n);
    else
        printf("%d no es un numero de Armstrong\n", n);
    
}