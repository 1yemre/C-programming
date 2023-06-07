#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
  //1) yýldýzlar ile þekil hesaplamak
   int sayi;
   int i,j;
   printf("sayi : ");
   scanf("%d",&sayi);


   for(i=1;i<=sayi;i++){
        for(j=1;j<=i;j++){

             printf("*");

        }

printf("\n");
   }
printf("\n\n");
   int sayi;
   int i,j;
   printf("sayi : ");
   scanf("%d",&sayi);


   for(i=1;i<=sayi;i++){
        for(j=1;j<=i;j++){

             printf("*");

        }

printf("\n");
   }
*/
//2)arstrong sayý  hesaplama
//370=3*3*3+7*7*7+0*0*0=370



int s1;
int gecici_sayi;
int sonuc=0;
int x;


printf("sayi :");
scanf("%d",&s1);


gecici_sayi=s1;

for(gecici_sayi;gecici_sayi>0;gecici_sayi/=10)
    {
       x=gecici_sayi%10;
        sonuc+=(x*x*x);
        x=0;


    }
    if(sonuc==s1){
        printf("Armstron sayidir");
    }
    else{
        printf("Degil");
    }

}
