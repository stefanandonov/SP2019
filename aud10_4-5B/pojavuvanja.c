#include<stdio.h>
#include<string.h>

int pojavuvanja (char * string, char znak) {

	int count = 0, i;

	for (i=0;string[i]!='\0';i++) {
		if (string[i]==znak)
			++count;
	}

	return count;
}

int main () {
	char niza [100];
	char c;
	scanf("%c\n", &c);
	gets(niza);
	printf("%d", pojavuvanja(niza,c));
}