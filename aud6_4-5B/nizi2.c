#include<stdio.h>
#define MAX 100

int main () {

	int niza [MAX];
	int n,i,sumParni = 0, sumNeparni = 0;

	//vcituvanje na niza

	scanf("%d", &n);
	for (i=0;i<n;i++)
		scanf("%d", &niza[i]);

	for (i=0;i<n;i++) {
		if (niza[i]%2==0)
			sumParni+=niza[i];
		else
			sumNeparni+=niza[i];
	}

	printf("Suma parni: %d\nSuma neparni: %d\nOdnos: %.2f",
		sumParni,
		sumNeparni,
		(float) sumParni/sumNeparni);



	return 0;
}