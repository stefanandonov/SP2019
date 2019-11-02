#include<stdio.h>

int main () {

	int points;
	char sign = ' '; //default vrednost 
	scanf("%d", &points);


	if (points<0 || points>100) {
		printf("Not valid points!");
		return 0;
	}

	int lastDigit = points%10;
	if (lastDigit>=1 && lastDigit<=3)
		sign='-';

	if (lastDigit==8 || lastDigit==9 || lastDigit==0) {
		if (points<91)
			sign='+';
	}

	if (points<=50) {
		printf("5 ");
	}
	else if (points<=60) {
		printf("6%c", sign);
	}
	else if (points<=70) {
		printf("7%c", sign);
	}
	else if (points<=80) {
		printf("8%c", sign);
	}
	else if (points<=90) {
		printf("9%c", sign);
	}
	else {
		printf("10%c", sign);
	}

	return 0;
}