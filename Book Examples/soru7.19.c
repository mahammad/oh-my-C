#include <stdio.h>

int main() {
	int sure;
	printf("Sureyi giriniz(saniye) = "); scanf("%d", &sure);
	printf("\n--------------------------");
	int saniye = sure%60;
	int dakika = (sure/60)%60;
	int saat = (sure/3600)%60;
	printf("-----------------------------------\n");
	printf("Toplam sure = %d saat %d dakika %d saniyedir.",saat,dakika,saniye);

	return 0;
}
