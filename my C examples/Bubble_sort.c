/*Bubble sort kabarcık sıralama*/
void Bubble_sort(int dizi[], int n) {
	int i, j, temp;
	for (i = n-1; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (dizi[j]>dizi[j+1])
			{
				temp = dizi[j];
				dizi[j] = dizi[j+1];
				dizi[j+1] = temp;
			}
		}
	}
}
