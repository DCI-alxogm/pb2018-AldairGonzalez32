/*Este programa fue creado por Aldair Gonzalez el 10 de octubre de 2018.
  Este programa utiliza 4 funciones distintas que usan o no argumentos de entrada y salida.*/

#include<stdio.h>
#include<math.h>

void uno();  //Esta no tendra argumentos de ningun tipo en la función main
float dos();  //Esta tendra argumentos de salida pero no de entrada.
void tres(float x); //Esta tendra argumento de entrada pero no de salida.
float cuatro(float x); //Esta tendra argumentos de salida y entrada.

int main(){
    float c, t;

    uno();
    t=dos();
    printf("El cuadrado del 3er número es %f", t);
   
    c=cuatro(t);
    printf("El tercer número a la 4rta potencia es %f \n",c);

    tres(t);
}

void uno(){
     float n1, n2;
   
     printf("Introduce 2 números\n");
     scanf("%f %f", &n1, &n2);
    
}

float dos(){
      float e;
      printf("Introduce un tercer número\n");
      scanf("%f", &e);
      return e*e;
      }

void tres(float s){
     float p;
     p=pow(s,s);
     printf("El tercer número elevado a sí mismo es %f", p);
}

float cuatro(float x){
      return x*x;
}

     


  

