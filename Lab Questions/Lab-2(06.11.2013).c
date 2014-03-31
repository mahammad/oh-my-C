/*Problem - 2 =>
input 2 number and find EBOB(the greatest common divisor of the numbers.) & 
EKOK(the smallest common multiple of the numbers.) this numbers*/
#include "stdio.h"

int main()
{
	int number1, number2;    //input 2 number from user
	int bumpNumbers, swap, divisor, bump = 1;	//swap == smallest number.
	int EBOB, EKOK; 			//

	printf("Enter 1.number: ");  scanf("%d",&number1);
	printf("Enter 2.number: ");  scanf("%d",&number2);

	swap = number1;
    if(swap > number2) //bu kısımda program daha hızlı çalışsın diye küçük sayıya kadar böldük.
    {
	    swap = number2;
    }
	bumpNumbers = number1 * number2; //we shall use => (number1*number2=EBOB*EKOK)

    for(divisor =2; divisor <= swap; divisor ++) //divide up a swap
    {
       while(number1%divisor == 0 && number2%divisor == 0) //divisor both => divide continued as long as
       {
        number1 = number1/divisor;
        number2 =number2/divisor;
        bump = bump*divisor;
       }
    }
    printf("EBOB = %d\n", (EBOB = bump));
    printf("EKOK = %d\n", (EKOK = bumpNumbers/EBOB));
    return 0;
}