#include<stdio.h>

int main () {
	int n,i, broj;
	int ostatok0=0, ostatok1=0, ostatok2=0;

	scanf("%d", &n);

	// for (i=0;i<n;i++) {
	// 	scanf("%d", &broj);
	// 	if (broj%3==0) {
	// 		ostatok0++;
	// 	}
	// 	else if (broj%3==1) {
	// 		ostatok1++;
	// 	}
	// 	else {
	// 		ostatok2++;
	// 	}
	// }

	do {
		scanf("%d", &broj);
		if (broj%3==0) {
			ostatok0++;
		}
		else if (broj%3==1) {
			ostatok1++;
		}
		else {
			ostatok2++;
		}
		--n;
	}while (n);
	
	while (n) {
		scanf("%d", &broj);
		if (broj%3==0) {
			ostatok0++;
		}
		else if (broj%3==1) {
			ostatok1++;
		}
		else {
			ostatok2++;
		}
		--n;
	}
	
	printf("Ostatok 0: %d\nOstatok 1: %d\nOstatok 2: %d",
		ostatok0,
		ostatok1,
		ostatok2);

	return 0;
}