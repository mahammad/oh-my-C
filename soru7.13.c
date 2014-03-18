/*Girilen inç degerinin kaç cm ve mm oldugunu bulan C program*/
#include <stdio.h>

void main()
{
	const double i = 2.54, c = 10;			/*i=1 incin kac cm olduğunu, c=1 cm kac mm oldugunu bildirdim*/
	int x;
	float l,j;
	printf("Uzunluk (inc) : ");
	scanf("%d",&x);
	l = x*i;
	j = l*c;
	printf("---------------------------");
	printf("\n1 inc =%.2fcm =%.1fmm",l,j);
}