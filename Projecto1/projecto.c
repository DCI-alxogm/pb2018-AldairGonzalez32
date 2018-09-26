/*Programa creado por Aldair Gonzalez, primer projecto parcial de la materia de programación basica, el 26 de septiembre de 2018.*/

#include<stdio.h>
#include<math.h>

int main(){

    double xo, yo, zo, vxo, vyo, vzo, xi, yi, zi, vix, viy, viz, r, i, h; //Aquí se declaran las variables que se utilizaran, los valores de las posiciones y velocidades iniciales y consecuentes, ademas del tiempo de evolución y lo necesario para calcularlo.
    float to=0, tf;
    float G=4*3.141592, M=1;
    FILE*Dat;
    FILE*Res;                               //Aquí se abre el archivo de donde se sacaran las variables.
    
    Dat=fopen("Datos.txt", "r");
    fscanf(Dat, "%lf %lf %lf %lf %lf %lf %lf %f", &xo, &yo, &zo, &vxo, &vyo, &vzo, &h, &tf);  //Aquí me aseguro que este tomando los valores indicados para realizar el cálculo de la orbita.
    printf("Posición inicial: (%f, %f, %f) velocidad inicial %f î + %f ĵ + %f ẑ, h es %f y tf es %f\n", xo, yo, zo, vxo, vyo, vzo, h, tf);
    
    r=sqrt(pow(xo,2)+pow(yo,2)+pow(zo,2)); //Aqui doy valor a "r", variable necesaria para las ecuaciones.

    fclose(Dat);  

    Res=fopen("Resultados.txt", "w");

    for(i=to; i<tf; i+=h){   //Aqui se hacen los calculos para la trayectoria de los planetas.
    xi=xo+vxo*h;
    yi=yo+vyo*h;
    zi=xo+vzo*h;
    vix=vxo-(h*((G*M*xo)/pow(r,3)));
    viy=vyo-(h*((G*M*yo)/pow(r,3)));
    viz=vzo-(h*((G*M*zo)/pow(r,3)));
    fprintf(Res,"%f %f %f \n", xi, yi, zi);
    xo=xi;
    yo=yi;
    zo=zi;
    vxo=vix;
    vyo=viy;
    vzo=viz;
    }
    fclose(Res);

return 0;
}
