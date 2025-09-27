/*
    Programación I
    Programa actividad integradora
    Carlos Alberto Ruiz Diaz
    Oscar Andrés Valencia Magaña
    10/01/2023
*/
#include <stdio.h>

float taylor(int n, float x){
	float sum = 1.0f;

	for (int i = n - 1; i > 0; --i )
		sum = 1 + x * sum / i;

	return sum;
}

int main(){
	int n = 100;
	float x = 1.0f;
	printf("\ne = %f\n", taylor(n, x));
}