/*Programa creado por Aldair Gonzalez el 10 de octubre de 2018.
  Este programa crea una función tipo float con argumentos de entrada y de salida para tomar un número y regresar su cuadrado.*/

#include<stdio.h>

float cuadrado(float h);

int main(){
    float x, x2;
    printf("Introduce un número\n");
    scanf("%f", &x);
    x2=cuadrado(x);
    printf("El cuadrado de %f es %f\n", x, x2);
    return 0;
    }

float cuadrado(float h){
    return h*h;
    }
