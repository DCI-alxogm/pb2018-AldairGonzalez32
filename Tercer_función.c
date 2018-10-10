/*Este programa fue creado por Aldair Gonzalez el 10 de octubre de 2018.
  Este programa usa una función con un argumento de entrada pero sin argumento de salida, para tomar un número y devolver su cuadrado*/

#include<stdio.h>
 
void cuadrado(float x);

int main(){
    float x;
    printf("Introduce un número\n");
    scanf("%f", &x);
    cuadrado(x);
    return 0;
}

void cuadrado(float x){
     float x2;
     x2=x*x;
     printf("El cuadrado de %f es %f\n", x, x2);
     }
