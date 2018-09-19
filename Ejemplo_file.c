/*Ejemplo realizado por Aldair Gonzalez el 12 de septiembre de 2018.
En este programa vemos el uso de las variables file.*/

#include<stdio.h>

int main(){
    
    FILE*archivo;
    float var1,var2;
    

    archivo=fopen("test.txt", "w");
    fputs("Esta es una prueba de fputs...\n", archivo);
    fprintf(archivo, "fprint...\n");
    var1=0.15;
    var2=100.8;
    fprintf(archivo, "%f %f\n", var1, var2);
    fclose(archivo);
return 0;
}
