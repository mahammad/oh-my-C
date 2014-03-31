/*Lab(23.10.2013) 1.Soru Bir insanın kilo,boy,cinsiyet bilgilerine göre Vücut Kütle İndeksi (VKİ) hesaplayan C Programı*/
#include "stdio.h"		/*standart kütüphane*/
#include "math.h"		/*matamatiksel işlem için gerekli olan kütüphane*/

void main()
{
	printf("\t(VKI) Bilgi Programina hosh geldiniz...");
	printf("\n============================\n");
	float boy, kilo, indeks;		/*ondalıklı sayı alacağımız için 'float' tipli değişken kullanıyoruz*/
	char cinsiyet;					/*harf karakteri girecegimiz icin 'char' tipli değişken kullanacağız*/

	printf("\nCinsiyetinizi Giriniz(E/K veya e/k):");
	cinsiyet = getchar();
	printf("Kilonuzu Giriniz:");
	scanf("%f", &kilo);
	printf("Boynuzu Giriniz(metre olarak 1.75m):");
	scanf("%f", &boy);

	indeks = kilo / pow(boy, 2);		/*işlem kısmı ve burada 'pow' x üzeri y demek anlamına geliyor yani 'pow(x,y)*/
	printf("Vucut Kutle Indeksiniz (VKI): %.2f \n", indeks);
	printf("\n====================================\n");

	switch (cinsiyet)
	{
	case 'e':							/*karakterlerin büyük ve kücük girme ihtimali icin*/
	case 'E':
		if (indeks < 20.7)				/*burada ve ya diğer case'de indeksimize uygun olan yorumu koşullandıran koşul satırlarımız.*/
		{
			printf("Zayifsiniz Saglik riski!");
		}
		else if (20.7 <= indeks && indeks <= 26.4)
		{
			printf("Normalsiniz. Risk Yok.");
		}
		else if (26.5 <= indeks && indeks <= 31.1)
		{
			printf("Shishmanlik sinirinda yada shishmansiniz.Riskli.");
		}
		else
		{
			printf("Obezite. Ciddi derecede riskli.");
		}
		break;
	case 'k':
	case 'K':
		if (indeks < 19.1)
		{
			printf("Zayifsiniz Saglik riski!");
		}
		else if (19.1 <= indeks && indeks <= 25.8)
		{
			printf("Normalsiniz. Risk Yok.");
		}
		else if (25.9 <= indeks && indeks <= 32.2)
		{
			printf("Shishmanlik sinirinda yada shishmansiniz.Riskli.");
		}
		else
		{
			printf("Obezite. Ciddi derecede riskli.");
		}
	default:
		printf("\n\tIndeksniz VKI-den farkli...");		/*yanlış girel değerler için programın ekrana yazacağı satır.*/
		break;
	}
}