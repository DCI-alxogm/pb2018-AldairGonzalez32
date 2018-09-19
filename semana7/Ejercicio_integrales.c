/*Este programa fue creado el 17 de septiembre de 2018 por Aldair Gonzalez.
En este programa se lee de un archivo externo la potencia de la función, x^p. Donde p=>1. Tambien se debe leer el intervalo en el que se va a evaluar la función, así como el número de veces que se va a evaluar.
Ademas, calcular la integral de f(x) desde el valor mínimo del intervalo hasta el valor de x usando el método del trapecio.
Se guardan los resultados en otro archivo externo, en la primera columna el valor de x, en la segunda f(x) y en la tercera f´(x).*/

#include<stdio.h>
#include<math.h>

int main(){

    FILE*lec;
    lec=fopen("Integral_variable.txt", "r"); //Aqui abro el archivo de lectura de donde sacare algunas variables.
    int p, in, x, N, i, k, y, h; //Aquí meto las variables que usare, p es la potencia, in es el inicio del intervalo a evaluar, x es la variable en que se evaluaran las funciones y el termino de mi intervalo, N es el número de particiones en la función, i es para los for, k son las divisiones para la integral, y es para ayudar en el cálculo de la sumatoria al igual que h.
    float sum, f, I; //Estas variables me ayudaran para calcular la sumatoria de la integral e imprimir f(x) y F(x)

    fscanf(lec, "%i %i %i %i %i", &p, &in, &x, &N, &k); 
    
    FILE*esc;
    esc=fopen("Resultados.txt", "w"); //aqui abro el archivo donde se escribiran los resultados.
    h=(x-in)/k;    //Aquí declaro la variable h, necesaria para hacer la integral.
    for(i=1; i<=k; i++){
    y=pow((in+i*h), p);
    sum=y+sum;}  //Aquí hago la sumatoria necesaria para el método de integración.

    for(i=in; i<=x; i++){
    fprintf(esc, "El valor de x es %i \n", i);
    f=pow(i, p);
    fprintf(esc, "El valor de f(x) es %f \n", f);
    I=((in+x)/2)+sum;
    fprintf(esc, "El valor de F(x) es %f \n", I);
    } //En este for hice la impresión de resultados de i, f(x) y F(x)
    fclose(lec);
    fclose(esc);
return 0;
}
    
