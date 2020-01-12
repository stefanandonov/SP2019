#include<stdio.h>

int main () {
	int N,i,flagRastecki=1;

	scanf("%d", &N);

	for (i = N + 1; ;i++) {

		int temp = i;
		flagRastecki=1;
		while (temp>=10) {
			int poslednaCifra = temp%10;
			int pretposlednaCifra = temp/10%10;
			if (poslednaCifra <= pretposlednaCifra) {
				flagRastecki=0;
				break;
			}
			temp/=10;
		}

		if (flagRastecki) {
			printf("%d\n", i);
			break;
		}
	}

	return 0;
}