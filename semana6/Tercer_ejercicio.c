/*Programa creado el 14 de septiembre por Aldair González.
  En este programa, usaremos el ejercicio de funciones matematicas vistó en la semana 5, guardando el resultado en un archivo externo.*/

#include<stdio.h>
#include<math.h>

 int main()
{
     float x, f=0, n, e;
     FILE*res;
     
     printf("Introduzca un valor inicial para el intervalo a evaluar");
     scanf("%f", &x);
     printf("introduzca un final al intervalo a evaluar");
     scanf("%f", &n);
     printf("Introduzca un espaciado para evaluar el intervalo");
     scanf("%f", &e);
     res=fopen("resultados.txt", "w");
     fprintf(res, "Los valores escogidos para el intervalo fueron %f, y %f \n", x, n);

     for(x=f; x<n; x+=e){
         fprintf(res,"Para el número %f : \n", x); 
         f=exp(x);
         fprintf(res,"Exponencial: %f ", f);
         f=log(x);
         fprintf(res,"Logaritmica: %f ", f);
         f=sin(x);
         fprintf(res,"Seno: %f ", f);
         f=cos(x);
         fprintf(res,"Coseno: %f ", f);
         f=sqrt(x);
         fprintf(res,"Raiz cuadrada %f \n", f);
}
         fclose(res);
     return 0;
}
