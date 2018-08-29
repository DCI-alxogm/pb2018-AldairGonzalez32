/*Creado por Aldair Gonzalez el 29 de agosto de 2018*/

#include<stdio.h>
#include<math.h>

int main()
{
    int opcion;
    float c, k, f;
    float x, y, z, a, b, g, p;

    printf("Teclear una opcion \n");
    printf("(1) para convertir temperaturas");
    printf("(2) para convertir coordenadas");
 
    scanf("%i", &opcion);
    while(opcion < 1 && opcion > 2){
    printf("opción invalida, escoge la opción uno o dos");
    scanf("%i", &opcion);}
    
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
    return 0;

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
          return 0;
          break;
 
    default:
          printf("Opción invalida");
          break;
}
}
