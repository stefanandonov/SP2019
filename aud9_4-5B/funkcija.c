#include<stdio.h>

void printArray (int * array, int n) {
	int i;
	for (i=0;i<n;i++) {
		printf("%d ", *(array+i));
	}
}

void printArray2 (int * array) {
	int * ptr;
	for (ptr = array; ptr!=NULL; ptr++) {
		printf("%d ", *ptr);
	}
}

int max2 (int x, int y) {
	if (x>y)
		return x;
	else
		return y;
}

int max (int * array, int n) {
	if (n==0)
		return *(array);
	else 
		return max2(*(array+n-1), max(array, n-1));
}

int max2R (int * array) {
	if (array == NULL) 
		return 0;
	else 
		return max2(*(array), max2R(array-1));
}


void transformArray (int * array, int n) {
	int i;
	int maxOfArray = max(array, n);
	for (i=0;i<n;i++) {
		*(array+i) = *(array+i)-maxOfArray;
	}
}

void transformArray2 (int * array) {
	int maxOfArray = max2R(array);
	int * ptr;

	for (ptr = array; ptr != NULL ; ptr++) {
		*ptr = (*ptr - maxOfArray);
	}
}

int main (){
	int n,i,niza[100];

	scanf("%d", &n);

	for (i=0;i<n;i++)
		scanf("%d", (niza+i));

	int * ptr = niza+i;
	ptr = NULL;

	printf("MAX: %d", max2R(niza));
	transformArray2(niza);

	printArray2(niza);
	return 0;
}