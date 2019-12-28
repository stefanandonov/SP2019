#include<stdio.h>
#include<string.h>
#include<ctype.h>

int eSamoglaska(char bukva) {
	bukva = tolower(bukva);
	return (bukva=='a') || (bukva=='e') || (bukva=='i') || (bukva=='o') || (bukva=='u');
}

int main () {

	FILE * file = fopen("test1.txt","r");

	char currChar; 
	int soglaski = 0;
	int samoglaski = 0;

	while ((currChar=fgetc(file))!=EOF) {
		if(isalpha(currChar)) {
			if (eSamoglaska(currChar)) {
				samoglaski++;
			}
			else {
				soglaski++;
			}
		} 
	}

	fclose(file);

	printf("Odnos samoglaski/soglaski: %d/%d = %.2f", 
		samoglaski, 
		soglaski,
		(samoglaski * 1.0) / soglaski);

	return 0;
}