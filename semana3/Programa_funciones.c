/*Creado el 20 de agosto de 2018 por Aldair Gonzalez*/

#include<stdio.h>
#include<math.h>
 
int main()
{
    float x,r,y,p;
    printf("Introduce un numero");
    scanf("%f",&x);
    p=3.14159265359;
    r=(x*p)/180;
    y=exp(-x);
    printf("El valor de la funcion y=exp(-x) es %f \n", y);
    y=cos(r) + 2*tan(r/2);
    printf("El valor de la funcion y=cos(x) + 2tan(x/2) es %f \n", y);
    y=log(x)+3*x*x;
    printf("El valor de la funcion y=log(x)+3x² es %f \n", y);
    return 0;

}
