#include<string.h>
#include<ctype.h>
#include<stdio.h>

char shifrirajBukva (char karakter, int X) {
	if (isalpha(karakter)) {
		if (islower(karakter)) {
			return ((karakter-'a'+X)%26)+'a';
		}
		else {
			return ((karakter-'A'+X)%26)+'A';
		}
	}
	else {
		return karakter;
	}
}

void shifriraj(char * recenica, int X, int dolzina) {
	if (dolzina==0)
		return ;
	else {
		recenica[dolzina-1] = shifrirajBukva(recenica[dolzina-1], X);
		shifriraj(recenica, X, dolzina-1);
	}
}

int main () {
	int n, x, i;

	scanf("%d %d", &n, &x);

	char recenica[80];
	for (i=0;i<=n;i++) {
		gets(recenica);
		shifriraj(recenica, x, strlen(recenica));
		puts(recenica);
	}

	return 0;
}
