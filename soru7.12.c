/*Girilen mil değerini km-ye ceviren program*/
#include<stdio.h>

void main()
{
	const double m = 1.609;		/*1 milin km değeri*/
	double x;
	float y;
	printf("Uzunluk giriniz (mil): ");
	scanf("%lf",&x);
	y = x*m;
	printf("----------------------------------------");
	printf("\nGirilen degeri %.2lf mil, %.2fkm- dir.",x,y);

}