#include<stdio.h>
 int main(){

int num1,i,a;

a=0; 

printf("Introduce un numero: ");
scanf("%i",&num1);

for(i=1;i<=num1;i++)
{
    if(num1%i==0) // si num1 módulo de i es 0, incrementamos a en 1.
    a++;
}


if(a==2)
{
    printf("%i", num1);
}
else
{
    printf(" "); 
}


}

