/*Lab-23.10.2013 3.Soru kullanıcıdan alınan 2 sayının değişken isimlerin değiştiren C Program*/
#include "stdio.h"

void main()
{
	int x, y;
	int temp;	/*swap yapmamız için gerekli*/
	printf("x=");
	scanf("%d",&x);
	printf("y=");
	scanf("%d", &y);
	temp=x;
	x = y;
	y = temp;
	printf("\nx=%d", x);
	printf("\ny=%d",y);
}