/*Este programa fue reescrito por Aldair Gonzalez el 14 de septiembre de 2018.
 En este programa nos basaremos en uno ya hecho, donde solicitaba al usuario información sobre alumnos, tal como edad, genero, semestre y promedio, pero en esta versión, tomara la información de un archivo previamente creado, y la escribira en un archivo creado por el programa.*/

#include<stdio.h>

int main(){

   int N, i, pr=0, se=0, te=0, x=0, o=0,p=0, m;
   FILE*est;
   est=fopen("estudiantes.txt", "r");
  
   fscanf(est, "%i", &N);
   int ed[N], gen[N], sem[N], prom[N];
   for(i=0; i<N;i++){
   fscanf(est, "%i %i %i %i", &ed[i], &gen[i], &sem[i], &prom[i]);
  
   o=ed[i]+o;

   x=x+gen[i];

   if(sem[i]==1) pr=pr+1;
   if(sem[i]==2) se=se+1;
   if(sem[i]==3) te=te+1;

   p=p+prom[i];
   }
   
   
   fclose(est);
   
   o=o/N;
   m=N-x;
   p=p/N;
   
   FILE*est2;
   est2=fopen("result.txt", "w");

   fprintf(est2, "Hay %i alumnos, %i mujeres y %i hombres \n", N, m, x);
   fprintf(est2, "Los alumnos tienen un promedio de edad de %i  \n", o);
   fprintf(est2, "De los estudiantes dados, %i son de primer semestre, %i de segundo y %i de tercero\n", pr, se, te);
   fprintf(est2, "El promedio de calificaciones de los estudiantes es %i \n", p);
   fclose(est2);
   return 0;
}
    

  
