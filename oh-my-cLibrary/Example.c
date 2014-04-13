#include "stdio.h"
#include "calculator.h" //that I made my library
//ctotl(x,y) <= that function total of numbers, 
//csubt(x,y) <= that function subraction of numbers,
//cdivs(x,y) <= that function division of numbers,
//cbump(x,y) <= that function bumbp of numbers.

int main()
{	
	int number1; 
	int number2; 

	printf("Enter first number:");
	scanf("%d",&number1);
	printf("Enter second number:");
	scanf("%d",&number2);
	printf("%d\n", ctotl(number1,number2));		//calculating total of number.
	printf("%d\n", csubt(number1,number2));		//calculating subtraction of number.
	printf("%d\n", cdivs(number1,number2));		//calculating division of number.
	printf("%d\n", cbump(number1,number2));		//calculating bump of number.

	return 0;
}