#include<stdio.h>

int main () {

	float y=1.0,x;
	int n;
	scanf("%f %d", &x, &n);

	while (n!=0) {
		y*=x;
		--n;
	}

	printf("%.5f\n", y);



	return 0;
}