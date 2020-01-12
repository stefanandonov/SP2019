#include<stdio.h>

int main () {
	int x, i,j,k;

	scanf("%d", &x);

	for (i=2;i<=x;i++) {
		//proverka dali i e prost broj
		int prost = 1;
		for (k=2;k<=i/2;k++) {
			if (i%k==0) {
				prost=0;
				break;
			}
		}

		if (prost==1)
			continue;

		for (j=1;j<=x;j+=2) {

			if ((i+j)==x) {
				printf("%d + %d = %d", i, j, x);
			}

		}
	}

	return 0;
}