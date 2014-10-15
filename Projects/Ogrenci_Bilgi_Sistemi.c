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
#include <string.h>

//prototipe ler
void menu();
int Ogrenci_Ekle(int );
void Ortalama(int );
void Enyuksek_Sonuc(int );
void Kucuk_Degerler(int );
void Ortalama_Ustu(int ); 
void En_Yuksek(int );
int En_Dusuk(int );
void Sirala_Kucukten(int );
void Secim(int);
void Return(int );

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
	
	puts("\tOgrenci Bilgi Sistemine hosh geldiniz...");
	printf("Ogrenci sayisini giriniz: "); 
	scanf("%d" ,&ogrenci_sayisi);
	Ogrenci_Ekle(ogrenci_sayisi);
	menu();
	Secim(ogrenci_sayisi);
	Return(ogrenci_sayisi);
	return 0;
}
void Return(int ogr) {
    int sec,gir,ekle;
	printf("***************************************************\nDevam Etmek Istiyor musunuz? 1 (Evet)/ 0 (Hayir) :");
	scanf("%d" , &sec);		
	if (sec == 1) {
		for (;;) {	
			menu();
			Secim(ogr);
			printf("Devam etmek istiyor musunuz? 1(Evet), 0(Hayir): ");
			scanf("%d", &gir);
			if (gir == 1) {
				continue;
			} else if(gir == 0) {
				printf("Tekrar ögrenci eklemek ister misini? 1(Evet), 0(Hayir):");	
				scanf("%d",&ekle);
			if (ekle == 1) {
					printf("===========================\nTEKRAR");
					main();
				} else if(gir == 0) break;
			} 
		}
	} 
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
		puts("\n----------------------------");
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
	float Ort[3] = {0,0,0}; //indislere başlanğıc değerleri 

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
				printf("%d \t %d. Ders Notu : %d %s \t\n",ekle[j].no , i+1 ,ekle[j].Ders[i],ekle[j].isim );
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
				count = count+1;
			}
		}
	}
	printf("60'dan Kucuk Sinav Sonuclari Toplam Sayisi: %d \n", count);
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
				printf("No: %d - %d. Ders %d - %s\n", ekle[j].no, i+1, ekle[j].Ders[i],ekle[j].isim);
			}
		}
	}
}
/*En yüksek sinav sonucunu veren metodu(her ders için ayri liste yapiniz)*/
int En_Dusuk(int ogr) {
	int i, j, count;
	
	for (j = 0; j < ogr; j++)	{
		count = ekle[j].Ders[0];
		for (i = 0; i < 3; i++) {
			if (ekle[j].Ders[i] < count) {
				count = ekle[j].Ders[i];
			}
		}
		printf("En Dusuk Notu: %d - %s \n",count,ekle[j].isim);		
	}
	return count;
}
/*En düşük sinav sonucunu veren metod*/
void En_Yuksek(int ogr) {
	int k, count, i, j;
	for (k = 0; k < 3; k++) {
		for (i = 0; i < ogr; i++) {
			for (j=0; j < i; j++) {
				if (ekle[j].Ders[k] < ekle[j+1].Ders[k]  ) {
					
					count = ekle[j].Ders[k];
					ekle[j].Ders[k] = ekle[j+1].Ders[k];
					ekle[j+1].Ders[k] = count;
				}				
			}
		}/* 2. for*/
		printf("%d. Ders - %d\n" ,k+1 ,ekle[j].Ders[k]);
	} /*3. for*/	
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
		printf("No: %d  \t Isim %s \t 1. Ders %d \t 2. Ders %d \t 3. Ders %d\n" , ekle[k].no, ekle[k].isim, ekle[k].Ders[0], ekle[k].Ders[1], ekle[k].Ders[2]);
	}			
}
void Secim(int ogr) {
	int secim = 0;
	printf("Menu Seciniz : ");
	scanf("%d" ,&secim);
	switch (secim)
	{
		case 1:
			En_Yuksek(ogr);
			break;
		case 2:
			En_Dusuk(ogr);
			break;
		case 3:
			Enyuksek_Sonuc(ogr);
			break;
		case 4:
			Kucuk_Degerler(ogr);
			break;
		case 5: 
			Ortalama(ogr);
			break;
		case 6:
			Ortalama_Ustu(ogr); 
			break;
		case 7:
			Sirala_Kucukten(ogr);
			break;
		//default:
		//puts("Lutfen Dogru Secim Yapiniz!");
	}
}
/*Program Menu Ekran Goruntusu*/
void menu() {
	puts("\n###########################################################\n");
	puts("\n\t\tOgrenmek istediginiz bilgi? ");
	puts("\t¦¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¦");
	puts("\t¦ 1. Ogrencinin En Yuksek Ders Notu.  ¦");
	puts("\t¦ 2. Ogrencinin En Dusuk  Ders Notu.  ¦");
	puts("\t¦ 3. Sonucu 60'dan Kucuk Ogrenciler.  ¦");
	puts("\t¦ 4. Sonucu 60'dan Kucuk Ogr. Sayisi. ¦");
	puts("\t¦ 5. Her Dersin Sinav Ortalamasi.     ¦");
	puts("\t¦ 6. Ort. Ustu Not Alan Ogreciler No. ¦");
	puts("\t¦ 7. Ogrenci Numarasina gore Liste.   ¦");
	puts("\t¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯");
}
