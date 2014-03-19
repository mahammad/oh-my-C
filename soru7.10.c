/*Aracın toplam yakıt maliyyetini bulan C programi*/
#include <stdio.h>

void main()
{
	double x, y;	/*x=lt ,y=TL*/
	int a;			/*a=km*/
	float T;		/*toplam yakıt maliyeti*/
	printf("1.Km basina yakit tukrtimi (lt):");
	scanf("%lf",&x);
	printf("2.  1 lt yakitin fiyati    (TL):");
	scanf("%lf",&y);
	printf("3.Aracin kat ettigi tomlam (km):");
	scanf("%d",&a);
	T = x*y*a;
	printf("\nToplam yakit maliyyeti %.2f TL - dir.",T);
}