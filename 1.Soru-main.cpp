/*Lab-30.10.2013 1.Soru Klavyeden girilen 4 basamaklı bir tam sayının kaç farklı rakamdan oluştuğunu bulan C program.*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int sayi;			/*kullanıcıdan alacağımız sayi*/
	int a, b, c, d;		/*4 basamaklı sayımızın basamaklarınıa a, b, c, d olarak belirleyeceğiz.*/

	printf("4 basamakli bir sayi giriniz:");
	scanf_s("%d",&sayi);
	if (999 < sayi && sayi <= 9999)	/*burada if ile sayının 4 basamaklı olduğunu kontrol edip basamaklarına ayıracağız*/
	{
		a = sayi / 1000;			//örneğin 4976 sayısını basamaklarına ayıralım a=4976/1000=4.976 olur.
		sayi = sayi - a * 1000;		//burada ise, sayi(algoritma akışına göre yeni sayı atanır)= 4976-(4*100) yani yeni sayi 976
		b = sayi / 100;				//aynı aklışla bu  işlemler devam eder,neden 4976/1000=4.976 iken 4 aldık? dersek 
		sayi = sayi - b * 100;		//sayımızı integer tanımladığımız icin 4 kısmını alacaktır.
		c = sayi / 10;				
		d = sayi - c * 10;
		if ((a == b) && (b == c) && (c == d)) /*burada if ile sayımızın basamaklarının bir-birine eşit durumuna(a=b=c=d) bakıyoruz*/
		{
			printf("\nSayimiz 1 farkli rakamdan olushuyor...");
		}
		else if (a == b && c == d || a == c && b == d || a == d && b == c) /*eşit değil(else) ise 2. if ile 2 farklı rakamlarına(a=b,c=d;a=c,b=d;a=d,c=b) bakıyoruz*/
		{
			printf("\nSayiniz 2 farkli rakamlardan olushuyor...");
		}
		else if (a != b && a != c && a != d && b != c && b != d && c != d) /*2 farklı rakam yok(else) 3. if ile 4 farklı rakamlarına(a≠b,a≠c,a≠d,b≠c,b≠d,c≠d) bakıyoruz */
		{
			printf("\nSayiniz 4 farkli rakamlardan olushuyor...");
		}
		else /*4 farklı rakamları yoksa else ile geriye kalan 3 farklı rakam olduğunu yazıyoruz.*/
		{
			printf("\nSayiniz 3 farkli rakamlardan olushuyor...");
		}
	}
	else /*if ile sayimizin 4 basamaklı olduğunu kontrol ederken,else ile 4 basamaklı olmadığı durumunu belirtiyoruz*/
	{
		printf("Yanlish! 4 Basamakli sayi lutfen giriniz...");
	}
	_getche();
}
