#include<stdio.h>
#include<math.h>
double aritmetickaSredina(int * redica, int n) {
	int i;
	double sum = 0.0;
	for (i=0;i<n;i++)
		sum+=redica[i];
	return sum/n;
}

int najodalecen(int * redica, int n) {
	double sredina = aritmetickaSredina(redica, n);
	int i,maxOdalecen;
	double maxRastojanie;

	for (i=0;i<n;i++) {
		if (i==0) {
			maxOdalecen = redica[0];
			maxRastojanie = fabs(redica[0]-sredina);
		}
		else {
			double rastojanie = fabs(redica[i]-sredina);
			if (rastojanie>maxRastojanie) {
				maxRastojanie = rastojanie;
				maxOdalecen = redica[i];
			}
		}
	}

	return maxOdalecen;

}

int main () {
	int m,n,i,j;
	int matrica[100][100];
	int najodaleceni[100];

	scanf("%d %d", &m, &n);

	for (i=0;i<m;i++) {
		for (j=0;j<n;j++) {
			scanf("%d", &matrica[i][j]);
		}
	}

	for (i=0;i<m;i++) {
		int max = najodalecen(matrica[i], n);\
		najodaleceni[i] = max;
		printf("%d ", najodaleceni[i]);
	}
}
