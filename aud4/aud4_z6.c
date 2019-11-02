#include <stdio.h>
// #include <math.h>

int main () {
	int a,b,c;

	scanf("%d %d %d", &a, &b, &c);

	if (((a+b)>c) && ((a+c)>b) && ((b+c)>a)) {
		//mozhe da ima triagolnik
		if (a >= b) {
			float tmp = a;
			a = b;
			b = tmp;
		}
		if (a >= c) {
			float tmp = a;
			a = c;
			c = tmp;
		}
		if (b >= c) {
			float tmp = b;
			b = c;
			c = tmp;
		}

		if ((a*a + b*b) == c*c) {
			printf("Pravoagolen triagolnik\n");
			printf("Plostina na triagolnikot: %.2f", (a*b)/2.0);
		}
	}
	else {
		printf("Ne mozhe da se kreira triagolnik");
	}
}