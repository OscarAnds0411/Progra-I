/*
        Programación I
    Programa 1 calculadora 
    Oscar Andrés Valencia Magaña
    09/11/2022
*
/*
Realiza el diagrama de flujo y programa que seleccione realizar diferentes
operaciones matemáticas (calcular el seno, coseno, tangente, raíz cuadrada,
logaritmo, logaritmo base 10, el valor elevado a una potencia “x”, valor absoluto). El
usuario ingresa el número que se desea calcular y elegir a través de un menú el
cálculo solicitado. Al terminar la operación solicitada, deberá terminar el programa. 
*/
#include <stdio.h>
#include<conio.h>  
#include<math.h>  
#include<stdbool.h> 

int main(){
    int opc;
    float num1,num2;
    printf("Programa 1 calculadora\n");
    printf("Que opcion desea calcular\n1. seno\n2. coseno\n3. tangente\n4. raiz cuadrada\n5. logaritmo\n6. logaritmo base 10\n7. el valor elevado a una potencia x\n8. valor absoluto\n");
    scanf("%d", &opc);
    switch (opc){
    case 1:
        printf("Ingrese el numero del cual desea calcular el seno:\n");
        scanf("%f", &num1);
        printf("El resultado del seno de %.3f es: %.3f\n", num1, sin(num1));
    break;
    case 2:
        printf("Ingrese el numero del cual desea calcular el coseno:\n");
        scanf("%f", &num1);
        printf("El resultado del coseno de %.3f es: %.3f\n", num1,cos(num1));
    break;
    case 3:
        printf("Ingrese el numero del cual desea calcular la tangente:\n");
        scanf("%f", &num1);
        if (cos(num1)==0){
            printf("ERROR\nno existe la tangente de %.3f\n", num1);
        }else {
            printf("El resultado de la tangente de %.3f es: %.3f\n", num1,tan(num1));
        }
    break;
    case 4:
        printf("Ingrese el numero del cual desea calcular la raiz cuadrada:\n");
        scanf("%f", &num1);
        if (num1<0){
            printf("ERROR\nno hay raiz cuadrada de numeros negativos en los reales\n");
        }else {
            printf("El resultado de la raiz cuadrada de %.3f es: %.3f\n", num1,sqrt(num1));
        }
    break;
    case 5:
        printf("Ingrese el numero del cual desea calcular el logaritmo:\n");
        scanf("%f", &num1);
        if (num1>0){
            printf("El resultado del logaritmo de %.3f es: %.3f\n", num1,log(num1));
        } else {     
            printf("ERROR\nla funcion logaritmo no esta definida para el intervalo (-oo,0]\n");
        }
    break;
    case 6:
        printf("Ingrese el numero del cual desea calcular el logaritmo base 10:\n");
        scanf("%f", &num1);
        if (num1>0){
            printf("El resultado del logaritmo base 10 de %.3f es: %.3f\n", num1,log10(num1));
        } else {     
            printf("ERROR\nla funcion logaritmo no esta definida para el intervalo (-oo,0]\n");
        }
    break;
    case 7:
        printf("Ingrese el numero el cual sera la potencia:\n");
        scanf("%f", &num2);
        printf("Ingrese el numero el cual sera elevado a la potencia %f:\n", num2);
        scanf("%f", &num1);
        printf("El resultado de %.3f elevado a la %.3f es: %.3f\n", num1,num2,pow(num1,num2));
    break;
    case 8:
        printf("Ingrese el numero del cual desea calcular el valor absoluto:\n");
        scanf("%f", &num1);
        printf("El resultado del valor absoluto de %.3f es: %.3f\n", num1,fabs(num1));
    break;
    default:
        printf("ERROR\t favor de ingresar una opcion correcta\n");
        break;
    }
}
