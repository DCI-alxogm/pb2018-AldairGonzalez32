/*Este programa fue heco por Aldair Gonzalez el 3 de septiembre de 2018.
Es el primer ejemplo de uso de for, combinado con la función while */

#include<stdio.h>

int main()
{
    float temp_C, temp_K;
    float Temp_C, final, delta;
    int n, i, o;
  
    printf("Presione 1 para convertir un rango de temperaturas en grados Celsius a Kelvin");
    scanf("%i", &o);
  while(o==1){
        printf("Introduzca una temperatura inicial para comenzar las conversiones");
        scanf("%f", &Temp_C);
        printf("Introdduzca una temperatura final para terminar las conversiones");
        scanf("%f", &final);
        printf("Introduzca un intervalo de pasos");
        scanf("%i", &n);
    delta=(final-Temp_C)/n;
        temp_C=Temp_C;
   for(i=0; i<n; i++){
       temp_K=temp_C+273.15;
       printf("%f %f\n", temp_C, temp_K);
       temp_C=temp_C+delta;      //      temp_C+delta;
       
   }
       printf("Presiona 1 para convertir un rango de temperaturas en grados Celsius a Kelvin/n");
       scanf("%i", &o);
}
return 0;
}
