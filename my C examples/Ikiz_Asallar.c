#include "stdio.h"

int main() {
	int enbuyukIkiz, asal = 0, onceki = 0, sorgu, i;
	for ( i = 0; i <= 99; i++)
	{
		sorgu = 1;
		int j;
		for ( j = 10; j < i; j++)
		{
			if (i % j == 0)
			{
				sorgu = 0;
				break;
			}
		}
		if (sorgu == 1)
		{
			onceki = asal;
			asal = i;
		}
		if (asal - onceki == 2)
		{
			enbuyukIkiz = asal;
		}
	}
	printf("%d - %d ", enbuyukIkiz, enbuyukIkiz -2 );
	return 0;
}
