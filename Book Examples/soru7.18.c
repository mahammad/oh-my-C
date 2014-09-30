#include <stdio.h>
#define Birim 0.159838
int main() {
	
	int ilk,son;
	printf("Ilk endeksi giriniz: "); scanf("%d", &ilk);
	printf("Son endeksi giriniz: "); scanf("%d", &son);
	printf("---------------------------\n");
	//islemler
	int miktar = son - ilk;
	float tuketim = miktar*Birim;
	float KDV = tuketim * 22/100;
	float Toplam = tuketim + KDV;
	//cikilar
	printf("Tuketim miktari(Son endeks - Ilk endeks): %d \n",miktar);
	printf("Tuketim Tutari: %.2f\n",tuketim);
	printf("KDV (%%22)     : %.3f\n",KDV);
	printf("----------------------\n");
	printf("Toplam        : %.3f\n",Toplam);
	
	return 0;
}
