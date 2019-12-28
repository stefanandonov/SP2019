#include<stdio.h>
#include<string.h>

void reverse (char * original, char * reversed) {
	int i=0;
	int j=0;
	for (i = strlen(original)-1;i>=0;i--) {
		reversed[j] = original[i];
		++j;
	}
	reversed[j]='\0';
}

int main () {
	char niza [100];
	char prevrtena [100];

	gets(niza);
	reverse (niza, prevrtena);
	printf("%s", strcmp(niza,prevrtena)==0 ? "YES" : "NO");
	return 0;
}