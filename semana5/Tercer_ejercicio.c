/*Creado por Aldair Gonzalez el 7 de septiembre de 2018.
  Este programa encuentra e imprime en la pantalla, todos los números primos en un intervalo definido por el usuario. Dicho intervalo no debe tener mas de 100 númeos primos. Imprime los números en renglones de 20 números máximo. Máximo 5 lineas a la pantalla. Sino pide que el usuario de un nuevo intervalo.*/

#include<stdio.h>
 
    int main(){
   
    int i, f, t, y, a;

    printf("Introduce el inicio del intervalo");
    scanf("%i", &i);
    printf("Introduce el final del intervalo");
    scanf("%i", &f);
    a=0;
    
    for(t=i; t>f; t++){
          for(y=1;y<=i;y++){  //Aqui verificamos si un número es primo o no.          
            if(i%y==0){
            a++;
            }}
            }
            if(a==2){
            printf("%i", i);
   } printf("%i", i);
return 0;
}
