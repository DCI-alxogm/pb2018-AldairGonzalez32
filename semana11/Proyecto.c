/*Programa creado por Aldair Gonzalez el 28 de octubre de 2016. Proyecto de 2do parcial.
 */

#include<stdio.h>
#include<stdlib.h>


int main(){

    FILE *Res;
    int i, j, n, t=0;   
    double A, B, C, D, max, o, f, e;

    printf("Introduce las temperaturas de los bordes, iniciando en el borde superior y continuando con giro hacia la derecha");
    scanf("%lf %lf %lf %lf", &A, &B, &C, &D);
    printf("La temperatura de los bordes son:\n Superior: %f \n Derecho: %f \n Inferior: %f \n Izquierdo: %f \n", A, B, C, D);
  
    printf("Introduce la medida de los lados de la placa");
    scanf("%i", &n);

    printf("Introduce el valor de epsilon");
    scanf("%lf", &e);

    double placa[n][n];

    for(i=0; i<n; i++){  //Aqui se asigna las temperaturas a los bordes de la placa.
        placa[i][0]=A;
        placa[n-1][i]=B;
        placa[i][n-1]=C;
        placa[0][i]=D;
        }

    placa[0][0]=(placa[1][0] + placa[0][1])/2;   //Aquí se dan valores a las esquinas de la placa
    placa[n-1][0]=(placa[n-2][0] + placa[n-1][1])/2;
    placa[n-1][n-1]=(placa[n-2][n-1] + placa[n-1][n-1])/2;
    placa[0][n-1]=(placa[0][n-2] + placa[1][n-1])/2;

    for(int j=1 ; j<n-1; j++){
	for(int i=1; i<n-1 ;i++){
           placa[i][j]=0.0;	
	   }
       }
 
    for(j=0; j<n; j++){      //Aquí pruebo como se imprime
       for(i=0; i<n; i++){
           printf("%f ", placa[i][j]);
           } 
       printf("\n");
        }
    
    printf("\n");
    Res = fopen("Resultados.txt", "w");
    while(max>e || t<30){
    t++;
    for(j=0; j<n; j++){
        for(i=0; i<n; i++){
            
           if(i==0 || i==n-1 || j==0 || j==n-1){
              if((i==0 && j==0) || (i==n-1 && j==0) || (i==0 && j==n-1) || (i==n-1 && j==n-1)){
              placa[i][j]=(placa[i+1][j]+placa[i-1][j]+placa[i][j+1]+placa[i][j-1])/2;
              }
              o=placa[n/2][n/2];
              placa[i][j]=(placa[i+1][j]+placa[i-1][j]+placa[i][j+1]+placa[i][j-1])/3;
              }else{
              placa[i][j]=(placa[i+1][j]+placa[i-1][j]+placa[i][j+1]+placa[i][j-1])/4;
               }
               fprintf(Res, "%f ", placa[i][j]);
               f=placa[n/2][n/2];
               max=(f-o)/o;
               }
               fprintf(Res, "  \n"); 
               }fprintf(Res, "  \n");
         }
}

