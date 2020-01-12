#include<stdio.h>
#include<math.h>

double aritmetickaSredina (int * niza, int n) {
	int i, sum=0;
	for (i=0;i<n;i++) {
		sum+=niza[i];
	}

	return (sum*1.0)/n;
}

int najdalecen (int * niza, int n, double sredina) {
	int maxRastojanie = -10;
	int maxElement;
	int i;
	for (i=0;i<n;i++) {
		if (abs(niza[i]-sredina)>min) {
			maxElement = niza[i];
			maxRastojanie = abs(niza[i]-sredina);
		}
	}

	return maxElement;
}

int main () {

	int i,j, matrica[100][100];
	int najdalecni [100];
	int m,n;
	scanf("%d %d", &m, &n);

	for (i=0;i<m;i++) {
		for (j=0;j<n;j++) {
			scanf("%d", &matrica[i][j]);
		}
	}

	for (i=0;i<m;i++) {
		najdalecni[i] = najdalecen(matrica[i], n, aritmetickaSredina(matrica[i]));
		printf("%d ", najdalecni[i]);
	}



	return 0;

}