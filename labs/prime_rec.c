#include<stdio.h>

int rekPrime (int broj, int delitel) {
	if (delitel==1)
		return 1;
	else {
		if (broj%delitel==0)
			return 0;
		else
			return rekPrime(broj,delitel-1);
	}
}

int firstPrime (int broj) {
	int i;
	for (i=broj+1; ;i++) {
		if (rekPrime(i))
			return i;
	}
}

int razlika (int broj) {
	return firstPrime(broj, broj/2+1) - broj;
}

int main () {
	int n;
	scanf("%d", &n);
	printf("%d", razlika(n));
	return 0;
}