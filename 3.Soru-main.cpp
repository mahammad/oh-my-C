/*Lab-30.10.2013 3.Soru Klavyeden girilen rakamları birbirinden farklı 3 basamaklı 
bir tam sayının en büyük rakamının sağdan kaçıncı olduğunu bulup ekrana yazan C program.*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int sayi;                /*3 basamaklı sayı*/
	int a, b, c;        /*sayımızın basamakları*/
	printf("3 basamakli sayi giriniz:");
	scanf_s("%d", &sayi);
	
	if (99 < sayi && sayi <= 999) /*sayimizin 3 basamaklı olduğunu kontrol ediyoruz*/
	{
		a = sayi / 100;             /*Sayımızı basamaklara ayıdığımız işlem satırları (14-17)*/
		sayi = sayi - (a * 100);
		b = sayi / 10;
		c = sayi - (b * 10);
		if (a != b && b != c && a != c) /*sayımızın şartda istendiği gibi rakamlarının farklı olma durumunu kontrol ediyoruz*/
		{
			if (a > b && a > c)			/*burada a basamağının büyük olma ihtimaline bakıyoruz*/
				printf("En buyuk sayi sagdan 3.dur\n");
			else if (b>a && b>c)		/*burada b basamağının büyük olma ihtimaline bakıyoruz*/
				printf("En buyuk sayi sagdan 2.dir\n");
			else if (c>a && c>b)		/*burada c basamağının büyük olma ihtimaline bakıyoruz*/
				printf("En buyuk sayi sagdan 1.dir\n");
		}
		else /*sayımızın rakamlarının farklı olmadığı zaman else komutu ile program bu satıraı yapar.*/
			printf("\nRakamlari farkli giriniz...");
	}
	_getche();
}
