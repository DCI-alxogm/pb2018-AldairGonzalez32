/* Programa creado por Aldair Gonzalez el 5 de septiembre de 2018.
   Este programa es el 3er ejemplo del uso de programas con la función for*/

#include<stdio.h>
#include<math.h>

int main()
{
    float res;
    int n=3, k, j;
   
    for(j=0; j<n; j++){
       for(k=0; k<n; k++){
           res=j*k*1.0;
           print("%i %i %f\n", j, k, res};
        }
    return 0;
}
