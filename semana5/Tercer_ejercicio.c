/*Creado por Aldair Gonzalez el 7 de septiembre de 2018.
  Este programa encuentra e imprime en la pantalla, todos los números primos en un intervalo definido por el usuario. Dicho intervalo no debe tener mas de 100 númeos primos. Imprime los números en renglones de 20 números máximo. Máximo 5 lineas a la pantalla. Sino pide que el usuario de un nuevo intervalo.*/

#include<stdio.h>
 
    int main(){
     
    int d,c,f,i,a;
    printf("Introduzca el valor inicial del intervalo a evaluar");
    scanf("%i", &c);
    printf("Introduzca el valor final del intervalo a evaluar");
    scanf("%i", &f);
    a=0;
    for(d=c;d<=f;d++){
       for(i=1;i<=f;i++){
          if(c%i==0){
            a++;
            } 
          if(a==2){
            printf("%i", i);
          }else{
               printf(" ");
          }}}}
