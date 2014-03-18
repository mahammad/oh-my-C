/*Girilen 2 adet(0 dan farklı) tamsayının harmonik ortalamasınıbulan C program*/
#include <stdio.h>

int main()
{
	double a, b,x,y;
	float O;
	printf("Harmonik ortalamasi alinacak degerleri sirasi ile giriniz");
	printf("\n1.Tam Sayi");
	scanf("%lf", &a);
	printf("2.Tam Sayi");
	scanf("%lf",&b);
	x = 2 * a*b;							/*Bu işlem de O = (2*a*b)/(a + b) harmonik ortalamanı bulan formul bu*/
	y = a + b;
	O = x / (a + b);
	printf("\a---------------------------------------------");
	printf("\n                      2*%.0lf*%.0lf          %.0lf   ",a,b,x);
	printf("\nHarmonik Ortalama = ------------- = ------------ = %.2f",O);
	printf("\n                       %.0lf+%.0lf           %.0lf   ",a,b,y);
}