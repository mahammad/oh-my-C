/* Odev No: 2
* Mehemmed Sxiyev
*
* Not: Visual Studio 2013 ile yazýlmýþtýr.(programda scanf_s, _getch(); deðiþiklikleri vardýr)
**/
/*Program kütüphaneleri*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
/*Kullanýlan fonksiyonlarýn tanýmlamalarý*/
int Goruntule(int , int );
/*Dizilerin her yerde tanýmlý olmasýný saðlýyor*/
int Hazine[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
int sayac[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
void main() {
int jeton;
printf("\t\t\t#Histohram Cizdirme#\n");
printf("\t\t\t #Mehemmed Sxiyev#");
printf("\n---------------------------------------------\n");
printf("Jeton sayisini giriniz:");
scanf_s("%d", &jeton);
//Girilen jetona sayýsýna göre random sayi üretiyor ve üretilen sayýnýn
//hazine kapýlarýnýn olasý durumuna gore sayaclarýný 1 arttýrýr.(23-68 satýrlar)
int sayi;
srand(time_t(NULL));
for (int j = 0; j < jeton; j++){
sayi = rand() % 512;
//paskal ückeninde 10. adým [1,9,36,84,126,126,84,36,9,1] olasýlýklarýný her hazine giriþ kontrolü yaptým
if (sayi == 0)
{
Hazine[0] = ++sayac[0];
}
else if (0 < sayi && sayi < 10)
{
Hazine[1] = ++sayac[1];
}
else if (10 <= sayi && sayi < 46)
{
Hazine[2] = ++sayac[2];
}
else if (46 <= sayi && sayi < 120)
{
Hazine[3] = ++sayac[3];
}
else if (120 <= sayi && sayi < 246)
{
Hazine[4] = ++sayac[4];
}
else if (246 <= sayi && sayi < 372)
{
Hazine[5] = ++sayac[5];
}
else if (372 <= sayi && sayi < 456)
{
Hazine[6] = ++sayac[6];
}
else if (456 <= sayi && sayi < 492)
{
Hazine[7] = ++sayac[7];
}
else if (492 <= sayi && sayi < 511)
{
Hazine[8] = ++sayac[8];
}
else if (sayi == 511)
{
Hazine[9] = ++sayac[9];
}
}
//Hazinelerdeki, jeton sayýsýnýn ekran cýktý
for (int i = 0; i < 10; i++)
{
printf("%2d. Hazinedeki Jeton Sayisi: %d\n", i + 1, Hazine[i]);
}
printf("\n--------------------------------------------------------\n\n");
//En buyuk sayac degerini buluyoruz
int EnBuyuk = sayac[0];
for (int i = 0; i < 10; i++)
{
if (sayac[i] > EnBuyuk)
{
EnBuyuk = sayac[i];
}
}
//en buyuk saygaca gore Goster fonksiyonu calýþtýrarak ekran görüntüsü iþlemleri
int maxsayi = EnBuyuk;
for (int i = maxsayi; i > 0; i--)
{
printf(" %3d ", i);
for (int j = 0; j < 10; j++)
{
int gonder = sayac[j];
Goruntule(gonder, EnBuyuk);
}
printf("\n");
EnBuyuk--;
}
//Ekran cýktýsýnýn alt kýsmý burasý
printf("--------------------------------------------------------\n");
printf(" | 1 || 2 || 3 || 4 || 5 || 6 || 7 || 8 || 9 || 10 |");
_getch();
}
/*Ekrana Histogram cizdirecek fonksiyonumuz, kontroller*/
int Goruntule(int gelen, int big)
{
if (big > gelen)
{
printf("| |");
}
else
{
printf("| o |");
}
return 0;
}