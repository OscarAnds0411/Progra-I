/*
        Programación I
    Programa 6 horas trabajadas
    Oscar Andrés Valencia Magaña
    19/09/2022
*/
/*
6. Realice el diagrama de flujo y programa que permita determinar el sueldo quincenal
de un trabajador con base en las horas trabajadas y el pago por hora, considerando
que a partir de la hora número 41 y hasta la 45, cada hora se le paga el doble, de la
hora 46 a la 50, el triple, y que trabajar más de 50 horas no está permitido. El usuario
deberá ingresar el nombre del trabajador, su salario por hora y el número de horas
laboradas. Al final se debe mostrar el nombre del trabajador, las horas laboradas y el
pago quincenal.
*/
#include <stdio.h>
#include<conio.h>  
#include<math.h>  
#include<string.h>  

int main(){
    int ht;
    float pph;
    char nombre[30];
    
    printf("Programa 6 sistema quincenal\n");
    printf("Bienvenido, favor de ingresar su nombre;\n");
    scanf(" %s", nombre);
   if (strlen(nombre)==0){
        printf("ERROR\nFavor de ingresar un nombre\n");
   }else{
        printf("Ingrese el precio en pesos mexicanos por hora;\n");
        scanf(" %f", &pph);
        if (pph<0){
            printf("ERROR\nFavor de ingresar algo coherente\n");
        } else{
            printf("Ingrese las horas trabajadas en la quincena;\n");
            scanf(" %d", &ht);
            if (ht<0){
                printf("ERROR\nFavor de ingresar algo coherente\n");
            } else if (ht<41){
                printf("%s ha trabajado %d horas, lo que le da un sueldo de: %f\n pesos", nombre, ht ,pph*ht);
            } else if(ht >= 41 && ht<=45){
                printf("%s ha trabajado %d horas, lo que le da un sueldo de: %f pesos\n", nombre, ht ,(2*pph*ht));
            } else if(ht>=46 && ht <= 50){
                printf("%s ha trabajado %d horas, lo que le da un sueldo de: %f\n pesos", nombre, ht ,(3*pph*ht));
            } else{
                printf("ERROR\nNo se puede laborar mas de 50 horas a la quincena\n");

            }
        }
   }  
}