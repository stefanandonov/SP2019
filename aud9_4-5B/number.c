#include<stdio.h>

void increment (int * x) {
	(*x)++;
}

void swap (int * x, int * y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

void sum (int * left, int * right, int * result) {
	*(result) = (*left + *right);
}

int main () {
	int x = 5;
	increment(&x);
	printf("Incremented: %d\n",x);
	int y = 8;
	swap(&x, &y);
	printf("Swaped: x: %d y: %d", x, y);
	int res;
	sum(&x,&y,&res);
	printf("SUM x: %d y: %d res: %d", x, y, res);
}