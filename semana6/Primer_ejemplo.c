/* Este ejemplo fue realizado por Aldair Gonzalez el 10 de septiembre de 2018.
En este ejemplo comenzamos a ver el uso de los arreglos en programas.*/
#include<stdio.h>

int main(){

int i, N=10;
int numeros[N];

   for(i=0; i<N; i++){
       numeros[i]=0;
}

   for(i=0;i<N;i++){
      printf("Introduce los 10 números");
      scanf("%i", &numeros[i]);
      }

   for(i=0;i<N;i++){
      printf("%i \n", numeros[i]);
      }
}

