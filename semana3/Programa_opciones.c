/*Creado por Aldair Gonzalez el 22 de agosto de 2018 */

#include<stdio.h>
#include<math.h>

int main()
{
    int opcion;
    float c, k, f, e;
    float x, y, z, a, b, g;

    printf("Teclear una opcion \n");
    printf("(1) para convertir temperaturas");
    printf("(2) para convertir coordenadas");
 
    scanf("%i", &opcion);
    
    switch(opcion)
{
    case 1:
          printf("Entre en la opción 1");
          printf("Introduzca una temperatura en °C");
          scanf("%f", &c);
          k=c+273.15;
          printf("La temperatura en K es %f\n", k);
          f=((9/5)*c)+32;
          printf("La temperatura en °F es %f\n", f);
          e=(f-32)/1.8;
          printf("La temperatura en °C es %f\n", e);
    return 0;

          break;
   
    case 2:
          printf("Entre en la opción 2");
          printf("Introduzca las coordenadas cartesianas x,y y z");
          scanf("%f %f %f", &x, &y, &z);
          a=sqtr((pow(x,2)+pow(y,2)+pow(z,2)),(1-(1/2));
          printf("El valor de ρ es %f \n", a);
          b=atan(y/x);
          printf("El valor de θ es %f \n", b);
          g=acos(z/a);
          printf("El valor de ϕ es %f \n", g);
          return 0;
          break;
 
    default:
          printf("Opción invalida");
          break;
}
}
