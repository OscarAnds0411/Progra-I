/*
        Programación I
    Programa 5 tiempo vivido
    Oscar Andrés Valencia Magaña
    19/09/2022
*/
/*
5. Realice el diagrama de flujo y programa que representen el algoritmo para determinar
cuántos meses, semanas y días ha vivido una persona según su fecha de nacimiento
con respecto a la fecha que se corra el programa. El usuario deberá ingresar su fecha
de nacimiento en modo numérico. Deberá revisar que los números correspondan a
los días meses y año. De lo contrario, mostrará error.
*/
#include <stdio.h>
#include<conio.h>  
#include<math.h>  
#include<time.h>  

int main(){
    time_t inicio = time(NULL);
    printf("Inicio: %llu\n", inicio);
    printf("Como fecha: ");
    imprimirFechaAPartirDeTimestamp(inicio);
    printf("\n");
    printf("Presiona Enter cuando quieras\n");
    // Esperar a que el usuario presione Enter. Realmente esta espera podría ser cualquiera
    // y podría ser en cualquier circunstancia
    getchar();
    time_t fin = time(NULL);
    printf("Fin: %llu\n", fin);
    printf("Como fecha: ");
    imprimirFechaAPartirDeTimestamp(fin);
    printf("\n");
    time_t diferencia = fin - inicio;
    imprimir_d
    iferencia(diferencia);
    return 0;
}

    //printf("Programa 5 tiempo vivido\n");

void imprimir_diferencia(time_t diferencia)
{
    unsigned long long int horas = diferencia / 60 / 60;
    diferencia -= 60 * 60 * horas;
    unsigned long long int minutos = diferencia / 60;
    diferencia -= 60 * minutos;
    printf("%llu hora(s) %llu minuto(s) %llu segundo(s)\n", horas, minutos, diferencia);
}

void imprimirFechaAPartirDeTimestamp(time_t tiempo)
{
    struct tm *tm = localtime(&tiempo);
    printf("%02d/%02d/%02d %02d:%02d:%02d",
           tm->tm_mday, tm->tm_mon + 1,
           tm->tm_year + 1900,
           tm->tm_hour,
           tm->tm_min,
           tm->tm_sec);
}