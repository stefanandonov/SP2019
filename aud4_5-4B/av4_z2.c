#include <stdio.h>

int main () {
	int year;

	scanf("%d", &year);

	if ((year%400==0) || ((year%4==0) && (year%100!=0))) {
		printf("The year is a leap year!");
	} 
	else {
		printf("The year is not a leap year!\n");
	}
	return 0;
}