#include "stdio.h"

int main() {
	int bolenitap, i, j;
	for (i = 1; i < 1000; i++)
	{
		bolenitap = 0;
		for (j = 1; j < i; j++)
		{
			if (i%j == 0)
			{
				bolenitap += j;
			}
		}
		if (bolenitap == i)
			printf("\n%d", bolenitap);
	}
	
	return 0;
}
