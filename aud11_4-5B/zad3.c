#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 100

int main () {
	FILE * input = fopen("test3.txt", "r");
	FILE * output = fopen("transponirana.txt", "w");

	float matrica[MAX][MAX];
	float transponirana[MAX][MAX];

	int m,n,i,j;

	fscanf(input, "%d %d", &m, &n);

	for (i=0;i<m;i++) {
		for (j=0;j<n;j++) {
			fscanf(input, "%f", &matrica[i][j]);
		}
	}

	for (i=0;i<m;i++) {
		for (j=0;j<n;j++) {
			transponirana[j][i] = matrica[i][j];
		}
	}

	for (i=0;i<n;i++) {
		for (j=0;j<m;j++) {
			fprintf(output, "%.2f\n", transponirana[i][j]);
		}
	}


	fclose(input);
	fclose(output);

	return 0;


}