#include<stdio.h>

int main () {
	int m,n,matrica[100][100], zbirNepKoloni=0;
	int zbirParRedici = 0;
	int i,j;

	scanf("%d %d", &m, &n);
	for (i=0;i<m;i++) {
		for (j=0;j<n;j++) {
			scanf("%d", &matrica[i][j]);
		}
	}

	for (i=0;i<m;i++) {
		for (j=0;j<n;j++) {
			if (j%2!=0) {
				zbirNepKoloni+=matrica[i][j];
			}

			if (i%2==0) {
				zbirParRedici+=matrica[i][j];
			}
		}
	}

	printf("%d", zbirParRedici - zbirNepKoloni);



	return 0;
}