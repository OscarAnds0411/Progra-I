/*
        Programación I
    Programa 7 sistema de calificaciones
    Oscar Andrés Valencia Magaña
    19/09/2022
*/
/*
Realice el diagrama de flujo y programa que, con base en una calificación
proporcionada (0-10), indique con letra la calificación que le corresponde: 10 es “A”, 9
es “B”, 8 es “C”, 7 y 6 son “D”, y de 5 a 0 son “F”.
*/
#include <stdio.h>
#include<conio.h>  
#include<math.h>  
#include<string.h>  

int main(){
// variables    
    char nombre[30];
    int ev;

    printf("Programa 7: Sistema de calificaciones de manera anglosajona\n");
    printf("Bienvenido, favor de ingresar el nombre del estudiante (sin apellidos);\n");
    scanf(" %s", nombre);
    if (strlen(nombre)==0){
        printf("ERROR\nFavor de ingresar un nombre\n");
    }else{
        printf("Favor de ingresar la calificacion asignada a %s (0-10)\n", nombre);
        scanf("%d", &ev);
        if (ev>=0 && ev<=10){
            switch (ev){
                case 10:
                    printf("La calificacion de %s es A\n", nombre);
                break;
                case 9:
                    printf("La calificacion de %s es B\n", nombre);
                break;
                case 8:
                    printf("La calificacion de %s es C\n", nombre);
                break;
                case 7:
                    printf("La calificacion de %s es D\n", nombre);
                break;
                case 6:
                    printf("La calificacion de %s es E\n", nombre);
                break;
                default:
                    printf("La calificacion de %s es F\n", nombre);
                break;
            }
        }else {
            printf("ERROR\n Favor de colocar una calificacion dentro del rango\n");
        }
    }
}