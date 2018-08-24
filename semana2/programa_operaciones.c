/*Creado el 15 de agosto de 2018 por Aldair Gonzalez*/

#include<stdio.h>

int main()
{
    int a,b,c,d,e;
    printf("Introdusca 4 numeros enteros a, b, c y d");
    scanf("%i %i %i %i", &a, &b, &c, &d);
    e=(a+b)*c/d;
    printf("El resultado de (a+b)*c/d es %i \n", e);
    e=((a+b)*c)/d;
    printf("El resultado de ((a+b)*c)/d es %i \n", e);
    e=(a+b)+c/d;
    printf("El resultado de (a+b)*c/d es %i \n", e);
    e=a+(b*c)/d;
    printf("El resultado de a+(b*c)/d es %i \n", e);
    return 0;

}
