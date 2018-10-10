/*Programa creado por Aldair Gonzalez el 10 de octubre de 2018.
  Este programa crea una función tipo void para sacar el cuadrado de un número dado.*/

#include<stdio.h>

void cuadrado();

int main(){
    cuadrado();
    return 0;
    }

void cuadrado( ){
     float x, x2;
     printf("Introduce un número \n");
     scanf("%f", &x);
     x2=x*x;
     printf("El cuadrado de %f es %f\n", x, x2);
     }

