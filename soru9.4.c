//10 pieces of positive integers entered from the keyboard, which is 
//the average of a single C program to find and display.
#include "stdio.h"

int main()
{
	int number[10];
	int single[10];
	int total = 0;
	int average;
	int j, k, i;

	for (i = 0; i < 10; i++)
	{
		printf("Enter integer number:",i+1);
		scanf("%d",&number[i]);
		if (number[i] % 2 == 1)
		{
			
			number[i] = single[j];
			j++;
		}
	}
	for (k = 0; k < j; k++)
	{
		total = total + single[j];

 	}
 	average = total/(j-1);
 	printf("Arithmetic average is %d .", average);
 	return 0;
}