#include<stdio.h>

int main () {
	int i,c1, c2, c3, c4;

	for (i=1000;i<10000;i++) {
		c1 = i%10;
		c2 = i/10%10;
		c3 = i/100%10;
		c4 = i/1000;

		if ((c1+c2+c3) == c4) {
			printf("%d\n", i);
		}
	}

	return 0;
}