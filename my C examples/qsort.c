#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int siralama( const void *a, const void *b) {
  return *(int*)a - *(int*)b;
}

int karsilastir(const void *ktr1, const void *ktr2)
{
	return(strcmp((char*)ktr1,(char*)ktr2));      
}

int main() {

	int A[10] = {62,58,23,31,12,55,88,67,65,13};
	char *B[6] = {"mine","ayse","mehemmed","erhan","sibel","aysen"};
	qsort(A,10,sizeof(int),siralama);

	qsort((char *)B, 6 , sizeof(B[0]), karsilastir);

	for (int i = 0; i < 10; i++)
	{
		printf("A[%d] = %d\n",i,A[i]);
	}
	puts("--------------------");
	for (int k = 0; k < 6; k++)
	{
		printf("B[%d] = %s\n",k, B[k]);
	}
	return 0;
}