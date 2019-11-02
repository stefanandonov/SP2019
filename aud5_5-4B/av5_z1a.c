#include<stdio.h>

int main () {

	int i;
	int sum = 0;
	//long product = 1;
	for (i=10;i<100;i++) {
		if (i%2==0) {
			//printf("%d\n", i);
			sum+=i;
			//product*=i;
		}
	}

	printf("Sum: %d\n", sum, product);
	return 0;
}