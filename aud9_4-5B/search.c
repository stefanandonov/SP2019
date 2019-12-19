#include<stdio.h>

int linearSearch (int * niza, int n, int key) {
	int i;
	for (i=0;i<n;i++) {
		if (*(niza+i)==key)
			return i;
	}
}

int binarySearch (int * niza, int n, int key) {
	int start = 0;
	int end = n-1;

	while (start!=end) {
		int middle = (start+end)/2;
		if (key<*(niza + middle)) {
			printf("(%d, %d)\n", start ,end);
			end = middle;
		}
		else if (key> *(niza+middle)) {
			printf("(%d, %d)\n", start ,end);
			start = middle;
		}
		else {
			printf("Element found at %d\n", middle);
			return middle;
		}
		
	}
	printf("Element found at %d\n", start);
	return start;
}

int main () {

	int niza [1000000];
	int i;
	for (i=0;i<1000000;i++) {
		//niza[i]=i+1;
		*(niza+i) = i+1;
	}

	printf("%d", linearSearch(niza, 1000000, 800999));
	printf("%d", binarySearch(niza, 1000000, 800999));


}