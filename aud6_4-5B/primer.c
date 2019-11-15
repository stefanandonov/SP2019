#include<stdio.h>

int main () {
	int i = 4;
	do {
		printf("%d", ++i);
	} while (i<9);
	
	return 0;
}