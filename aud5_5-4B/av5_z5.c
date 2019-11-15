#include <stdio.h>

int main () {
	int a,b;
	int i, broj;
	int cifra, obratenBroj;

	scanf("%d %d", &a, &b);

	for (i=a;i<=b;i++) {
		obratenBroj=0;
		broj = i;
		while (broj) {
			cifra = broj%10;
			obratenBroj = obratenBroj*10 + cifra;
			broj/=10;
		}

		if (i==obratenBroj) {
			printf("%d\n", i);
		}

	}
	return 0;


}