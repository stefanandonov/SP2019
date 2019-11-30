#include<stdio.h>

int main () {
	int m,matrica[100][100];
	int max, min;
	int i,j;

	scanf("%d", &m);
	for (i=0;i<m;i++) {
		for (j=0;j<m;j++) {
			scanf("%d", &matrica[i][j]);
		}
	}

	max = matrica[0][0];
	min = matrica[0][0];

	for (i=0;i<m;i++) {
		for (j=0;j<m;j++) {
			if (matrica[i][j]>max) {
				max=matrica[i][j];
			}
			if (matrica[i][j]<min) {
				min=matrica[i][j];
			}
		}
	}

	for (i=0;i<m;i++) {
		for (j=0;j<m;j++) {
			if (i==j) {
				matrica[i][j]=(max-min);
			}
			else if (i<j) {
				matrica[i][j]=min;
			}
			else {
				matrica[i][j]=max;
			}
			printf("%d ", matrica[i][j]);
		}
		printf("\n");
	}


	return 0;
}