/*Dairesel bir koninin hacmini hesaplayan C program*/
#include <stdio.h>

int main()
{
	int h, r;				/*r=cap ,h=yükseklik*/
	//int a;				/*a=taban alani*/
	const double pi = 3.1419;		
	float hacm;

	printf("Yukseklik giriniz: ");
	scanf("%d",&h);
	printf("Cap deger giriniz: ");
	scanf("%d",&r);
	hacm = pi*h*(r*r)/3.0;								/*koninin hacmi fonksionu 3hacm=p*r*r*h olarak */
	printf("\nGirdi degerleri:  h= %dcm ve  r= %dcm",h,r);
	printf("\nDairesel koninin hacmi: %.4fcm kuptur... ",hacm);
}