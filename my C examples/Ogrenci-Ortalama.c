/*Vize final notuna gore gecme ve kalmayi hesaplayan C program*/
#include <stdio.h>

int main() {
	int vize, final;
	printf("Vize notunuz giriniz : "); scanf("%d",&vize);
	printf("Final notunuz giriniz: "); scanf("%d",&final);
	float ortalama = (vize*0.4) + (final*0.6);
	if (ortalama >= 60) {
		printf("\nGecme notu 60!\nNotunuz = %.2f Gectiniz!", ortalama);
	} 
	 if (ortalama < 60) {
		printf("\nGecme notu 60!\nNotunuz = %.2f Kaldiniz!", ortalama);
	}
	return 0;
}
