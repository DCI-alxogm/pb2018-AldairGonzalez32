/*Programa creado por Aldair Gonzalez, primer projecto parcial de la materia de programación basica, el 26 de septiembre de 2018.*/

#include<stdio.h>
#include<math.h>

int main(){

    double xo, yo, zo, vxo, vyo, vzo, xi, yi, zi, vix, viy, viz; //Aquí se declaran las variables que se utilizaran, los valores de las posiciones y velocidades iniciales y consecuentes, ademas del tiempo de evolución y lo necesario para calcularlo.
    float to=0, ti, h, tf;
    FILE*Dat;                               //Aquí se abre el archivo de donde se sacaran las variables.
    
    Dat=fopen("Datos.txt", "r");
    fscanf(Dat, "%lf %lf %lf %lf %lf %lf %f", &xo, &yo, &zo, &vxo, &vyo, &vzo, &h);  //Aquí me aseguro que este tomando los valores indicados para realizar el cálculo de la orbita.
    printf("Posición inicial: (%f, %f, %f) velocidad inicial %f î + %f ĵ + %f ẑ", xo, yo, zo, vxo, vyo, vzo);

    for(i=t0; i<tf; i+h){
    xi=xo+vxo*h
    yi=yo+vyo*h
    zi=xo+vzo*h
    voi=vox-(h*(G*M*xo)/r

return 0;
}
