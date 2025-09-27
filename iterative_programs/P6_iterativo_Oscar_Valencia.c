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
    
    int number, raised = 0, powerNumber = 0, remaining, numberCopy;
    
    printf("Programa 6: Verificar que se trata de un numero de Armstrong\n");
    printf("Favor de ingresar cualquier numero de tres digitos:\n");

	scanf("%d",&number);
   if (number > 99 && number < 1000){
        numberCopy = number;

	    while(numberCopy != 0){
		    numberCopy = numberCopy/10;
		    powerNumber++;
	    }

	    numberCopy = number;

	    while(number!=0){
		    remaining = number % 10;
		    raised += pow(remaining, powerNumber);
		    number = number/10;
	    }

	    if(numberCopy == raised){
		    printf("%d es un numero de Armstrong", numberCopy);
	    }else{
		    printf("%d NO es un numero de Armstrong", numberCopy);
        }        
    }else {
        printf("ERROR\t favor de ingresar un numero de 3 digitos\n");
    }
}