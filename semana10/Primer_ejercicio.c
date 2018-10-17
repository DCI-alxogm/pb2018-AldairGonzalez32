/*Hacer un programa que genere una secuencia de coordenadas x,y,z, que formen un arreglo de puntos igualmente espaciados en las 3 direcciones. Dar desde la linea de comandos: nombre del archivo donde se guardaran los datos, numero de puntos en el arreglo (debe ser un numero de la fomra n³ <<3 dimensiones >>), y la separación entre los puntos (o bien, la distancia mas grande entre los puntos en una dimensión, 1 lado del cubo)*/

#include<stdio.h>
#include<stdlib.h>

int main(int n, char *let[], float d){

        char *nombre_archivo;
        int i;
        float x[n], y[n], z[n];
        FILE *arc;

        nombre_archivo=let[1];
        arc=fopen(nombre_archivo, "w+");
        printf("Introduzca el inicio para cada coordanada x, y, y z");
        scanf("%f %f %f", &x[1], &y[1], &z[1]);
        
        fprintf(arc, "x     y      z\n  %f          %f         %f\n", x[1], y[1], z[1]);
        for(i=0;i<=n;i++){
           x[i]=x[i]+d;
           x[i]=x[i]+d;
           x[i]=x[i]+d;
           fprintf(arc, "%f        %f        %f\n", x[i], y[i], z[i]); 
        }
return 0;
}
            
        

