#include<stdio.h>

int main () {

	int i;
	int sum = 0;
	for (i=10;i<100;i++) {
		if (i%2==1) {
			if (i!=99)
				printf("%d + ", i);
			else
				printf("%d ", i);
			sum+=i;
		}
	}

	printf("= %d\n", sum);
	return 0;
}