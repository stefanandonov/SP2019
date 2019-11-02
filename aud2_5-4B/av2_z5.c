#include <stdio.h>

int main () {

	int a = 19;
	//deklaracija
	int ost2 = a%2;
	int ost3 = a%3;
	int ost5 = a%5;
	int ost8 = a%8;

	printf("19%%2=%d\n", ost2);
	printf("19%%3=%d\n", ost3);
	printf("19%%5=%d\n", ost5);
	printf("19%%8=%d\n", ost8);
	return 0;
}