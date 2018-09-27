/*Programa creado por Aldair Gonzalez, primer projecto parcial de la materia de programación basica, el 26 de septiembre de 2018.*/

#include<stdio.h>
#include<math.h>

int main(){

    double xo, yo, zo, vxo, vyo, vzo, xi, yi, zi, vix, viy, viz, r, i, h; 
    float to=0, tf;
    float G=4*3.141592*3.141592, M=1;
    int opcion;     //Aquí se declaran las variables que se utilizaran, los valores de las posiciones y velocidades iniciales y consecuentes, ademas del tiempo de evolución y lo necesario para calcularlo.
    FILE*Par;
    FILE*Var;
    FILE*Res;       //Aquí se hacen las variables para los archivos que se usaran en el prograna, el archivo Var dependera del planeta escogido, de donde tomara entre 9 ficheros para escoger.
    
    printf("Escoge el planeta para el cual se hara la simulacion de orbita. \n(1) Mercurio \n(2) Venus \n(3) Tierra \n(4) Marte \n(5) Jupiter \n(6) Saturno \n(7) Urano \n(8) Neptuno \n(9) Pluton. ");
    scanf("%d", &opcion);
    Par=fopen("Parametros.txt", "r"); 
    fscanf(Par, "%lf %f", &h, &tf);       //Aquí se toman los valores de intervalo y tiempo final de la orbita de un archivo unicamente para eso, esto pensado para poder modificar los parametros sin problemas.
    printf("El intervalo entre cada evaluación es %f y el final de la evaluación es %f\n", h, tf);
    
    fclose(Par);  
    
    switch(opcion){   //Este switch es para escoger la orbita que sera evaluada, se tomaran las distintas variables necesarias para cada uno.
    case 1:
    Var=fopen("Mercurio.txt", "r");
    fscanf(Var, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
    printf("Posición inicial: (%f, %f, %f) velocidad inicial %f î + %f ĵ + %f ẑ", xo, yo, zo, vxo, vyo, vzo);
    fclose(Var);
    break;

    case 2:
    Var=fopen("Venus.txt", "r");
    fscanf(Var, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
    printf("Posición inicial: (%f, %f, %f) velocidad inicial %f î + %f ĵ + %f ẑ", xo, yo, zo, vxo, vyo, vzo);
    fclose(Var);
    break;

    case 3:
    Var=fopen("Tierra.txt", "r");
    fscanf(Var, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
    printf("Posición inicial: (%f, %f, %f) velocidad inicial %f î + %f ĵ + %f ẑ", xo, yo, zo, vxo, vyo, vzo);
    fclose(Var);
    break;

    case 4:
    Var=fopen("Marte.txt", "r");
    fscanf(Var, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
    printf("Posición inicial: (%f, %f, %f) velocidad inicial %f î + %f ĵ + %f ẑ", xo, yo, zo, vxo, vyo, vzo);
    fclose(Var);
    break;

    case 5:
    Var=fopen("Jupiter.txt", "r");
    fscanf(Var, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
    printf("Posición inicial: (%f, %f, %f) velocidad inicial %f î + %f ĵ + %f ẑ", xo, yo, zo, vxo, vyo, vzo);
    fclose(Var);
    break;

    case 6:
    Var=fopen("Saturno.txt", "r");
    fscanf(Var, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
    printf("Posición inicial: (%f, %f, %f) velocidad inicial %f î + %f ĵ + %f ẑ", xo, yo, zo, vxo, vyo, vzo);
    fclose(Var);
    break;

    case 7:
    Var=fopen("Urano.txt", "r");
    fscanf(Var, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
    printf("Posición inicial: (%f, %f, %f) velocidad inicial %f î + %f ĵ + %f ẑ", xo, yo, zo, vxo, vyo, vzo);
    fclose(Var);
    break;

    case 8:
    Var=fopen("Neptuno.txt", "r");
    fscanf(Var, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
    printf("Posición inicial: (%f, %f, %f) velocidad inicial %f î + %f ĵ + %f ẑ", xo, yo, zo, vxo, vyo, vzo);
    fclose(Var);
    break;

    case 9:
    Var=fopen("Pluton.txt", "r");
    fscanf(Var, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
    printf("Posición inicial: (%f, %f, %f) velocidad inicial %f î + %f ĵ + %f ẑ", xo, yo, zo, vxo, vyo, vzo);
    fclose(Var);
    break;

    default:
    printf("El sol y la luna no son planetas, escoge un planeta de la lista");
    scanf("%i", &opcion);
    break;

    }

    r=sqrt(pow(xo,2)+pow(yo,2)+pow(zo,2)); //Aqui doy valor a "r", variable necesaria para las ecuaciones.

    Res=fopen("Resultados.txt", "w");

    for(i=to; i<tf; i+=h){   //Aqui se hacen los calculos para la trayectoria de los planetas, usando una función ciclica que nos da los cambios poco a poco y los escribe en un archivo llamado Resultados.
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
