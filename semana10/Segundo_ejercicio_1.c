
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
