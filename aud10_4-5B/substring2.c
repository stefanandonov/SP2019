#include<stdio.h>
#include<string.h>

int subString (char * greater, char * smaller) {
	if (strlen(smaller) > strlen(greater))
		return 0;
	char * result = strstr(greater,smaller);
	if (*result) {
		return 0;
	}
	else
		return 1;

}

int main () {
	char pogolem[100];
	char pomal[100];

	gets(pogolem);
	gets(pomal);

	printf("%s", subString(pogolem, pomal) ? "YES" : "NO");

	return 0;
}