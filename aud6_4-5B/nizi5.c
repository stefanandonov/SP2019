#include<stdio.h>

int main () {

	int niza[100];
	int n,i,temp;

	scanf("%d", &n);
	for (i=0;i<n;i++)
		scanf("%d", &niza[i]);

	temp = niza[n-1];

	for (i=n-1;i>0;i--) {
		niza[i]=niza[i-1];
	}
	niza[0]=temp;

	for (i=0;i<n;i++)
		printf("%d ", niza[i]);



}