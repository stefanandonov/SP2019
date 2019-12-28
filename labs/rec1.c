#include<stdio.h>

long factoriel (long n) {
	if (n==0)
		return 1;
	return n*factoriel(n-1);
}

long member (long n) {
	int i;
	long sum = 0;
	for (i=1;i<=n;i++)
		sum+=i;
	printf("Member za %ld e %ld\n", n, factoriel(sum));
	return factoriel(sum);
}

long sum (long n) {
	if (n==1)
		return 1;
	else

		return member(n) + sum(n-1);
}

int main () {
	int n;
	scanf("%d", &n);
	printf("%ld", sum((long)n));



	return 0;
}