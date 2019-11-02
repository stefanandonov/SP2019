#include<stdio.h>

int main () {

	int x,y;

	scanf("%d %d", &x, &y);

	if (x>0 && y>0) {
		printf("I kvadrant");
	}
	else if (x>0 && y<0) {
		printf("IV kvadrant");
	}
	else if (x<0 && y>0) {
		printf("II kvadrant");
	}
	else if (x<0 && y<0) {
		printf("III kvadrant");
	}
	else {
		printf("Tochkata lezhi na oskite\n");
	}

	return 0;
}