/*Sayinin negativ, pozitiv ve ya 0 olduğunu bulan C program*/
#include <stdio.h>

int main() {
	int sayi;
	printf("Lutfen sayi giiniz: "); scanf("%d",&sayi);
	if (sayi > 0) {
		printf("Bu sayi pozitifdir...");
	}
	if (sayi < 0) {
		printf("Bu sayi negatifdir...");
	}
	if (sayi == 0) {
		printf("Bu sayi sifirdir...");		
	}
	
	return 0;
}
/*
 * 2. yöntem
int main() {
	int sayi;
	printf("Lutfen sayi giiniz: "); scanf("%d",&sayi);	
	if (sayi > 0)
	{
		printf("Bu sayi pozitifdir...");
	} else if (sayi < 0)
	{
		printf("Bu sayi negatifdir...");		
	} else 
		printf("Bu sayi sifirdir...");
	
	return 0;
}*/
