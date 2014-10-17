/**/
#include <stdio.h>

int main() {
	int sayi;
	printf("Lutfen 1 ile 5 arasinda bir sayi giiniz: "); scanf("%d",&sayi);
	if (sayi == 1)
		printf("%d okunushu ",sayi);
	if (sayi == 2)
		printf("%d okunushu ",sayi);
	if (sayi == 3)
		printf("%d okunushu ",sayi);
	if (sayi == 4)
		printf("%d okunushu ",sayi);
	if (sayi == 5)
		printf("%d okunushu ",sayi);
		
	return 0;
}
/*
 * 2.Yontem
 * 
int main() {
	int sayi;
	printf("Lutfen 1 ile 5 arasinda bir sayi giiniz: "); scanf("%d",&sayi);
	
	switch(sayi) {
		case 1:
		printf("Bir");
		break;
		case 2:
		printf("iki");
		break;
		case 3:
		printf("Uch");
		break;
		case 4:
		printf("Dost");
		break;
		case 5:
		printf("Besh");	
		break;
		default:
		printf("Yalnish");
	}
	
	return 0;
}*/
