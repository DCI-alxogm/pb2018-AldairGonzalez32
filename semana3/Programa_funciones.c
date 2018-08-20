/*Creado el 20 de agosto de 2018 por Aldair Gonzalez*/

#include<stdio.h>
#include<math.h>
 
int main()
{
    int x,r,y,p;
    printf("Introduce un numero");
    scanf("%i",&x);
    p=3.14159265359;
    r=(x*p)/180;
    y=exp(-r);
    printf("El valor de la funcion y=exp(-x) es %i \n", y);
    y=cos(r) + 2*tan(r/2);
    printf("El valor de la funcion y=cos(x) + 2tan(x/2) es %i \n", y);
    y=log(x)+3*x*x;
    printf("El valor de la funcion y=log(x)+3x² es %i \n", y);
    return 0;

}
