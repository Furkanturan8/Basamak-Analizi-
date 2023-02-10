#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<locale.h>


int main()
{
    setlocale(LC_ALL,"Turkish");

    /*Klavyeden girilen n basamakli bir
sayinin basamak degerlerini bulan
bir C programi yaziniz.*/

    int sayi,sayilarintoplami=0,basamak=0;  printf("Lütfen sayiyi giriniz:");   scanf("%d",&sayi);

    int i=1;

    while(sayi>0)
    {
        sayilarintoplami+=(sayi%10);
        printf("%d.basamak%d \n",i,sayi%10);
        i+=1;
        sayi=sayi/10;
        basamak++;
    }

    printf("\nGirdiginiz sayi %d basamakli\n",basamak);

    printf("Girdiginiz sayinin toplami:%d \n",sayilarintoplami);

    return 0;
}
