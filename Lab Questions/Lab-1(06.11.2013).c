/*Problem 1=> 
Entered from the keyboard, six record number of grain into a directory and 
then enter the code sequence reverses.*/
#include "stdio.h"

int main()
{
	int number[6];  //directory of 6 number which enter the user.
	int i,j,swap;   //loop valuge

	for (i = 0; i < 6; i++) //this loop print and scan number
	{
		printf("%d. number:",i+1);
		scanf("%d",&number[i]);
	}
	printf("Reverses number:");
	for (i = 5; i >= 0; i--) //this loop print reverses number.
	{
		printf("%d, ", number[i]);
	}
	return 0;
}