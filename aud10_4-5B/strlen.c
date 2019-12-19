#include<stdio.h>
#include<string.h>

int stringLentgh(char * str) {
	int count = 0;
	while (*str!='\0') {
		count++;
		++str;
	}
	return count;
}

int strlenRecursive (char * str) {
	if (*str=='\0')
		return 0;
	else 
		return 1 + strlenRecursive(str+1);
}

int main () {
	char niza [100];
	
	
	gets(niza);
	printf("%d", strlenRecursive(niza));
}