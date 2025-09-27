/*
        Programación I
    Programa 1 numeros pares
    Oscar Andrés Valencia Magaña
    15/09/2022
*/
/*
Realiza el diagrama de flujo y programa que resuelva un sistema de
ecuaciones de 2x2 y 3x3. El usuario debera elegir entre ambos
sistemas a calcular. Al final debera mostrar las soluciones del sistema,
o en su caso mencionar si tiene infinitas soluciones o no tiene solucion.*/

/*Tres situaciones posibles. En todos los ejemplos que hemos considerado hasta ahora
el sistema de ecuaciones tiene una soluci�on. En general, hay tres situaciones posibles, a�un
en el caso de una ecuaci�on con una variable:
1. 5x = 7. Hay una soluci�on �unica. Se dice que el sistema de ecuaciones es consistente
determinado.
2. 0x = 3. No hay soluci�on. Se dice que el sistema es inconsistente.
3. 0x = 0. Hay m�as de una soluci�on. Se dice que el sistema es consistente indeterminado*/
/*determinante 3x3
|abc|
|def| =aei+bgf+cdh-(ahf+bdi+cge)
|ghi|

determinante 2x2
|ab|
|cd|=ad-cb*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define scn scanf
#define prnt printf
#define Det2x2(a,b,c,d) ((a*d)-(c*b)) 
#define Det3x3(a,b,c,d,e,f,g,h,i) ((a*e*i)+(b*g*f)+(c*d*h)-((a*h*f)+(b*d*i)+(c*g*e)))

int main(){
    int opc, j, k;
    float x,y,z,dets,detx,dety,detz;

    while (opc != 3){     
        prnt("Programa 8: \t Sistema de ecuaciones lineales\n");    
        prnt("Elija la dimension del sistema \n1. Sistema 2x2 \n2. Sistema 3x3\n3. Salir\n");
        scn("%d", &opc);
        if (opc == 1){
            float coef[2][3];
            for (j = 0; j < 2; j++){
                for ( k = 0; k < 3; k++){
                    prnt("ingrese el termino %d,%d de la matriz asociada al sistema de ecuaciones lineales\n", j+1,k+1);
                    scn("%f", &coef[j][k]);
                }
            }
            dets=Det2x2(coef[0][0],coef[0][1],coef[1][0],coef[1][1]);
            detx=Det2x2(coef[0][2],coef[0][1],coef[1][2],coef[1][1]);
            dety=Det2x2(coef[0][0],coef[0][2],coef[1][0],coef[1][2]);
            if (dets == 0 && detx != 0 && dety!= 0){
                prnt("ERROR\tEL sistema no tiene solucion\n");
            } else if(dets == 0 && detx == 0 && dety == 0){
                prnt("ERROR\tEl sistema tiene infinitas soluciones\n");
            } else{            
                x=detx/dets;
                y=dety/dets;
                prnt("Sistema de 2x2\nsoluciones:\nx=%.3f\ty=%.3f\n", x , y);
            }
            system("pause");
            system("cls");
        } else if (opc == 2){
            float coef[3][4];
            for ( j = 0; j < 3; j++){
                for (k = 0; k < 4; k++){
                    prnt("ingrese el termino %d,%d de la matriz asociada al sistema de ecuaciones lineales\n", j+1,k+1);
                    scn("%f", &coef[j][k]);
                }
            }
            dets=Det3x3(coef[0][0],coef[0][1],coef[0][2],coef[1][0],coef[1][1],coef[1][2],coef[2][0],coef[2][1],coef[2][2]);
            detx=Det3x3(coef[0][3],coef[0][1],coef[0][2],coef[1][3],coef[1][1],coef[1][2],coef[2][3],coef[2][1],coef[2][2]);
            dety=Det3x3(coef[0][0],coef[0][3],coef[0][2],coef[1][0],coef[1][3],coef[1][2],coef[2][0],coef[2][3],coef[2][2]);
            detz=Det3x3(coef[0][0],coef[0][1],coef[0][3],coef[1][0],coef[1][1],coef[1][3],coef[2][0],coef[2][1],coef[2][3]);
            if (dets == 0 && detx != 0 && dety!= 0 && detz != 0){
                prnt("ERROR\tEL sistema no tiene solucion\n");
            } else if(dets == 0 && detx == 0 && dety == 0 && detz == 0){
                prnt("ERROR\tEl sistema tiene infinitas soluciones\n");
            } else{            
                x=detx/dets;
                y=dety/dets;
                z=detz/dets;
                prnt("Sistema de 3x3\nsoluciones:\nx=%.3f\ty=%.3f\tz=%.3f\n", x , y, z);
            }
            system("pause");
            system("cls");
        } else if (opc == 3){
            prnt("Adios c:\n");
            system("pause");
        } else{
            prnt("ERROR\t favor de ingresar una opcion correcta\n");
            system("pause");
            system("cls");
        }
    }    
}