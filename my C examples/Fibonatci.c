#include "stdio.h"

int faktoriyel(int);
char tersIslem(char a[], int n);
void printArray(char a[], int);

int main()
{
	int sayi;
	char isim[10] = { "p", "a", "m", "u", "k", "k", "a", "l", "e", '!' }

	printf("Sayi Gir: ");
	scanf("%d",&sayi);
	printf("sonuc: %d\n",faktoriyel(sayi));
	printArray(isim, 10);
	tersIslem(isim, 10);
	printArray(isim, 10);


	return 0;
}

int faktoriyel(int sayi)
{
	int sonuc = 1;
	int i;
	for (i = 0; i >= 0; i--)
	{
		if (i == 0)
			sonuc = sonuc * 1;
		if (i == 1)
			sonuc = sonuc * 1;
		if (i >= 2)
			sonuc = sonuc * i;

	}
	return sonuc;
}
char tersIslem(char a[], int n)
{
	char temp = ' ';
	for (int i = 0; i <n/2 ; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}

	return a[n];
}
void printArray(char a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%c\t",a[i]);
	}
	printf("\n");
}