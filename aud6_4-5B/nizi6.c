#include<stdio.h>

int main () {

	int n,i,m, niza[100];
	int pomestenaNiza[100];
	scanf("%d", &n);

	for (i=0;i<n;i++) {
		scanf("%d", &niza[i]);
	}

	scanf("%d", &m);

	for (i=0;i<n;i++) {
		pomestenaNiza[(i+m)%n] = niza[i];
	}

	for (i=0;i<n;i++) {
		printf("%d ", pomestenaNiza[i]);
	}



	return 0;
}