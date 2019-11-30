#include<stdio.h>

int main () {
	int m,n,matrica[100][100];
	int i,j;
	int kvadrati = 0;

	scanf("%d %d", &m, &n);
	for (i=0;i<m;i++) {
		for (j=0;j<n;j++) {
			scanf("%d", &matrica[i][j]);
		}
	}

	for (i=1;i<m-1;i++) {
		for (j=1;j<n-1;j++) {
			int vrednost = matrica[i-1][j-1];

			if (matrica[i-1][j]==vrednost && 
				matrica[i-1][j-1]==vrednost &&
				matrica[i][j+1]==vrednost &&
				matrica[i+1][j+1]==vrednost &&
				matrica[i+1][j]==vrednost &&
				matrica[i+1][j-1]==vrednost && 
				matrica[i][j-1]==vrednost) {
				kvadrati++;
			}
		}
	}

	printf("%d", kvadrati);


	
	return 0;
}