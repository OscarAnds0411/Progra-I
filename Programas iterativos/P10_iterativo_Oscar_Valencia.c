/*
        Programación I
    Programa 10 tiempo vivido
    Oscar Andrés Valencia Magaña
    15/09/2022
*/
/*
Realice el diagrama de flujo y programa que representen el algoritmo
para determinar cuántos años, meses y días ha vivido una persona
según su fecha de nacimiento con respecto a la fecha en el que se
corra el programa. El usuario deberá ingresar su fecha de nacimiento
en modo numérico. El programa deberá verificar que los números
ingresados correspondan al número de días, del mes y de los dos
últimos dígitos del año. Por otro lado, solamente verificará del 1922 a la
fecha. De lo contrario, mostrará error. 
*/
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>  
#include<time.h>  

int main(){
    int a[100],i;
    int arr_len = *(&a + 1) - a; // using pointer arithmetic
   printf("The length of the int array is: %d\n", arr_len);
        printf("\n%d\t\n",sizeof(a)/sizeof(a[0]));
    time_t tiempo = time(0);
        struct tm *tlocal = localtime(&tiempo);
        char output[128];
        strftime(output,128,"%d %m %y",tlocal);
        printf("%s\n",output);
        printf("%s\n",output[0]+output[1]);

}