/*Sayinin Tek ve ya cift */
#include <stdio.h>

int main() {
	int sayi;
	printf("Lutfen sayi giiniz: "); scanf("%d",&sayi);
	if (sayi%2 == 0) {
		printf("Sayi cift");
	} else 
		printf("Sayi tek.");

	return 0;
}
