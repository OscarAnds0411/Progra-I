/*
        Programaci√≥n I
    Programa 1 numeros pares
    Oscar Andr√©s Valencia Maga√±a
    15/09/2022
*/
/*
Realiza el diagrama de flujo y programa que resuelva un sistema de
ecuaciones de 2x2 y 3x3. El usuario debera elegir entre ambos
sistemas a calcular. Al final debera mostrar las soluciones del sistema,
o en su caso mencionar si tiene infinitas soluciones o no tiene solucion.*/

/*Tres situaciones posibles. En todos los ejemplos que hemos considerado hasta ahora
el sistema de ecuaciones tiene una soluci¥on. En general, hay tres situaciones posibles, a¥un
en el caso de una ecuaci¥on con una variable:
1. 5x = 7. Hay una soluci¥on ¥unica. Se dice que el sistema de ecuaciones es consistente
determinado.
2. 0x = 3. No hay soluci¥on. Se dice que el sistema es inconsistente.
3. 0x = 0. Hay m¥as de una soluci¥on. Se dice que el sistema es consistente indeterminado*/

/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n,i,j,k;
    float a[10][10]={0.0}, x[10]={0.0};
    float pivot = 0.0;
    float factor = 0.0;
    float sum = 0.0;
    printf("Solution by Simple Gauss Elimination \n\n");

    printf("How many elements of the equations:");

    scanf("%d",&n);

    printf("%d\n",n);

    printf("\n\t Input Coefficients a[i, j+1], row-wise\n");

for(i=1;i<=n;i++)
{

    for(j=1;j<=n+1;j++)
    {
        scanf("%f",&a[i][j]);
    }

}
    printf("\n\n");
for(i=1;i<=n;i++)
{
    for(j=1;j<=n+1;j++)
    {

        printf("\t%10.0f",a[i][j]);

    }

    printf("\n\n");

}

for(k=1;k<=n-1;k++)
{

    if(a[k][k]==0.0)
    {

        printf("error");

    }
    else
    {
        pivot = a[k][k];
        for(j=k;j<=n+1;j++)
            a[k][j]= a[k][j]/pivot; 

for(i=k+1;i<=n;i++)
{
    factor = a[i][k];

    for(j = k;j<=n+1;j++)
    {
        a[i][j] = a[i][j] - factor * a[k][j];
    }
} 

} 

if(a[n][n]==0)

printf("error");

else
{

    x[n] = a[n][n+1]/a[n][n];

    for(i=n-1;i>=1;i--)
    {

        sum = 0.0;

        for(j=i+1;j<=n;j++)

        sum = sum + a[i][j] * x[j];

        x[i]= ( a[i][n+1]- sum )/a[i][i];

}

}

} 

for(i=1;i<=n;i++)
{

    printf("\n\tx[%1d]=%10.4f\n",i,x[i]); 

} 

    system("PAUSE"); 
    return 0;

}*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define SIZE 10

int main()
{
		 float a[SIZE][SIZE], x[SIZE], ratio;
		 int i,j,k,n;
		 /* Inputs */
		 /* 1. Reading number of unknowns */
		 printf("Enter number of unknowns: ");
		 scanf("%d", &n);
		 /* 2. Reading Augmented Matrix */
		 printf("Enter coefficients of Augmented Matrix:\n");
		 for(i=1;i<=n;i++)
		 {
			  for(j=1;j<=n+1;j++)
			  {
				   printf("a[%d][%d] = ",i,j);
				   scanf("%f", &a[i][j]);
			  }
		 }
		 /* Applying Gauss Jordan Elimination */
		 for(i=1;i<=n;i++)
		 {
			  if(a[i][i] == 0.0)
			  {
				   printf("Mathematical Error!");
				   exit(0);
			  }
			  for(j=1;j<=n;j++)
			  {
				   if(i!=j)
				   {
					    ratio = a[j][i]/a[i][i];
					    for(k=1;k<=n+1;k++)
					    {
					     	a[j][k] = a[j][k] - ratio*a[i][k];
					    }
				   }
			  }
		 }
		 /* Obtaining Solution */
		 for(i=1;i<=n;i++)
		 {
		  	x[i] = a[i][n+1]/a[i][i];
		 }
		 /* Displaying Solution */
		 printf("\nSolution:\n");
		 for(i=1;i<=n;i++)
		 {
		  	printf("x[%d] = %0.3f\n",i, x[i]);
		 }
		 
		 return(0);
}
