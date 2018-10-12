/*Creado por Aldair Gonzalez el 12 de octubre de 2018.
  Este programa analiza los números en un archivo externo y determina cual es el de valor mayor*/

#include <stdio.h>
#include<stdlib.h>

int main(){

	FILE *le;
	int N=0, p;	
	float *n, m=-10000000, *s;
	char num[20];

	le=fopen("num_maximo.txt", "r");
	while(fgets(num, 20, le)!=NULL){
		N++;	
	}
	fclose(le);

	
	le=fopen("num_maximo.txt", "r");

	n= (float*) malloc (N*sizeof(float));

	for(int i=0 ; i<N ; i++){		
		fscanf(le, "%f", n+i);
		if(*(n+i)>m){
			m=*(n+i);	
			p=i+1;
			s=n;		
		}
	}

	printf("El número mayor de la lista es: %f \n con posición %i en la memoria \n en el lugar %i del arreglo\n", m, s, p);
	printf("El arreglo es de tamaño: %i \n", N);

	free(n);

	return 0;
}
