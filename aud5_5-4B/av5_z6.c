#include<stdio.h>

int main () {
	int number;
	int max;
	int flag = 1;

	while (scanf("%d", &number)) {
		if (flag) {
			max = number;
			flag=0;
		}
		if (number>100)
			continue;
		
		if (number > max) {
			max = number;
		}
	}

	printf("%d", max);

	return 0;
}