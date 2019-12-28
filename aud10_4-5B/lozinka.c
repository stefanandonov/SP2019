#include<stdio.h>
#include<string.h>
#include<ctype.h>

int strongPassword (char * password) {
	int i;
	if (strlen(password)<8)
		return 0;

	int hasCapitalLetter = 0;
	int hasDigit = 0;
	int hasSpecialChar = 0;

	for (i=0;i<strlen(password);i++) {
		if (isalpha(password[i]) && isupper(password[i])) {
			hasCapitalLetter=1;
		}
		if (isdigit(password[i])) {
			hasDigit=1;
		}
		if (!isalnum(password[i]) && !isspace(password[i])) {
			hasSpecialChar=1;
		}
	}

	return hasDigit && hasSpecialChar && hasCapitalLetter;
}

int main () {
	char password [100];

	gets(password);

	printf("%s", strongPassword(password) ? "YES" : "NO");

	return 0;
}