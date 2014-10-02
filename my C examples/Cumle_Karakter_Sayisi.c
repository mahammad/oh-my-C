#include <stdio.h>
#include <string.h>

int main() {
	int t = 0, i=0, h=0,j;
	char cumle[BUFSIZ],cumle2[BUFSIZ];
	printf("Cumle giriniz\n");
	gets(cumle);
	for (i; i <= strlen(cumle); i++)
	{
		if (cumle[i]==' ' || cumle[i]=='\0')
		{
			j=j-1;
			for (j; j >=t; j--)
			{
				cumle2[h] = cumle[j];
				h++;
			}
			h++;
			cumle2[h-1]=' ';
			t=i+1;
		}
	}
	cumle2[strlen(cumle)]= '\0';
	puts(cumle2);
	printf("\n");
	return 0;
}
