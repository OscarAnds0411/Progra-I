/*
        Programación I
    Programa 1 lista de personas
    Oscar Andrés Valencia Magaña
    19/01/2023
*/
/*
1. Elaborar un programa que registre el nombre, edad, y tel�fono de las
personas hasta que llegue una persona con mas de 50 a�os. Se debe
mostrar al final una tabla con el nombre, la edad y el n�mero telef�nico.
El programa deber� ser de hasta 7 personas como m�ximo.

*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	char name [7][30];
	int age [7];
	char celnum [7][11], i = 0, j = 0, k = 0, l;
	
	printf("Programa 1:\t lista de personas\n");
	do{
		printf ("\nIngrese su nombre\n");scanf("%s",&name[i]);
		printf ("\nIngrese su edad\n");scanf("%d",&age[i]);
		printf ("\nIngrese su numero de telefono\n");scanf("%s",&celnum[i]);
		i++;
		k++;
	}while(k<7&&age[k-1]<50);
	
	system("cls");
	printf("\n\tNombre\t\tEdad\t\tTelefono");
	
	for(l=0;l<k;l++){
		printf("\n\n\t%s\t\t%d\t\t%s",name[l],age[l],celnum[l]);
	}
}