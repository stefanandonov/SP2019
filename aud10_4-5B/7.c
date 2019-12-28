#include<stdio.h>
#include<string.h>
#include<ctype.h>

void cleanString (char * original, char * cleansed) {
	int i;
	int j=0;
	for (i = 0;i<strlen(original);i++) {
		if (isalpha(original[i])) {
			if (isupper(original[i])) {
				cleansed[j] = tolower(original[i]);
			}
			if (islower(original[i])) {
				cleansed[j] = toupper(original[i]);
			}
			++j;
		}
	}
	cleansed[j]='\0';
}

int main () {
	char original [100];
	char cleansed [100];

	gets(original);

	cleanString(original,cleansed);

	puts(cleansed);

	return 0;
}