/*Programa creado por Aldair Gonzalez el 10 de septiembre de 2018.
Este programa solicita informacion de un numero pre-determinado de estudiantes. Ej. que pida la edad, el sexo (0:hombre, 1:mujer), semestre (1-9) y promedio de la carrera de 10 alumnos.*/

#include<stdio.h>

int main(){

   int N, i;

   printf("Introduzca el número de estudiantes");
   scanf("%i", &N);
   float ed[N], gen[N], sem[N], prom[N];
   printf("Introduzca la edad de los estudiantes");
   for(i=0;i<N;i++){
      scanf("%f", &ed[i]);
      printf("La edad del estudiante %i es : %f \n",i+1, ed[i]); 
      }
   printf("Introduzca el genero de los estudiantes, marcando como 0 a los hombres y 1 a las mujeres");
   for(i=0;i<N;i++){
      scanf("%f", &gen[i]);
      if(gen[i]==0){
      printf("El estudiante es hombre\n");}
      else{
      printf("El estudiante es mujer\n");}
      }
   printf("Introduzca el semestre al que pertenecen dichos estudiantes");
   for(i=0;i<N;i++){
      scanf("%f", &sem[i]);
      printf("El semestre que cursa el estudiante %i es : %f \n",i+1, sem[i]);
      }
   printf("Introduce el promedio de calificaciones que obtuvieron");
   for(i=0;i<N;i++){
      scanf("%f", &prom[i]);
      printf("El promedio del estudiante %i es : %f \n",i+1, prom[i]);
      }
return 0;
}
