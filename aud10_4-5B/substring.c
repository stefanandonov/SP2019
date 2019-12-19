#include<stdio.h>
#include<string.h>

void printSubstring (char * str, int start, int end) {
	int i=0;
	for (i=start;i<=end;i++) {
		printf("%c", str[i]);
	}
}

int main () {
	char niza [100];
	int start,end;
	scanf("%d %d\n", &start, &end);	
	gets(niza);
	printSubstring(niza,start,end);
}