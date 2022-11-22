/*
        Programación I
    Programa 1 numeros pares
    Oscar Andrés Valencia Magaña
    15/09/2022
*/
/*
Realiza el diagrama de flujo y programa que resuelva un sistema de
ecuaciones de 2x2 y 3x3. El usuario deberá elegir entre ambos
sistemas a calcular. Al final deberá mostrar las soluciones del sistema,
o en su caso mencionar si tiene infinitas soluciones o no tiene solución.
*/
/* Program to solve the given system of equations

x1 - x2 + x3 = 1
-3x1 + 2x2 - 3x3 = -6
2x1 - 5x2 + 4x3 = 5

We will use Gauss Elimination Method to solve it */

#include <stdio.h>
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

    printf("\n\tx[%1d]=%10.4f",i,x[i]); 

} 

    system("PAUSE"); 
    return 0;

}