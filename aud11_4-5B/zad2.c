#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 100

int main () {

	char momentalen [MAX];

	FILE * vlezen = fopen("test2.txt", "r");
	FILE * izlezen = fopen("izlez2.txt", "w");

	while ((fgets(momentalen, MAX, vlezen))!=NULL) {
		int dolzinaNaRed = strlen(momentalen);
		fprintf(izlezen, "%d\n%s\n", 
			dolzinaNaRed,
			momentalen);
	}

	fclose(vlezen);
	fclose(izlezen);

	return 0;
}