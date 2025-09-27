/*
        Programación 
    Programa que imprime 10 mensajes
    Esteban Amaury Valencia Magaña
    08/02/2023
*/
#include <stdio.h>
#include<conio.h>  

int main(){
    int i;

    printf("Buen, dia\n");
    printf("Buen, carro\n");
    printf("Buen amigo\n");
    printf("Esperanza\n");
    printf("Buena donna\n");
    printf("Esternocleidomastoideo\n");
    printf("pedro\n");
    printf("Esteban \n");
    printf("Juan\n");
    printf("Fourier\n");

    for ( i = 0; i <= 9; i++){
        printf("Hola, este es el mensaje %d de 10\n", i+1);  
    }
}