/*Creado el 20 de agosto de 2018 por Aldair Gonzalez*/

#include<stdio.h>

int main()
{
    int c, k, f, e;
    printf("Introduzca una temperatura en °C");
    scanf("%i", &c);
    k=c+273.15;
    printf("La temperatura en K es %i\n", k);
    f=((9/5)*c)+32;
    printf("La temperatura en °F es %i\n", f);
    e=(f-32)/(1.8);
    printf("La temperatura en °C es %i\n", e);
    return 0;

}
