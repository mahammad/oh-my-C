/*1000000 kucuk pozitif tam sayilarin rakamlarının toplamının girilen degerde kaç tane olduğunu bulan uygulama*/

#include "stdio.h"


int numberDigitCount(int number){
	int count = 0;
  while(number != 0)
  {
      number/=10;          
      ++count;
  }
  return count;
}

int ikiBasamak(int number){
	return (number%10) + (number/10);
}
int ucBasamak(int number) {
	return (number/100) + ikiBasamak(number-(number/100)*100);
}
int dortBasamak(int number){
	return ((number/1000) + ucBasamak(number-(number/1000)*1000));
}
int besBasamak(int number){
	return ((number/10000) + dortBasamak(number-(number/10000)*10000));
}
int altiBasamak(int number){
	return ((number/100000) + besBasamak(number-(number/100000)*100000));
}

int main(int argc, char const *argv[])
{	int i,  deger = 0,count = 0;
	printf("Rakamlarin toplaminin degerini belirleyin(1-54 araligi): " );
	scanf("%d",&deger);
	while (deger > 54) {
		printf("\t1000000'dan kucuk sayilardan Rakamlarin toplami max 54 dur.\nRakamlarin toplaminin degerini belirleyin(1-54 araligi): " );
		scanf("%d",&deger);
	}
	
	for (i = 1; i < 1000000; i++)
	{
		int countDigit= numberDigitCount(i);
		if (countDigit == 1)
		{
			if (i == deger)
			{
				count++;
			}
		}
		else if (countDigit == 2)
		{
			if (ikiBasamak(i) == deger)
			{
				count++;
			}
		} 
		else if (countDigit == 3)
		{
			if (ucBasamak(i) == deger)
			{
				count++;
			}
		}
		else if (countDigit == 4)
		{
			if (dortBasamak(i) == deger)
			{
				count++;
			}
		}
		else if (countDigit == 5)
		{
			if (besBasamak(i) == deger)
			{
				count++;
			}
		}
		else if (countDigit == 6)
		{
			if (altiBasamak(i) == deger)
			{
				count++;
			}
		} 
	}
	printf("- Rakamlarinin toplami %d olan %d pozitif tam sayi var.", deger, count);
	return 0;
}
