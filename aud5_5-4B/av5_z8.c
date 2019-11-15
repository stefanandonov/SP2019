#include<stdio.h>

int main () {

	int number;
	int max1, max2;
	int flag = 1;

	while (scanf("%d", &number)) {
		if (flag) {
			max1 = number;
			max2 = number;
			flag=0;
		}
		else {
			if (number>max1 || number>max2) {
				if (max1>max2) {
					max2 = number;
				}
				else {
					max1 = number;
				}
			}			
		}
	}

	printf("%d %d", max1, max2);


	return 0;
}