/*
        Programación I
    Programa 3 triangulos
    Oscar Andrés Valencia Magaña
    19/09/2022
*/
/*
3. Realizar el diagrama de flujo y programa que calcule el perímetro o el área de un triángulo.
El usuario deberá ingresar los valores de los lados y la altura y elegir que operación desea
calcular, área o perímetro. Deberá verificar que los datos ingresados correspondan
realmente a los de un triángulo. Al final, el programa deberá mostrar que tipo de triángulo
es y el resultado obtenido del área o perímetro seleccionado previamente. En caso de que
los valores de los lados sean negativos o cero, así como no se tratase de un triángulo,
mandará un mensaje de error señalando por qué es el error, y salir del programa.
*/
#include <stdio.h>
#include<conio.h>  
#include<math.h>  
#include<stdbool.h> 

int validar(float r, float s, float t);
int triangular(float r, float s, float t);
int tipot(float r, float s, float t);

int main(){
    char opc;
    float a,b,c,area,sp;
    printf("Programa 3 triangulos\n");
    printf("Capture los datos del triangulo;\n");
    printf("Ingrese la medida del lado a;\n");
    scanf("%f", &a);
    printf("Ingrese la medida del lado b;\n");
    scanf("%f", &b);
    printf("Ingrese la medida del lado c;\n");
    scanf("%f", &c);
    if (validar(a,b,c)==0){
        printf("ERROR\nno existen las distancias negativas\n");
    }else {
        if (triangular(a,b,c) ==1){
            printf("Desee la opcion que desea calcular de un triangulo\nperimetro (p) o area (a)\n");
            scanf(" %c", &opc);
            if (opc == 'p' || opc == 'P'){
                printf("El perimetro del triangulo es: %f\n", a+b+c);
                if (tipot(a,b,c) == 1){
                    printf("El triangulo es equilatero, con sus lados %f, %f, %f\n", a,b,c);
                } else if (tipot(a,b,c) == 2){
                    printf("El triangulo es isosceles, con sus lados %f, %f, %f\n", a,b,c);
                } else{
                    printf("El triangulo es escaleno, con sus lados %f, %f, %f\n", a,b,c);
                }
            }else if (opc == 'a' || opc == 'A'){
                sp=(a+b+c)/2;
                area=sqrt(sp*(sp-a)*(sp-b)*(sp-c));
                printf("El area del traingulo es: %f\n", area);
                if (tipot(a,b,c) == 1){
                    printf("El triangulo es equilatero, con sus lados %f, %f, %f\n", a,b,c);
                } else if (tipot(a,b,c) == 2){
                    printf("El triangulo es isosceles, con sus lados %f, %f, %f\n", a,b,c);
                } else{
                    printf("El triangulo es escaleno, con sus lados %f, %f, %f\n", a,b,c);
                }
            }else{
                printf("ERROR\nopcion no valida\n");
            }
        } else {
            printf("ERROR\nLo tipeado no es un triangulo\n");
        }
    }
}

int tipot(float r, float s, float t){
    if (r == s == t){
        return 1;        
    } else if (r == s || r == t || s == t){
        return 2;
    } else{
        return 3;
    }    
}

int triangular(float r, float s, float t){
    if((r+s)>t && (t+s)>r && (r+t)>s){
        return 1;
    }else{
        return 0;
    }
}

int validar(float r, float s, float t){
    if (r<0 || s<0 || t<0){
        return 0;
    } else {
        return 1;
    }
}