/*Creado por Aldair Gonzalez el 5 de septiembre de 2018.
  Este es el primer ejercicio del uso de for que se comenzaron a realizar desde la fecha ya dada.
  Trata sobre evaluar funciones exponenciales, logaritmicas, de seno y coseno de un valor dado, ademas de su raiz cuadrada de una variable, en un intervalo y con un espaciado definido por le usuario.*/

#include<stdio.h>
#include<math.h>

 int main()
{
     float x, f, n, e;
     printf("Introduzca un valor inicial para el intervalo a evaluar");
     scanf("%f", &x);
     printf("introduzca un final al intervalo a evaluar");
     scanf("%f", &n);
     printf("Introduzca un espaciado para evaluar el intervalo");
     scanf("%f", &e);
     
     for(x=f; x<n; x+=e){ 
         f=exp(x);
         printf("Exponencial: %f", f);
         f=log(x);
         printf("Logaritmica: %f", f);
         f=sin(x);
         printf("Seno: %f", f);
         f=cos(x);
         printf("Coseno: %f", f);
         f=sqrt(x);
         printf("Raiz cuadrada %f", f);
}
     return 0;
}


     


