#include<stdio.h>

int faktoriel (int n) {
	if (n==1)
		return 1;
	else
		return n*faktoriel(n-1);
}

int suma (int n) {
	if (n==2) {
		printf("%d KRAJ", n);
		return 1 + faktoriel(1+2);
	}
	else {
		int sum = 0,i;
		for (i=1;i<=n;i++)
			sum+=i;
		printf("%d + suma(%d-1)\n", sum, n);
		return faktoriel(sum) + suma(n-1);
	}
}

int main (){
	int n=5;

	printf("%d", suma(5));

}