/*Este ejemplo fue creado por Aldair Gonzalez el 10 de septiembre de 2018.
En este ejemplo vemos como usar los arreglos para imprimir en la pantalla los valores dados despues de ser modificados por el programa.*/

#include<stdio.h>

int main(){

int i, N;
float numeros[N]   //No es la forma optima de hacer una reserva de datos.

   scanf("%i", &N);
   for(i=0;i<N;i++){
   scanf("%f", &numeros[i]);
   numeros[i]*=2;       //Multiplica el número dado por 2
   printf("%f \n", numeros[i]);  //Imprime el valor del arreglo modificado.
   }
}
