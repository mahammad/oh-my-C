/*Girilen santigrant degerini Fahrenhayt degerine ceviren C program*/
#include <stdio.h>

void main()
{
	int x, F;
	printf("Sicakligi Giriniz (oC): ");
	scanf("%d",&x);
	F = (9 * x - 160) / 5;					/*Bu işlemde ben {1(oC)=((F-32)/180)100} deklemini sadeleştirip yazdım!*/
	printf("------------------------------");
	printf("\nGirilen %d(oC),%d Fahrenhayt",x,F);
}