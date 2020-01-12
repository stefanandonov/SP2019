#include<stdio.h>

int main () {

	int i,broj, N, sum=0, opcija;
	int ostatok;
	scanf("%d", &opcija);

	if (opcija==1) {
		scanf("%d", &broj);
		ostatok = broj%7;
	}
	else {
		scanf("%d", &N);
		for (i=0;i<N;i++) {
			scanf("%d", &broj);
			sum+=broj;
		}
		ostatok = sum%7;
	}

	if (!ostatok) { //ostatok==0
			printf("DA");
		}
		else {
			printf("NE %d", ostatok);
		}

	return 0;
}