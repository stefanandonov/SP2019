#include<stdio.h>

void transform (int *	 array, int n) {
	int i;
	for (i=0;i<n;i++) {
		if (*(array+i)%2==0) {
			*(array+i)=1;
		}
		else {
			*(array+i)=0;
		}
	}
}

void incrementBy (int * a, int plus) {
	*(a)+=plus;
}



int main () {
	int a = 5;

	incrementBy(a,2);
	printf("%d", a);

	return 0;
}