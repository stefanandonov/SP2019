#include<stdio.h>

void swap (int * x, int * y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

void bubbleSort (int * niza, int n) {
	int i, j;
	for (i=0;i<n;i++) {
		for (j=0;j<n-i-1;j++) {
			if (*(niza+j)>*(niza+j+1)) {
				swap((niza+j), (niza+j+1));
			}
		}
	}
}

int main () {
	int niza[100];
	int n;
	int i;

	scanf("%d", &n);
	for (i=0;i<n;i++)
		scanf("%d", (niza+i));

	bubbleSort(niza, n);

	for (i=0;i<n;i++)
		printf("%d ", *(niza+i));
}