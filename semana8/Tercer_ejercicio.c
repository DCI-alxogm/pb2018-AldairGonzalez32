/*Programa creado por Aldair Gonzalez el 4 de octubre de 2018*/

#include<stdio.h>

int main(){
    int MAX=3;
    int var[] = {10, 100, 200};
    int i, *ptr;  //Asignamos la direccion del arreglo al apuntador
    ptr=&var;

    for(i=0;i<MAX;i++){
       printf("La dirección de la variable var[%d] = %d\n", i, *ptr);
        //Nos movemos a la siguiente posición de la memoria
       ptr++;
       }
    return 0;
}

