#include "stdio.h"
#define GAS 304700  //Gas = m3 fiyati 304700 TL

int main() {
	int tutar;
	printf("Lutfen odenecek tutar giriniz: "); scanf("%d",&tutar);
	printf("-----------------------------------------\n");
	int KDV = tutar*15/100;
	int Bedel = tutar - KDV;
	float hak = Bedel/GAS;
	printf("Odenen toplam tutar = %d\n",tutar);
	printf("Hesaplanan KDV      = %d\n",KDV);
	printf("Gas bedeli          = %d\n",Bedel);
	printf("Hak edilen Gas      = %f\n m3",hak);
	return 0;
}
