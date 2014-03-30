/*Kurenin hacmini hesablayan C program*/
#include <stdio.h>

void main()
{
	int r;					/*r==yarıcarp*/
	const double pi = 3.14;
	float v;				/*V==hacim*/

	printf("Capi giriniz: ");
	scanf("%d",&r);
	v = (4 *pi/3.0)*r*r*r;
	printf("\nGirdi degerleri r=%dcm", r);
	printf("\nKurenin hecmi: %.4fcm kuptur.",v);
}