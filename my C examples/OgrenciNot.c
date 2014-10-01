#include <stdio.h>
void giris(int no[], int not[], int N);
void goruntu(int no[], int not[], int N);
float ortalama(int not[],int N);

int main() {
	int N;
	int OgrNo[BUFSIZ], BNotu[BUFSIZ];
	float ort;
	printf("Ogrenci sayisini giriniz: ");
	scanf("%d", &N);
	giris(OgrNo, BNotu, N);
	goruntu(OgrNo, BNotu, N);
	ort = ortalama(BNotu, N);
	printf("Not ortalaması:%5.2f\n", ort);
	return 0;
}

void giris(int no[], int not[], int N)
{
	int i;
	for (i = 0; i < N; ++i)
	{
		printf("Ogrenci no giriniz: ");
		scanf("%d", &no[i]);
		printf("%d numarali ogrencinin notunu gir: \n",no[i] );
		scanf("%d", &not[i]);
	}
}
void goruntu(int no[], int not[], int N)
{
	int i;
	printf("Ogrenci\tNotu\n");
	for (i = 0; i < N; ++i)
	{
		printf("%8d\t%3d\n", no[i], not[i]);
	}
}
float ortalama(int not[],int N)
{
	float t;
	int	i;
	t = 0;
	for (i = 0; i < N; ++i)
	{
		t = t + not[i];
	}
	float ort = t/N;
	return ort;
}
