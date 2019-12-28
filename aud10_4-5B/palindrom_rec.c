#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 100

void cleanString (char * original, char * cleansed) {
	int i;
	int j=0;
	for (i = 0;i<strlen(original);i++) {
		if (isalpha(original[i])) {
			cleansed[j] = tolower(original[i]);
			++j;
		}
	}
	cleansed[j]='\0';
}

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
	char original [MAX];
	char cleansed [MAX];
	char prevrtena [MAX];

	gets(original);

	cleanString(original, cleansed);
	reverse(cleansed, prevrtena);

	printf("%s", strcmp(cleansed,prevrtena)==0 ? "YES" : "NO");
	

	return 0;

}