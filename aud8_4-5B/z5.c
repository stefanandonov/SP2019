#include<stdio.h>

int n8 (int broj) {
	if (broj==0)
		return 0;
	else {
		int posledna = broj%10;
		int pretposledna = broj%100/10;

		if (posledna==8 && pretposledna==8)
			return 2 + n8(broj/10);
		else if (posledna==8)
			return 1 + n8(broj/10);
		else 
			return 0 + n8(broj/10);
	}
}

int main () {

	printf("%d", n8(88188188));
	return 0;
}