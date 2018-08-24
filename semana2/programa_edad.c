/*Creado el 13 de agosto de 2018 por Aldair Gonzalez*/

#include<stdio.h>

int main ()
{ 
    int edad;

    printf("Hola Aldair \n");
    printf("Este es el 1er programa del curso");
    printf("Introduce tu edad: \n");
    scanf("%i", &edad);
    printf("\nTu edad es: %i \n", edad);
    edad=edad+10;
    printf("\nTu edad en el 2028 sera: %i \n",edad);
    return 0;
}
