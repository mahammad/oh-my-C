#include "stdio.h"  

int binler(int);
int yuzler(int);
int onlar(int);
int birler(int);

int main() {
	int sayi;
	printf("4 Basamakli Sayi Giriniz: "); scanf("%d", &sayi);
	if (sayi < 10000 || sayi > 99999)
	{
		printf("Lutfen 4 basamakli sayi giriniz!!!\a");
	} 
	else
	{
		printf("Binler = %d" ,binler(sayi));
		printf("Yuzler = %d" ,yuzler(sayi));
		printf("Onlar  = %d" ,onlar(sayi));
		printf("Birler = %d" ,birler(sayi));
	}
	return 0;
}
int binler(int x) {
	return(x\1000);
}
int yuzler(int x) {
	int a;
	a = x%1000;
	return a\100;
}

int onlar(int x) {
	int a,b;
	a = x % 1000;
	b = a % 100;
	return b\10;
}
int birler(int x) 
	return x % 10 
