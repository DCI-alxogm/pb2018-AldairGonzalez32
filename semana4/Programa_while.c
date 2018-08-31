/*Creado por Aldair Gonzalez el 29 de agosto de 2018
Este programa es una mejora a la combinacion de los programas de opciones, donde podias escoger si convertir temperaturas o coordenadas cartesianas, la mejora mostrada es que se puede salir del programa cuando el usuario diga y no despues de un uso, como lo hacia el anterior*/

#include<stdio.h>
#include<math.h>

int main()
{
    int opcion;
    float c, k, f;
    float x, y, z, a, b, g, p;

    printf("Teclear una opcion \n");
    printf("(1) para convertir temperaturas \n");
    printf("(2) para convertir coordenadas \n");
    printf("Cualquier otra tecla para salir del programa \n");
 
    scanf("%i", &opcion);
    while(opcion==1 || opcion==2){
    
    switch(opcion)
{
case 1:
          printf("Entró en la opción 1");
          printf("Introduzca una temperatura en °C");
          scanf("%f", &c);
          k=c+273.15;
          printf("La temperatura en K es %f\n", k);
          f=((1.8)*c)+32;
          printf("La temperatura en °F es %f\n", f);
          printf("La temperatura en °C es %f\n", c);

break;

case 2:
          printf("Entró en la opción 2");
          printf("Introduzca las coordenadas cartesianas x,y y z");
          scanf("%f %f %f", &x, &y, &z);
          p=((pow(x,2))+(pow(y,2))+(pow(z,2)));
          a=sqrt(p);
          printf("El valor de ρ es %f \n", a);
          b=atan(y/x);
          g=acos(z/a);
          if(x>=0 && y>=0 && z>=0){
          printf("El valor de θ es %f \n", b);
          }if(x<=0 && y>=0 && z>=0){
          b=b+180;
          printf("El valor de θ es %f \n", b);
          }if(x<=0 && y<=0 && z>=0){
          b=b+180;
          printf("El valor de θ es %f \n", b);
          }else{
          printf("El valor de θ es %f \n", b);
          b=b+360;
          }printf("El valor de ϕ es %f \n", g);
          break;
 
}
          printf("Presiona 1 para seleccionar el convertidos de temperaturas \n");
          printf("Presiona 2 para seleccionar el convertidor de coordenadas \n");
          printf("Presiona cualquier otra tecla para salir del programa \n");
          scanf("%i", &opcion);
}
          return 0;
}
