/*Este programa fue creado por Aldair Gonzalez el 10 de octubre de 2018.
  Este programa usa una función sin argumento de entrada pero con argumento de salida para tomar un número y devolver su cuadrado.*/

#include<stdio.h>

float cuadrado();

int main(){
    float x2;
    x2=cuadrado();
    printf("es %f\n", x2);
    }

float cuadrado(){
    float x;
    printf("Introduce un número\n");
    scanf("%f", &x);
    printf("El cuadrado de %f ", x);
    return x*x;
    }

