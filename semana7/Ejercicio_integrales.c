/*Este programa fue creado el 17 de septiembre de 2018 por Aldair Gonzalez.
En este programa se lee de un archivo externo la potencia de la función, x^p. Donde p=>1. Tambien se debe leer el intervalo en el que se va a evaluar la función, así como el número de veces que se va a evaluar.
Ademas, calcular la integral de f(x) desde el valor mínimo del intervalo hasta el valor de x usando el método del trapecio.
Se guardan los resultados en otro archivo externo, en la primera columna el valor de x, en la segunda f(x) y en la tercera f´(x).*/

#include<stdio.h>
#include<math.h>

int main(){

    FILE*var;
    var=fopen("Integral_variable.txt", "r");
    int i, x, pot, in, fin, N, f, k, h, I;

    fscanf(var, "%i %i %i %i", &pot, &in, &fin, &N);
    for(i=in; i<fin; i=+N){
    f=pow(i, pot);
    printf("%i", i);}
    fclose(var);

    h=(fin-in)/k 
   
    for(
    
    I=h*((((xmin)+(f(x))/2) + S)

return 0;
}
    
