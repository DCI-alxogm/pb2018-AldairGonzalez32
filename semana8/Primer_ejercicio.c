/*Este ejercicio fue hecho por Aldair Gonzalez el 3 de octubre de 2018.
Es el primer ejercicio del uso de apuntadores.*/

#include<stdio.h>

int main() {
    int var = 20 ;  //Declaración de la variable.
    int *ip;        //Declaración de la variable apuntador.
    ip = &var;      //Asigna la dirección de la variable var al apuntador *ip.

    printf("La dirección de la variable var es: %x\n", (int) &var);
    printf("Dirección guardada en el apuntador ip: %x\n", (int) ip);
    printf("El valor de *ip es %d\n", *ip);
    return 0;
}
