/*Programa creado por Aldair Gonzalez el 12 de octubre de 2018.
  Este programa calcula el promedio de números dados en un archivo externo.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    int c;
    float *f, sum, de=0;
    char var[40];
    FILE *le;

    le = fopen("promedio.txt", "r");
    while (fgets(var, 40, le)!=NULL){
           c ++;
            }

    FILE *lec;
    lec=fopen("promedio.txt", "r");
    f=(float*) malloc(c*sizeof(float));

    for (int i=0; i<c; i++){
        fscanf(lec, "%f", f+i);
        sum=sum+*(f+i);
}
    fclose(lec);

    sum = sum/c;

    for (int i=0; i<c; i++){
        de=de+pow((*(f+i)-sum),2);
}

    de=de/c;
    de=sqrt(de);

free (f);

printf("Total de datos: %i\n", c);
printf("El promedio total es igual a: %f\n", sum);
printf("La desviacion standar es igual a: %f\n", de);

return 0;
}
