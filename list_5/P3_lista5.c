/*
		Programación I
    Programa 3 arreglo, inicio en algortimos de ordenamiento
    Oscar Andrés Valencia Magaña
    19/01/2023
*/
/*
3. Escriba un programa en C que realice el ordenamiento de un vector de
una dimensi�n usando el m�todo de �Ordenamiento de selecci�n�.
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

void bubble(int m);

int main(){
	int m;

	printf("Programa 3:\t Ordenamiento de un arreglo\n");
	printf("Ingrese la cantidad de numeros del conjunto a ordenar:\n");
	scanf("%d",&m);
	bubble(m);
}


void bubble(m){
	int a[m], i, l, j, c, aux, min;

	for(l = 0; l < m; l ++){
		printf("\n\t%d. ", l+1);
		scanf("%d",&a[l]);
	}
	
	for(i = 0; i < m; i ++){
		min = i;
		for(j = i+1; j <= m; j ++){
			if(a[j] < a[min])
				min = j;
		}
		aux=a[i];
		a[i]=a[min];
		a[min]=aux;
	}
	printf("El ordenamiento queda la siguiente manera:\n");
	for(c = 1; c <= m; c ++){
		printf("%d ",a[c]);
	}
}
