#include<stdio.h>
#include<math.h>

int levaPolovina (int * redica, int n) {
	int i,sum = 0;
	for (i=0;i<n/2;i++)
		sum+=redica[i];

	if (n%2==1)
		sum+=redica[n/2];
	return sum;
}

int desnaPolovina (int * redica, int n) {
	int i,sum = 0;
	for (i=n/2;i<n;i++)
		sum+=redica[i];
	return sum;
}

void promeniSredni (int * redica, int n) {
	int razlika = abs(levaPolovina(redica,n) - desnaPolovina(redica,n));

	if (n%2==1) { //neparen broj koloni
		redica[n/2]=razlika;
	}
	else { //paren broj na koloni
		redica[n/2]=razlika;
		redica[n/2-1]=razlika;
	}
}

int main () {
	int m,n,i,j;
	int matrica[100][100];

	scanf("%d %d", &m, &n);

	for (i=0;i<m;i++) {
		for (j=0;j<n;j++) {
			scanf("%d", &matrica[i][j]);
		}
	}

	for (i=0;i<m;i++) {
		promeniSredni(matrica[i], n);
	}

	for (i=0;i<m;i++) {
		for (j=0;j<n;j++) {
			printf("%d ", matrica[i][j]);
		}
		printf("\n");
	}
	
	return 0;

}
