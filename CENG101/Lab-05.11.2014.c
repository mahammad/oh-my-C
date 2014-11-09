/*Denizlide bulunan çiftlikte 2008 yılında sayımda tafşanların sayısının
 * 845, kuşların ise 1655 olduğu tespit edilmiştir. Bir yılda tavşanlar
 * %4,3 oranında çoğalırken, kuşar ise %1.4 oranında çoğalmaktadır. Tavş
 * anların, kuşların sayısını hangi yıl içerisinde geceçeğini bulan C Pr
 * ogramını while döngüsü kullanarak yazınız.*/
#include "stdio.h"
#include "ctype.h"
/*
int main() {
	int yil = 2008;
	int tavsan = 845;
	int kuslsr = 1655;
	int count = 0;
	while(tavsan < kuslsr){
		tavsan += (tavsan*43)/1000;
		kuslsr += (kuslsr*14)/1000;
		yil++;
	}
	printf("%d\n", yil);
	return 0;
}*/
/*Babası oğluna bayramda el öperek ne kadar harçlık biriktirdiğini sormuş
 * Oğlu ise babasına biriktirdiği paranın 3 basamaklı olduğunu 3, 4 ve 5
 *  bölünfüğünde 1 YTL arttığını 7'ye böldüğünde hiç artmadığını söylemiş
 * Bu babaya yardımcı olmak için oğlunun ne kadar para biriktirdiğini bul
 * an C programının for döngüsü kullanarak yazınız. */
 /*
int main()
{
	int sayi;
	for ( sayi = 100; sayi < 1000; ++sayi)
	{
		if (sayi%3==1 && sayi%5==1 && sayi%4==1 && sayi%7==0)
		{
			printf("%d\n", sayi);
		}
	}
	return 0;
}*/
/*Kullanıcı tarafından girilen en fazla 100 karakterden oluşan bir cümleyi
 * oluşturan bir cümleyi oluşturan kelimelerin ilk hariflerini büyüterek 
 * ekrana yazan (kısaltam) C program*/
int main() {
	int i=0,j = 0;
	char cumle [100];
	char buyut [10];
	printf("Cumle Giriniz:");
	gets(cumle);
	if (cumle[0] != ' ')
	{
		buyut[j] = toupper(cumle[0]);
		j++;
	}

	while (cumle[i+1]!= '\0')
	{
		if (cumle[i] == ' ' && cumle[i+1]!=' ')
		{
			buyut[j]=toupper(cumle[i+1]);
			j++;
		}
		i++;
		
	}
	buyut[j]='\0';
	//buyut[j] = toupper(cumle[i+1]);
	

	printf("B: %s\n", buyut);
	return 0;
}
