#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi=0;
    int gecici_sayi=0;
    printf("lutfen 5 basamaklý bir sayý giriniz : ");

    scanf("%d",&sayi);
    gecici_sayi=sayi;




      printf("girdiginz sayi : %d\n Ters sayi: ",sayi);

    printf("%d",gecici_sayi%10);///12345 kalan 5 dir 5 degeri yazar 12345%10
    gecici_sayi/=10;


    printf("%d",gecici_sayi%10);///12345 kalan  dir 4 degeri yazar 1234%10
    gecici_sayi/=10;


    printf("%d",gecici_sayi%10);///12345 kalan  dir 3 degeri yazar 123%10
    gecici_sayi/=10;

    printf("%d",gecici_sayi%10);///12345 kalan  dir 2 degeri yazar 12%10
    gecici_sayi/=10;

    printf("%d",gecici_sayi%10);///12345 kalan  dir 1 degeri yazar 1%10
    gecici_sayi/=10;



}
