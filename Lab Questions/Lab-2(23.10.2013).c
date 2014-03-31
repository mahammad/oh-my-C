/*Lab-23.10.2013(2) 2.Soru Kullanıcıdan alınan sayının basamaklarını kontrol edip, basamaklarının küklerini bulub, 
girilen sayıya eşit olup olmadığını bulan C Program*/
#include "stdio.h"


int main()
{
	int girilenSayi, temp;
	int kupToplami;
	int birler, onlar, yuzler, binler, onbin, yuzbin;
	/*Kullanıcıdan sayı alıyoruz*/
	printf("Bir Sayi giriniz(1 veya 6 basamakli):");
	scanf("%d", &girilenSayi);
	/*Bu 'if' koşul kontrol yapıları ile girilen sayının kaç basamak olduğunu bula bilmemiz için.*/
	/*Birler basamağının kontrolü,değilse 'else' komutu ile bir diğer koşulu kontrol eder*/
	if (0 < girilenSayi && girilenSayi < 10)		/*Birler basamağının kontrolü,değilse 'else' komutu ile bir diğer koşulu kontrol eder*/
	{
		printf("1 basamakli sayi girdiniz.\n\n");
		temp = girilenSayi;  /*sayımızın 10-a göre modunu almak için temp değişkenimize atayıb*/
		birler = temp % 10;  /*modunu aldıkdan sonra tekrar sayıya atama yapılan işlemler*/
		onlar = temp / 10;
		kupToplami = (birler*birler*birler);
		printf("Sayi: %d,Kup toplami=%d", girilenSayi, kupToplami);
	}
	else if (0 < girilenSayi && girilenSayi < 100)	/*Onlar basamağının kontrolü,değilse 'else' komutu ile bir diğer koşulu kontrol eder*/
	{
		printf("2 basamakli sayi girdiniz.\n\n");
		temp = girilenSayi;
		birler = temp % 10;
		yuzler = temp / 100;
		temp = temp - (yuzler * 100);
		onlar = temp / 10;
		kupToplami = (birler*birler*birler) + (onlar*onlar*onlar);
		printf("Sayi: %d,Kup toplami=%d", girilenSayi, kupToplami);
	}
	else if (0 < girilenSayi && girilenSayi < 1000)	/*Yuzler basamağının kontrolü,değilse 'else' komutu ile bir diğer koşulu kontrol eder*/
	{
		printf("3 basamakli sayi girdiniz.\n\n");
		temp = girilenSayi;
		birler = temp % 10;
		yuzler = temp / 100;
		temp = temp - (yuzler * 100);
		onlar = temp / 10;
		kupToplami = (birler*birler*birler) + (onlar*onlar*onlar) + (yuzler*yuzler*yuzler);
		printf("Sayi: %d,Kup toplami=%d", girilenSayi, kupToplami);
	}
	else if (0 < girilenSayi && girilenSayi < 10000)	/*Binler basamağının kontrolü,değilse 'else' komutu ile bir diğer koşulu kontrol eder*/
	{
		printf("4 basamakli sayi girdiniz.\n\n");
		temp = girilenSayi;
		birler = temp % 10;
		binler = temp / 1000;
		temp = temp - (binler * 1000);
		yuzler = temp / 100;
		temp = temp - (yuzler * 100);
		onlar = temp / 10;
		kupToplami = (birler*birler*birler) + (onlar*onlar*onlar) + (yuzler*yuzler*yuzler) + (binler*binler*binler);
		printf("Sayi: %d,Kup toplami=%d", girilenSayi, kupToplami);
	}
	else if (0 < girilenSayi && girilenSayi < 100000)	/*Onbinler basamağının kontrolü,değilse 'else' komutu ile bir diğer koşulu kontrol eder*/
	{
		printf("5 basamakli sayi girdiniz.\n\n");
		temp = girilenSayi;
		birler = temp % 10;
		onbin = temp / 10000;
		temp = temp - (onbin * 10000);
		binler = temp / 1000;
		temp = temp - (binler * 1000);
		yuzler = temp / 100;
		temp = temp - (yuzler * 100);
		onlar = temp / 10;
		kupToplami = (birler*birler*birler) + (onlar*onlar*onlar) + (yuzler*yuzler*yuzler) + (binler*binler*binler) + (onbin*onbin*onbin);
		printf("Sayi: %d,Kup toplami=%d", girilenSayi, kupToplami);
	}
	else if (0 < girilenSayi && girilenSayi < 1000000) /*Yuzbinler basamağının kontrolü,değilse 'else' komutu ile bir diğer koşulu kontrol eder*/
	{
		printf("6 basamakli sayi girdiniz.\n\n");
		temp = girilenSayi;
		birler = temp % 10;
		yuzbin = temp / 100000;
		temp = temp - (yuzbin * 100000);
		onbin = temp / 10000;
		temp = temp - (onbin * 10000);
		binler = temp / 1000;
		temp = temp - (binler * 1000);
		yuzler = temp / 100;
		temp = temp - (yuzler * 100);
		onlar = temp / 10;
		kupToplami = (birler*birler*birler) + (onlar*onlar*onlar) + (yuzler*yuzler*yuzler) + (binler*binler*binler) + (onbin*onbin*onbin) + (yuzbin*yuzbin*yuzbin);
		printf("Sayi: %d,Kup toplami=%d", girilenSayi, kupToplami);
	}
	if (girilenSayi == kupToplami)	/*Sayımızın basamak kuplerini bulup ve kendine eşit olup olmadığını kontrol ettiğimiz kısım*/
		printf("\nSayi basamak kuplerinin toplamina esittir..");
	else
		printf("\nSayi basamak kuplerinin toplamina esit degildir..");
}