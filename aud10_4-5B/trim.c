#include<stdio.h>
#include<string.h>
#include<ctype.h>

void trim (char * text, char * cleansed) {

	int i,j,start=0, end=strlen(text)-1;

	while (text[start]==' ') {
		start++;
	}

	while (text[end]==' ') {
		end--;
	}

	for (i=start;i<=end;i++) {
		cleansed[j++]=text[i];
	}
	cleansed[j]='\0';
}


int main () {

	char niza [100], cleansed[100];
	
	gets(niza);

	trim(niza,cleansed);

	puts(cleansed);

}