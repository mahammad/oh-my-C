/*N adet öğrencinin (öğrenci sayısı kullanıcıdan alınacak)(menü aracılığıyla aşağıdaki işlemleri yapınız)

· Öğrenci numarasını, ismini ve 3 ders için  sınav sonuçlarını kullanıcıdan isteyen metodu 
· Okunan bu bilgileri giriş sırasına göre görüntüleyen metodu
· Her dersin sınav sonuç ortalamasını bulan metodu
· 60'dan küçük sınav sonuçlarını ve bu sonuçlara ait öğrenci numaralarını ve isimlerini görüntüleyen metodu,
· Ortalamanın üstünde not alan öğrenci numaraları ve bu öğrencilere ait notları görüntüleyen metodu(her ders için ayrı liste yapınız)
· 60'dan küçük sınav sonuç değerlerinin sayısını veren metodu,
· En yüksek sınav sonucunu veren metodu(her ders için ayrı liste yapınız)
· En düşük sınav sonucunu veren metodu (her ders için ayrı liste yapınız)
· Genel sınav sonuçlarına  göre küçükten büyüğe sıralı olarak öğrenci numaralarını, isimlerini  ve sınav sonuçlarını görüntüleyen metodu(her öğrencinin 3 dersinin   ortalamasını bulup bu değere göre sıralayınız)
· Öğrenci numaralarına göre küçükten büyüğe sıralı olarak öğrenci numaralarını, isimlerini ve sınav sonuçlarını görüntüleyen metodu  yazınız
*/
#include <stdio.h>
#include <stdlib.h>

//prototipe ler
void menu();
int menuSecim(int );
int Ogrenci_Ekle(int );
void Ortalama(int );
void Enyuksek_Sonuc(int );
void Kucuk_Degerler(int );
void Ortalama_Ustu(int ); 
int En_Yuksek(int );
void En_Dusuk(int );
void Sirala_Kucukten(int );
//int Bubble_sort(int dizi[], int n);

/*Farklı foksiyonlardan erişilmesi icin*/
float ortalama[3];
int Ort[3] = {0,0,0}; //indislere başlanğıc değerleri 
//Topluluk Bildirimi(struct)
struct ogrenci {
	int no;
	int Ders[3];
	char isim[20];
}ekle[200];

//main
int main() {
	int ogrenci_sayisi = 0;
	int secim = 0;
	puts("\tOgrenci Bilgi Sistemine hosh geldiniz...");
	printf("Ogrenci sayisini giriniz: "); 
	scanf("%d" ,&ogrenci_sayisi);
	Ogrenci_Ekle(ogrenci_sayisi);
	menu();
	printf("Menu Seciniz : ");
	scanf("%d" ,&secim);
	switch (secim)
	{
		case 1:
		
			break;
		case 2:
			En_Yuksek(ogrenci_sayisi);
			break;
		case 3:
			En_Dusuk(ogrenci_sayisi);
			break;
		case 4:
			Enyuksek_Sonuc(ogrenci_sayisi);
			break;
		case 5:
			Kucuk_Degerler(ogrenci_sayisi);
			break;
		case 6: //Menu 6. secim
			Ortalama(ogrenci_sayisi);
			break;
		case 7:
			Ortalama_Ustu(ogrenci_sayisi); 
			break;
		case 8:
			Sirala_Kucukten(ogrenci_sayisi);
			break;
	//	default:
	}
	return 0;
}

//Kullanıcının girdidi ogrenci sayisina gore tutulan kayıt
int Ogrenci_Ekle(int x) {
	int i, j, k = 0; 
	for (i = 0; i < x; i++)
	{
		printf("Ogrenci isim : "); 
		scanf("%s" ,ekle[i].isim);
		printf("Ogreci No    : "); 
		scanf("%d" ,&ekle[i].no);
		for (j = 0; j < 3; j++)
		{
			printf("%d. Ders Notu :" ,j+1); 
			scanf("%d" ,&ekle[k].Ders[j]);				
		}
		k++;
		puts(" ");	
	}
	/*Okunan bu bilgileri giriş sırasına göre görüntüleyen metod*/
	int a = 0;
	for (i = 0; i < x; i++)
	{
		puts("\n------------------------------------------");
		printf("%d. Ogrenci Isim : %s \n" ,i+1 ,ekle[i].isim);
		printf("%d. Ogrenci No   : %d \n" ,i+1, ekle[i].no);

		for (j = 0; j < 3; j++)
		{
			printf("\n %d. Ders Notu : %d ",j+1 ,ekle[a].Ders[j]);
		}
		a++;
	}
	return 0;
}

//Ortalamayı bulan fonksiyon
void Ortalama(int ogr) {
	int i,j,k =0;	
	int Ort[3] = {0,0,0}; //indislere başlanğıc değerleri 

	for (i = 0; i < 3; i++) {
		for (j = 0; j < ogr; j++)
		{
			Ort[k] = Ort[k] + ekle[j].Ders[k];
		}
		ortalama[i] = Ort[k]/ogr;
		printf("%d . Dersin Ortalamasi: %.2f\n", i+1, ortalama[i]);
		k++;
	}
}
/*60'dan küçük sınav sonuçlarını ve 
 * bu sonuçlara ait öğrenci numaralarını ve isimlerini görüntüleyen metod*/
void Enyuksek_Sonuc(int ogr) {
	puts("\t60'dan Kucuk Sinav Sorulari ve Ogrenci Bilgileri.");
	int i, j;
	for (j = 0; j < ogr; j++) {
		for (i = 0; i < 3; i++) {
			if (ekle[j].Ders[i] < 60) {
				printf("%d \t %s \t%d Ders Notu : %d \n",ekle[j].no ,ekle[j].isim , i+1 ,ekle[j].Ders[i]);
			}
		}
	}
}
/*60'dan küçük sınav sonuç değerlerinin sayısını veren metod*/
void Kucuk_Degerler(int ogr) {
	int i, j, count = 0;
	for (j = 0; j < ogr; j++) {
		for (i = 0; i < 3; i++) {
			if (ekle[j].Ders[i] < 60) {
				count++;
			}
		}
	}
	printf("60'dan Kucuk Sinav Sonuclari Toplam Sayisi: %d ", count);
}
/*Ortalamanın üstünde not alan öğrenci numaraları ve 
 * bu öğrencilere ait notları görüntüleyen metod*/
void Ortalama_Ustu(int ogr) {
		int i,j,k =0;	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < ogr; j++)
		{
			Ort[k] = Ort[k] + ekle[j].Ders[k];
		}
		ortalama[i] = Ort[k]/ogr;
		k++;
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < ogr; j++) {
			if (ortalama[i] < ekle[j].Ders[i]) {
				printf("Isim: %s - No: %d - %d Ders %d:\n",ekle[j].isim, ekle[j].no, i+1, ekle[j].Ders[i]);
			}
		}
	}
}
/**/
int En_Yuksek(int ogr) {
	int i, j, count;
	
	for (j = 0; j < ogr; j++)	{
		count = ekle[j].Ders[0];
		for (i = 0; i < 3; i++) {
			if (ekle[j].Ders[i] < count) {
				count = ekle[j].Ders[i];
			}
		}
		printf("%s - En Dusuk Notu: %d \n",ekle[i].isim ,count);		
	}
	return count;
}
/*En düşük sınav sonucunu veren metod*/
void En_Dusuk(int ogr) {
	int k, count, i, j;
	for (k = 0; k < 3; k++) {
		for (i = ogr - 1; i > 0; i--) {
			for (j=0; j < i; j++) {
				if (ekle[j].Ders[k] > ekle[j+1].Ders[k]  ) {
					count = ekle[i].Ders[j];
					ekle[j].Ders[k] = ekle[j+1].Ders[k];
					ekle[j+1].Ders[k] = count;
				}
				printf("%d Ders - %d \n" ,k+1 ,ekle[j].Ders[k]);					
			}
		}/* 2. for*/
	}/* 1. for*/
}/*foksiyon*/

/*Öğrenci numaralarına göre küçükten büyüğe sıralı olarak öğrenci numaralarını, 
 * isimlerini ve sınav sonuçlarını görüntüleyen metod*/
void Sirala_Kucukten(int  ogr) {
	int i, j;
	struct ogrenci Sekle;
	
	for ( i = 0; i < ogr; i++) {
		for ( j=0; j < i; j++) {
			if ( ekle[j].no > ekle[j+1].no) {
				Sekle = ekle[j];
				ekle[j] = ekle[j+1];
				ekle[j+1] = Sekle;
			}
		}	
	}
	int  k;
	for ( k = 0; k < ogr; k++) {
		printf("No: %d  \t Isım %s \t 1. Ders %d \t 2. Ders %d \t 3. Ders %d\n" , ekle[k].no, ekle[k].isim, ekle[k].Ders[0], ekle[k].Ders[1], ekle[k].Ders[2]);
	}			
}
/*Program Menu Ekran Goruntusu*/
void menu() {
	puts("\n\t\tOgrenmek istediginiz bilgi? ");
	puts("\t¦¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¦");
	puts("\t¦ 1. Genel Bilgi liste.               ¦");
	puts("\t¦ 2. En Yuksek Sinav Sonucu.          ¦");
	puts("\t¦ 3. En Dusuk  Sinav Sonucu.          ¦");
	puts("\t¦ 4. Sonucu 60'dan Kucuk Ogrenciler.  ¦");
	puts("\t¦ 5. Sonucu 60'dan Kucuk Ogr. Sayisi. ¦");
	puts("\t¦ 6. Her Dersin Sinav Ortalamasi.     ¦");
	puts("\t¦ 7. Ort. Ustu Not Alan Ogreciler No. ¦");
	puts("\t¦ 8. Ogrenci Numarasina gore Liste.   ¦");
	puts("\t¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯");
}
