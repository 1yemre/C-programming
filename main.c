#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
int sayi;
int i=1,sonuc=1;

printf("Faktoriyeli Hesaplamak istdiginiz sayiyi giriniz : ");
scanf("%d",&sayi);


if(sayi<0){
    printf("sadece pozitif sayilar giriniz");
 }
  else{
        while(i<=sayi)
        {
         sonuc=sonuc*i;
         i++;

        }
printf("%d fakoriyel = %d",sayi,sonuc);

  }


int s1;
int sonuc=0;
int i=1;


printf("lutfen bir adet sayi giriniz : ");
scanf("%d",&s1);


while(i<=s1){
    sonuc=sonuc+i;
    i++;
}
printf("%d ye kadar olan sayilarin toplami : %d",s1,sonuc);

*/


int s1,s2;
int sonuc=0;
int i=1;


printf("lutfen iki  adet sayi giriniz : ");
scanf("%d%d",&s1,&s2);



while(s1<=s2){
    sonuc+=s1;
    s1++;
}
printf("sonuc : %d",sonuc);




}
