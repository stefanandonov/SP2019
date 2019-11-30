#include<stdio.h>

int main () {
	int m,matrica[100][100];
	int i,j;

	scanf("%d", &m);
	for (i=0;i<m;i++) {
		for (j=0;j<m;j++) {
			scanf("%d", &matrica[i][j]);
		}
	}

	int simetricna = 1;
	for (i=0;i<m;i++) {
		for (j=0;j<m;j++) {
			if (matrica[i][j]!=matrica[j][i]) {
				simetricna=0;
				break;
			}
		}
		if (!simetricna)
			break;
	}

	printf("%s", simetricna ? "SIMETRICHNA" : "NE E SIMETRICHNA");


	return 0;
}