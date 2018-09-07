/*Creado por Aldair Gonzalez el 7 de septiembre de 2018.
  Este programa calcula el factorial de un número dado por el usuario, y pregunta si queremos hacer un nuevo cálculo*/

#include<stdio.h>
#include<math.h>

 int main()
{
     int x, n, i, r;
   
   while(r==1){
     printf("Introduzca un número para calcular el factorial.");
     scanf("%i", &x);
     x=n;
     if(x>1){
       for(i=x; i>1; i--){
       n=n*(i-1);
       }
       printf("El factorial del número introducido es %i.", n);
      }else{
         if(n<0){
           printf("No se puede sacar factorial de ese número.");
           }else{ 
           printf("El factorial es 1");
           }}
      printf("Presione 1 si quiere calcular otro factorial Presione cualquier otro número para terminar.");
      scanf("%i", &r);
           }
   return 0;
}
