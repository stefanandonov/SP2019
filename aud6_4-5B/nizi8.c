#include<stdio.h>

int main () {
	int niza[100], bezDuplikati[100], n, i, j;
	int duplikat = 0;
	int k = 0;

	scanf("%d", &n);

	for (i=0;i<n;i++) {
		scanf("%d", &niza[i]);
	}

	for (i=0;i<n;i++){
		duplikat = 0;

		for (j=0;j<k;j++) {
			if (niza[i]==bezDuplikati[j]) {
				duplikat=1;
				break;
			}
		}

		if (!duplikat) {
			bezDuplikati[k++] = niza[i];
		}
		
	}

	for (i=0;i<k;i++) {
		printf("%d", bezDuplikati[i]);
	}

	return 0;
}