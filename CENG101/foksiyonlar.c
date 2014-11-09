/*24 Ekim C ders çalışma örnekleri
 * math.h ceil(x) x-i kendinden büyük olan en kücük sayıya yuvarlar
 * math.h floor(x) x-i kendinden kücük olan en büyük sayıya yuvarlar
 * */
#include <stdio.h>
//void tek_cift(int); //fonksiyon tanımlanması
char cevir(int , int );

int main() {
	/*int i;
	printf("Sayi:"); 
	scanf("%d",&i);
	tek_cift(i);
	printf("\n----------\n");*/
	/**/
	/*int viz = 0, finl = 0;
	printf("Vize notu:"); scanf("%d",&viz);
	printf("Final notu:"); scanf("%d",&finl);
	printf("Harf notu : %c ",cevir(viz, finl));*/
	return 0;
}

/*void tek_cift(int sayi) {
	if (sayi%2 == 0)
	{
		printf("Gonderilen sayi %d cift.",sayi);
	} 
	else
	{
		printf("Gonderilen sayi %d tek.",sayi);
	}
}*/

/**/
/*char cevir(int vize, int final) {
	char harf;
	float ortalama = vize *0.4 + final * 0.6;
	if (ortalama < 50)
	{
		harf = 'F';
	} 
	else if (ortalama <60 )
	{
		harf = 'D';
	}
	else if (ortalama < 70  )
	{
		harf = 'C';
	} 
	else if (ortalama < 80 )
	{
		harf = 'B';
	}
	else
	{
		harf = 'A';
	} 
	return harf;
}*/
