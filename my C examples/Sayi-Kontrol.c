/*3 sayinin en büyük olani*/
#include <stdio.h>

int main() {
	int sayi1, sayi2, sayi3,En_Buyuk=0;
	printf("3 adet sayi giriniz:"); scanf("%d%d%d",&sayi1,&sayi2,&sayi3);
	En_Buyuk = sayi1;
	if (En_Buyuk < sayi2) {
		En_Buyuk = sayi2;
	} 
	if (En_Buyuk < sayi3) {
		En_Buyuk = sayi3;
	}
	printf("En buyuk sayi: = %d",En_Buyuk);
	
	return 0;
}
