/*Vize ve final notuna göre Harf notu*/
#include <stdio.h>

int main() {
	int vize, final;
	char harf;
	printf("Vize notunuz giriniz : "); scanf("%d",&vize);
	printf("Final notunuz giriniz: "); scanf("%d",&final);
	float ortalama = (vize*0.4) + (final*0.6);
    if (ortalama < 50) {
		harf = 'F';
	} else if (ortalama < 60) {
		harf = 'D';
	} else if (ortalama < 70) {
		harf = 'C';
	} else if (ortalama < 80) {
		harf = 'B';
	} else 
		harf = 'A';
	printf("===================================\n");
	printf("Basar notu = %.2f\tHarf notu:%c",ortalama,harf);
	return 0;
}
