/*Cenberin uzunlugunu bulan C Program*/
#include <stdio.h>

void main()
{
	const double pi = 3.14;
	int r;					/*r= cenberin çapı*/
	float l;				/*l=cenberin uzunluğu*/
	printf("Cenberin yaricapini giriniz: ");
	scanf("%d",&r);
	l = 2 * pi*r;
	printf("-------------------------------");
	printf("\nCenberin uzunlugu     :%.2f",l);

}