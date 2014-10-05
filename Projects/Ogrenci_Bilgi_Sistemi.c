#include <stdio.h>

//prototipe ler
int menu();
int menuSecim(int );
int Ogrenci_Ekle(int );
void Ortalama(int );
//void Enyuksek_Sonuc(int );

//Topluluk Bildirimi(struct)
struct ogrenci {
	int no;
	int Ders[3];
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
	printf("Menu Seciniz : ");
	scanf("%d" ,&secim);
	switch (secim)
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
			Ortalama(ogrenci_sayisi);
			break;
		case 7:
			
			break;
		case 8:
			
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
	int i,j,k =0;
	int Ort[3] = {0,0,0}; //indislere başlanğıc değerleri 
	int Ortalama[3];
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < ogr; j++)
		{
			Ort[k] = Ort[k] + ekle[j].Ders[k];
		}
		Ortalama[i] = Ort[k]/ogr;
		printf("%d . Dersin Ortalamasi: %d\n", i+1, Ortalama[i]);
		k++;
	}
}

//Menu secimlerinin yapıldığı olay
void Menu_Secim(int sec , int ogrc) {
	}
