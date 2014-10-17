/*2 adet sayidan, büyük olanını bulp gosteren C program*/
#include <stdio.h>

int main() {
	int sayi1;
	int sayi2;
	printf("1. Sayi: "); scanf("%d", &sayi1);
	printf("2. Sayi: "); scanf("%d", &sayi2);
	if (sayi1 > sayi2) {
		printf("\nBuyuk sayi = %d",sayi1);
	} else
			printf("\nBuyuk sayi = %d",sayi2);
	
	return 0;
}
