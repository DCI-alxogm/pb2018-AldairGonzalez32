/*Este programa fue heco por Aldair Gonzalez el 3 de septiembre de 2018.
Es el primer ejemplo de uso de for, combinado con la función while */

#include<stdio.h>

int main()
{
    float temp_C, temp_K;
    float Temp_C=100, final=200, delta;
    int n=10, i, x;
    printf("Introduce una temperatura en grados Celsius y un número de temperaturas a convertir");
    scanf("%f", Temp_C);
    scanf("%i", x);
  
    delta= (final-Temp_C)/n;
     while(i!=x){
         for(i=0; i<x; i++){
              temp_K=temp_C+273.15;
              printf("%f %f\n", temp_C, temp_K);
              temp_C=temp_C+delta;    //   temp_C+=delta;
   }
 }
return 0;
}
