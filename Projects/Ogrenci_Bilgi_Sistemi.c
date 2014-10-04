#include <stdio.h>

//prototipe ler
int menu();
int menuSecim(int );
int Ogrenci_Ekle(int );
void Ortalama(int );
void Menu_Secim(int ,int );
void Enyuksek_Sonuc(int );

//Topluluk Bildirimi(struct)
struct ogrenci {
	int no[10];
	int Ders1[3];
	int Ders2[3];
	int Ders3[3];
	char isim[20];
}ekle[200];

//Tüm fonksiyonlarda tanımlı olması icin


//main
int main() {
	int ogrenci_sayisi = 0;
	int secim = 0;
	puts("\tOgrenci Bilgi Sistemine hosh geldiniz...");
	printf("Ogrenci sayisini giriniz: "); 
	scanf("%d" ,&ogrenci_sayisi);
	Ogrenci_Ekle(ogrenci_sayisi);
	menu();
	puts("Menu Seciniz : ");
	scanf("%d" ,&secim);
	Menu_Secim(secim ,ogrenci_sayisi );
	return 0;
}

//Kullanıcının girdidi ogrenci sayisina gore tutulan kayıt
int Ogrenci_Ekle(int x) {
	//struct ogrenci ekle[200];
	int i; 
	for (i = 0; i < x; i++)
	{
		printf("Ogrenci isim: "); 
		scanf("%s" ,ekle[i].isim);
		printf("Ogreci No   : "); 
		scanf("%d" ,ekle[i].no);
		printf("1. Ders Notu :"); 
		scanf("%d" ,ekle[i].Ders1);		
		printf("2. Ders Notu :"); 
		scanf("%d" ,ekle[i].Ders2);		
		printf("3. Ders Notu :"); 
		scanf("%d" ,ekle[i].Ders3);		
	}
	for (i = 0; i < x; i++)
	{
		int sayi = 0;
		puts("\n------------------------------------------");
		printf("%d. Ogrenci Isim: %s \n" ,i+1 ,ekle[i].isim);
		printf("%d. Ogrenci No  : %d \n" ,i+1, ekle[i].no[sayi]);
		printf("\n 1. Ders Notu : %d " ,ekle[i].Ders1[sayi]);
		printf("\n 2. Ders Notu : %d " ,ekle[i].Ders2[sayi]);
		printf("\n 3. Ders Notu : %d " ,ekle[i].Ders3[sayi]);
		sayi++;
	}
	return 0;
}

//istek menüsu
int menu() {
	puts("\n\t\tOgrenmek istediginiz bilgi? ");
	puts("\t¦¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¦");
	puts("\t¦ 1. Genel Bilgi liste.               ¦");
	puts("\t¦ 2. En Yuksek Sinav Sonucu.          ¦");
	puts("\t¦ 3. En Dusuk  Sinav Sonucu.          ¦");
	puts("\t¦ 4. Sonucu 60'dan dusuk Ogrenciler.  ¦");
	puts("\t¦ 5. Sonucu 60'dan dusuk Ogr. Sayisi. ¦");
	puts("\t¦ 6. Her Dersin Sinav Ortalamasi.     ¦");
	puts("\t¦ 7. Ort. Ustu Not Alan Ogreciler.    ¦");
	puts("\t¦ 8. Ogrenci Numarasina gore Liste.   ¦");
	puts("\t¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯");
	return 0;
}
//
void Enyuksek_Sonuc() {
	
}

//Ortalamayı bulan fonksiyon
void Ortalama(int ogr) {
	int i,j,k, Ort1, Ort2, Ort3; 
	int Ortalama1=0;
	int Ortalama2=0;
	int Ortalama3=0;

	for (i = 0; i < ogr; i++)
	{
		Ort1 =+ ekle[i].Ders1[i];
	}
	Ortalama1 = Ort1/ogr;
	printf("1. Dersin Ortalamasi: %d\n", Ortalama1);
	for (j = 0; j < ogr; j++)
	{
		Ort2 =+ ekle[j].Ders2[i];
	}
	Ortalama2 = Ort2/ogr;
	printf("2. Dersin Ortalamasi: %d\n", Ortalama2);
	for (k = 0; k < ogr; k++)
	{
		Ort3 =+ ekle[k].Ders3[i];
	}
	Ortalama3 = Ort3/ogr;
	printf("3. Dersin Ortalamasi: %d\n", Ortalama3);		
}

//Menu secimlerinin yapıldığı olay
void Menu_Secim(int sec , int ogrc) {
	switch (sec)
	{
		case 1:
		
			break;
		case 2:
		
			break;
		case 3:
		
			break;
		case 4:
			
			break;
		case 5:
			
			break;
		case 6: //Menu 6. secim
			Ortalama(ogrc);
			break;
		case 7:
			
			break;
		case 8:
			
			break;
	//	default:
			
	}
}
