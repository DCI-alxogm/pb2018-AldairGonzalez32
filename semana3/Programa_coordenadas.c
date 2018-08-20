/*Creado el 20 de agosto de 2018 por Aldair Gonzalez*/

#include<stdio.h>
#include<math.h>

int main()
{
    int x,y,z,a,b,c;
    printf("Introduzca las coordenadas cartesianas x,y y z");
    scanf("%i %i %i", &x, &y, &z);
    a=pow((pow(x,2)+pow(y,2)+pow(z,2)),(1-(1/2)));
    b=atan(y/x);
    c=acos(z/a);
    printf("Las coordenadas polares (ρ,θ,ϕ) son %i \n %i \n %i \n", a, b, c);
    return 0;
 }
