/*Acının taradıgı değeri bulan C program*/
#include <stdio.h>

int main()
{
	const double pi = 3.14;
	int r, X;
	float A;				/*Alan*/
	printf("Yaricap deger giriniz      : ");
	scanf("%d",&r);
	printf("Merkez aci degerini giriniz: ");
	scanf("%d",&X);
	A = pi*r*r*(X / 360.0);
	printf("\n==================================");
	printf("\nAcinin taradigi alan %.3f cm-dir.",A);
}