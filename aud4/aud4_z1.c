#include <stdio.h>

int main () {
	int a,b;
	int max;

	scanf("%d %d",&a, &b);

	if (a>b)
		max=a;
	else
		max=b;

	printf("%d\n", max);

	return 0;
}