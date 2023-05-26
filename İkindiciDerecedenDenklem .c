#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int a,b,c;
   float delta,x1,x2;

   printf("lutfen sirasiyla a,b,c katsayilarini giriniz :");
   scanf("%d%d%d",&a,&b,&c);


  delta=b*b-(4*a*c);
  x1=(-b+sqrt(delta))/(2*a);
  x2=(-b-sqrt(delta))/(2*a);

printf("birinci kok :  %.3f\nikinci kok :  %.3f",x1,x2);



}
