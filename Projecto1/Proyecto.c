/*Programa creado por Aldair Gonzalez, primer projecto parcial de la materia de programación basica, el 26 de septiembre de 2018.*/

#include<stdio.h>
#include<math.h>

int main(){

    double xo, yo, zo, vxo, vyo, vzo, r, i, h; 
    float tf;
    float G, M=1;
    int p=1;     //Aquí se declaran las variables que se utilizaran, los valores de las posiciones y velocidades iniciales y consecuentes, ademas del tiempo de evolución y lo necesario para calcularlo.
    
    FILE*Var;
    FILE*Res;       //Aqui se hacen las variables de los ficheros necesarios para el programa
    
    printf("Escoge el planeta para el cual se hara la simulacion de orbita. \n(1) Mercurio \n(2) Venus \n(3) Tierra \n(4) Marte \n(5) Jupiter \n(6) Saturno \n(7) Urano \n(8) Neptuno \n(9) Pluton. ");
    Var=fopen("Datos.txt", "r");
    fscanf(Var, "%lf %f", &h, &tf);       //Aquí se toman los valores de intervalo y tiempo final de la orbita.
    printf("El intervalo entre cada evaluación es %f y el final de la evaluación es %f\n", h, tf); //imprimo el valor de h y tf para asegurarme de que funcionan.
        
    for(p=1;p<10;p++){ //Este for se usa para dar distintos valores de switch, y así realizar todos los casos, uno tras otro, esto también permite modificar el programa facilmente para graficar una sola orbita a elección del usuario.

    switch(p){   //Este switch es para escoger la orbita que sera evaluada, se tomaran las distintas variables necesarias para cada uno.
    case 1:     //Cada caso dara valores distintos a las variables de posición y velocidad inicial para hacer la evaluación de cada planeta.
    Res=fopen("Mercurio.txt", "w");
    fscanf(Var, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
    printf("Valores de Mercurio\n Posición inicial: (%f, %f, %f) velocidad inicial %f î + %f ĵ + %f ẑ\n", xo, yo, zo, vxo, vyo, vzo);
    break;

    case 2:
    Res=fopen("Venus.txt", "w");
    fscanf(Var, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
    printf("Valores de Venus \n Posición inicial: (%f, %f, %f) velocidad inicial %f î + %f ĵ + %f ẑ\n", xo, yo, zo, vxo, vyo, vzo);
    break;

    case 3:
    Res=fopen("Tierra.txt", "w");
    fscanf(Var, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
    printf("Valores de Tierra\n Posición inicial: (%f, %f, %f) velocidad inicial %f î + %f ĵ + %f ẑ\n", xo, yo, zo, vxo, vyo, vzo);
    break;

    case 4:
    Res=fopen("Marte.txt", "w");
    fscanf(Var, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
    printf("Valores de Marte\n Posición inicial: (%f, %f, %f) velocidad inicial %f î + %f ĵ + %f ẑ\n ", xo, yo, zo, vxo, vyo, vzo);
  
    break;

    case 5:
    Res=fopen("Jupiter.txt", "w");
    fscanf(Var, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
    printf("Valores de jupiter\n Posición inicial: (%f, %f, %f) velocidad inicial %f î + %f ĵ + %f ẑ\n", xo, yo, zo, vxo, vyo, vzo);
    
    break;

    case 6:
    Res=fopen("Saturno.txt", "w");
    fscanf(Var, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
    printf("Valores de Jupiter\n Posición inicial: (%f, %f, %f) velocidad inicial %f î + %f ĵ + %f ẑ \n", xo, yo, zo, vxo, vyo, vzo);
    
    break;

    case 7:
    Res=fopen("Urano.txt", "w");
    fscanf(Var, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
    printf("Valores de Urano\n Posición inicial: (%f, %f, %f) velocidad inicial %f î + %f ĵ + %f ẑ\n", xo, yo, zo, vxo, vyo, vzo);
    
    break;

    case 8:
    Res=fopen("Neptuno.txt", "w");
    fscanf(Var, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
    printf("Valores de Neptuno\n Posición inicial: (%f, %f, %f) velocidad inicial %f î + %f ĵ + %f ẑ\n", xo, yo, zo, vxo, vyo, vzo);
    
    break;

    case 9:
    Res=fopen("Pluton.txt", "w");
    fscanf(Var, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
    printf("Valores de Pluton\nPosición inicial: (%f, %f, %f) velocidad inicial %f î + %f ĵ + %f ẑ\n", xo, yo, zo, vxo, vyo, vzo);
    
    break;

    }
    r=sqrt((xo*xo)+(yo*yo)+(zo*zo));
    G=4.0*pow(3.14159265359,2);
    vxo*=365.242;
    vyo*=365.242;
    vzo*=365.242;

    for(i=0; i<tf; i+=h){   //Aqui se hacen los calculos para la trayectoria de los planetas, usando una función ciclica que nos da los cambios con un intervalo h, escribiendo los resultados en distintos archivos para cada planeta evaluado.
    
    xo=xo+vxo*h;
    yo=yo+vyo*h;
    zo=zo+vzo*h;
    
    vxo=vxo-(h*((G*M*xo)/pow(r,3)));
    vyo=vyo-(h*((G*M*yo)/pow(r,3)));
    vzo=vzo-(h*((G*M*zo)/pow(r,3)));
    fprintf(Res,"%f %f %f %f %f %f \n", xo, yo, zo, vxo, vyo, vzo);
    
    }
   
    fclose(Res);  //Por ultimo, cierro el fichero donde escribí los datos.
    }
return 0;
}
