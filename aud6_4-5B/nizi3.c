#include<stdio.h>
#define MAX 100

int main () {

	int niza [MAX];
	int n,i;
	int flagRastecka, flagOpagjachka;

	//vcituvanje na niza

	scanf("%d", &n);
	for (i=0;i<n;i++)
		scanf("%d", &niza[i]);

	if (niza[1]>niza[0])
		flagRastecka = 1;
	else
		flagRastecka = 0;

	if (niza[1]<niza[0])
		flagOpagjachka = 1;
	else
		flagOpagjachka = 0;

	if (!flagRastecka && !flagOpagjachka) {
		printf("NITU RASTECHKA NITU OPAGJACHKA");
		return 0;
	}

	for (i=2;i<n;i++) {
		if (niza[i]>=niza[i-1])
			flagOpagjachka=0;
		if (niza[i]<=niza[i-1])
			flagRastecka=0;
	}

	if (flagRastecka) {
		printf("RASTECHKA");
	}
	else if (flagOpagjachka) {
		printf("OPAGJACHKA");
	}
	else {
		printf("NITU RASTECHKA NITU OPAGJACHKA");
	}


}