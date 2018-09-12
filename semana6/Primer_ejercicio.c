/*Programa creado por Aldair Gonzalez el 10 de septiembre de 2018.
Este programa solicita informacion de un numero pre-determinado de estudiantes. Ej. que pida la edad, el sexo (0:hombre, 1:mujer), semestre (1-9) y promedio de la carrera de 10 alumnos.*/

#include<stdio.h>

int main(){

   int N, i;
   FILE*archivo;
   char var[255]:
   archivo=fopen("estudiantes.txt", "r");

   printf("Introduzca el número de estudiantes");
   scanf("%i", &N);
   float ed[N], gen[N], sem[N], prom[N];
   printf("Introduzca la edad de los estudiantes");
   for(i=0;i<N;i++){
      scanf("%f", &ed[i]);
      }
   printf("Las edades de los estudiantes, en orden, son %f\n", ed[i]);
   printf("Introduzca el genero de los estudiantes, marcando como 0 a los hombres y 1 a las mujeres");
   for(i=0;i<N;i++){
      scanf("%f", &gen[i]);
      }
   printf("Los generos, en codigo 0=hombre, 1=mujer, son %f\n", gen[i]);
   printf("Introduzca el semestre al que pertenecen dichos estudiantes");
   for(i=0;i<N;i++){
      scanf("%f", &sem[i]);
      }
   printf("El semestre al que pertenecen los estudiantes, en orden, son %f\n", sem[i]);
   printf("Introduce el promedio de calificaciones que obtuvieron");
   for(i=0;i<N;i++){
      scanf("%f", &prom[i]);
      }
   printf("El promedio obtenido por cada estudiante, en orden, es %f\n", prom[i]);
return 0;
}
