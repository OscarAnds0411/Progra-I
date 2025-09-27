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
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h> 

int main(){
    int anio, mes, dia, anio2, mes2, dia2, cont=0, i, j;  //Declaración de Variables
          printf("Introduce el año en que naciste:\n ");  //Lo que aparece en pantalla
          scanf("%i", &anio);  //Guarda lo que has escrito
          printf("Introduce el mes en que naciste:\n ");
          scanf("%i", &mes);
          printf("Introduce el dia en que naciste:\n ");
          scanf("%i", &dia);
          printf("Introduce el año actual:\n ");
          scanf("%i", &anio2);
          printf("Introduce el mes actual:\n ");
          scanf("%i", &mes2);
          printf("Introduce el dia actual:\n ");
          scanf("%i", &dia2);
          if (anio2 <= 1922){
               printf("ERROR\tmal uso del programa\n");
          }else {
                     
               //Años Vividos
               for (i=anio; i<=anio2-2; i++) {  //Bucle for
               if (i%4==0) {  //if
                    cont=cont+366;
               }
               else {
                    cont=cont+365; 
               }
               }

               //Primeros Meses Vividos
               for (i=mes+1; i<=12; i++) {
               switch(i) {
                    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                         cont=cont+31;
                    break;
                    case 4: case 6: case 9: case 11:
                         cont=cont+30;
                    break;
                    case 2:
                         if (anio%4==0) {
                              cont=cont+29;
                         }
                         else {
                              cont=cont+28;
                              }
                    break;
                    }
               }
               //Últimos Meses Vividos
               for (j=1; j<=mes2-1; j++) {
               switch(j) {
                    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                         cont=cont+31;
                    break;
                    case 4: case 6: case 9: case 11:
                         cont=cont+30;
                    break;
                    case 2:
                         if (anio%4==0) {
                              cont=cont+29;
                         }
                         else {
                              cont=cont+28;
                              }
                    break;
                    }
               }




               //Primeros Días Vividos
               switch (mes) {  //Opciones
               case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                    cont=cont+(31-dia);
               break;
               case 4: case 6: case 9: case 11:
                    cont=cont+(30-dia);
               break;
               case 2:
                    if (anio%4==0) {
                         cont=cont+(29-dia);
                    }
                    else {
                         cont=cont+(28-dia);
                    }
               break;
               }
               //Últimos Días Vividos
               switch (mes2) {
               default:
                    cont=cont+dia2;
               break;
               }
               double ayuda =cont/365, ayuda2=ayuda*12, ayuda3=ayuda2*4.34524;
               printf ("Has vivido: %i dias\t %.0lf anios \t %.0lf meses\t %.0lf semanas\n", cont, ayuda, ayuda2, ayuda3); 
          }
}