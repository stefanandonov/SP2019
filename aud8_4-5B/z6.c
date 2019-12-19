#include<stdio.h>

int nzd (int a, int b) {
	if (b==0)
		return a;
	else
		return nzd (b, a%b);
}

int main () {
	
}