/*Lab-30.10.2013 2.Soru Klavyeden girilen 3 basamaklı bir tam sayının rakamlarından elde edilecek 
en büyük 3 basamaklı tam sayıyı bulup ekrana yazan C programı*/
#include "stdio.h"

int main()
{
	int sayi;		/*3 basamaklı sayı*/
	int a, b, c;	/*sayımızın basamakları*/
	printf("3 basamakli sayi giriniz:");
	scanf("%d",&sayi);

	if (99 < sayi && sayi <= 999) /*sayimizin 3 basamaklı olduğunu kontrol ediyoruz*/
	{
		a = sayi / 100;					/*Sayımızı basamaklara ayıdığımız işlem satırları (13-16)*/
		sayi = sayi - (a * 100);
		b = sayi / 10;
		c = sayi - (b*10);
		if (a > b && b > c) /*sayımızın basamaklarının (a>b>c) durumu.*/
		{
			printf("En buyuk tam sayi:%d%d%d", a, b, c);
		}
		if (a > c && c > b) /*sayımızın basamaklarının (a>c>b) durumu.*/
		{
			printf("En buyuk tam sayi:%d%d%d", a, c, b);
		}
		if (b > a && a > c) /*sayımızın basamaklarının (b>a>c) durumu.*/
		{
			printf("En buyuk tam sayi:%d%d%d", b, a, c);
		}
		if (b > c && c > a) /*sayımızın basamaklarının (b>c>a) durumu.*/
		{
			printf("En buyuk tam sayi:%d%d%d", b, c, a);
		}
		if (c > a && a > b) /*sayımızın basamaklarının (c>a>b) durumu.*/
		{
			printf("En buyuk tam sayi:%d%d%d", c, a, b);
		}
		if (c > b && b > a) /*sayımızın basamaklarının (c>b>a) durumu.*/
		{
			printf("En buyuk tam sayi:%d%d%d", c, b, a);
		}
	}
	else /*Sayımızın 3 basamaklı olmadığı durumunda progrmın yapacağı işlem*/
	{
		printf("Yanlish! Lutfen 3 basamakli sayi giriniz:");
	}
	return 0;
}