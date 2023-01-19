/*
		Programación I
    Programa 2 lista de funciones
    Oscar Andrés Valencia Magaña
    19/01/2023
*/
/*
2. Realice un programa que realice las funciones que a continuaci�n se
indican. Todas las opciones deben ser presentadas al usuario a trav�s
de un men� de opciones.

a)Escriba una funci�n en la que se introduzcan 10 enteros y
determine cuales de estos enteros son pares y cuales son impares.

b) Un n�mero entero es un �n�mero perfecto� si sus factores,
incluyendo al 1 (pero excluyendo en el n�mero mismo), suman
igual que el numero. Ejemplo: 6 es un numero perfecto porque 6=
1+2+3. Escriba una funci�n que regrese los primeros 5 n�meros
perfectos. Esta funci�n debe tener una funci�n anidada que
determine al n�mero perfecto.

c) Escriba una funci�n que tome un valor entero de cuatro d�gitos y
regrese el n�mero con los d�gitos invertidos. Por ejemplo, dado el
n�mero 7631, la funci�n deber� regresar 1367.
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

void parimp();
long int pppow(int w);
long int pnum(int m);
void inv();

int main(){
	int u;
	char opc;
	
	printf("Programa 2:\t Lista de funciones\n");
	printf("Escoja una de las siguientes opciones:\n");
	printf("a)\tIdentificacion y clasificacion de 10 numeros: pares o impares\n");
	printf("b)\tEncontrar los 5 primeros numeros perfectos\n");
	printf("c)\tInvertir numeros enteros\n");
	scanf("%c",&opc);
	
	switch(opc){
		case 'a':
			parimp();
			break;
		case 'b':
			printf("A contiunuacion se muestran los primeros 5 numeros perfectos\n");
			for(u = 0; u < 5; u ++){
				printf("\n%d: %li",u+1,pnum(u));
			}
			break;
		case 'c':
			inv();
			break;
		default: printf("Error, opcion no valida\n");
	}
}


void parimp(){
	int nums[11], pares[11], impares[11], k = 0, j = 0, p = 0, z, r = 1, m, h;
	
	printf("Por favor, ingrese 10 numeros enteros:\n");
	for(k = 0; k < 10; k ++){
		printf("\t%d.\n ",k+1);
		scanf("%d",&nums[k]);
	}
	for(m = 0; m < 10; m ++){
		if(nums[m]%2 == 0){
			pares[p] = nums[m];
			p ++;
		}
		else{
			impares[r] = nums[m];
			r++;
		}
	}
	printf("Los numeros pares son:\n");
	for(j = 0; j < p; j ++){
		printf("\n\t%d",pares[j]);
	}
	printf("\n\n\tLos numeros impares son:");
	for(z = 0; z < r; z ++){
		printf("\n\t%d",impares[z]);
	}
}


long int pnum(m){
	
	long int enteros[6],w;
	enteros[0]=6;
	enteros[4]=33550336;
	for(w = 1; w < 4; w ++){
		enteros[w] = pppow(w);
	}
	return enteros[m];
}

long int pppow(w){
	long int r; 
	
	r=pow(2,(2*w+1)-1)*((pow(2,(2*w+1))-1));
	return r;
}

void inv(){
	int n, inver[4], b;
	printf("Esta funcion regresa un numero de 4 digitos.\n Ingrese un numero de cuatro digitos:\n");
	scanf("%d",&n);
	inver[0] = n/1000;
	inver[1] = (n%1000)/100;
	inver[2] = (n%100)/10;
	inver[3] = (n%10);
	printf("El numero invertido es:\t");
	for(b = 3; b > -1; b --){
		printf("%d",inver[b]);
	}
}