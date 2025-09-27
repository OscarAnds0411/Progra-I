/*
		Programación I
    Programa 4 matrices
    Oscar Andrés Valencia Magaña
    19/01/2023
*/
/*
Realice el programa que realicen las siguientes operaciones de
matrices: A+B,3A-4B, donde

	1	-1	2			0	3	4
A=				, B=
	4	0	3			-1	-2	3
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int main(){
	int A[2][3] = {1,-1,2,4,0,3}, B[2][3] = {0,3,4,-1,-2,3}, j, k, l, m, suma[2][3], resta[2][3], x, y, z, v, q, r;
	
	printf("Programa 4:\t Operaciones con matrices\nSean:\n");
	printf("A =");
	for(j = 0; j < 2; j ++){
		printf("\n");
		for(k = 0; k < 3; k ++){
			printf("\t%d",A[j][k]);
		}
	}
	printf("\n\ny\t\tB =");
	for(l = 0; l < 2; l ++){
		printf("\n");
		for(m = 0; m < 3; m ++){
			printf("\t%d",B[l][m]);
		}
	}
	
	for(x = 0; x < 2; x ++){
		for(y = 0; y < 3; y ++){
			suma[x][y] = A[x][y] + B[x][y];
			resta[x][y] = 3*A[x][y] - 4*B[x][y];
		}
	}
	
	printf("\n\n\nLos resultados son:\nA+B =");
	for(z = 0; z < 2; z ++){
		printf("\n");
		for(v = 0; v < 3; v ++){
			printf("\t%d",suma[z][v]);
		}
	}
	printf("\n\n3A-4B =");
	for(q = 0; q < 2; q ++){
		printf("\n");
		for(r = 0; r < 3; r ++){
			printf("\t%d",resta[q][r]);
		}
	}
}
