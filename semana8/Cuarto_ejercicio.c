/*Ejercicio realizado por Aldair Gonzalez el 5 de octubre de 2018*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int num, i, *ptr, sum=0;
    ptr=(int*) malloc(num * sizeof(int)); //memoria reservada usando malloc
   
    printf("Introduce el numero de elementos: ");
    scanf("%d", &num);
  
    if(ptr==NULL){
       printf("Introduce los elementos del arreglo: ");
       for(i=0; i<num; ++i){
       scanf("%d", ptr + i);
       sum += *(ptr+i);
       }
    printf("sum=%d", sum);}
    free(ptr);
    return 0;
}
