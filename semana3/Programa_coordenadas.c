/*Creado el 20 de agosto de 2018 por Aldair Gonzalez*/

#include<stdio.h>
#include<math.h>

int main()
{
    float x,y,z,a,b,c;
    printf("Introduzca las coordenadas cartesianas x,y y z");
    scanf("%f %f %f", &x, &y, &z);
    a=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
    b=atan(y/x);
    c=acos(z/a);
    printf("Las coordenadas polares (ρ,θ,ϕ) son %f \n %f \n %f \n", a, b, c);
    return 0;
 }
