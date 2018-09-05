/*Este programa fue creado por Aldair Gonzalez el 5 de septiembre de 2018.
  Es el segundo ejemplo del uso de programas con la función for*/

#include<stdio.h>
#include<math.h>

 int main()
{
     float exp_;
     int n=10, j;

     for(j=0;j<n;j++){
        exp_=exp(j);
        printf("%i \t %f\n", j, exp_);
     }
   return 0;
}
