//entered as a positive integer from the keyboard according to 
//the values ​​in between the starting and ending numbers and pieces that find both my C porgram.
#include "stdio.h"

int main()
{
	int count = 0;
	int starting, fnishing;
	int i;
	printf("Enter starting number:");
	scanf("%d", &starting);
	printf("Enter fnishing number:");
	scanf("%d", &fnishing);


	for (i = starting; i <= fnishing; ++i)
	{
		if (i % 2 == 0)
		{
			printf("%d", i);
			count++;
		}
	}
	printf("Total number: %d\n", count);
	return 0;
}