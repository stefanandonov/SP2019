#include<stdio.h>
#include<string.h>
#include<ctype.h>

void writeToFile() {
  FILE *f = fopen("text.txt", "w");
  char c;
  while((c = getchar()) != '#') {
    fputc(c, f);
  }
  fclose(f);
}

int eSamoglaska (char bukva) {
	bukva = tolower(bukva);
	return bukva=='a' || bukva=='e' || bukva=='i' || bukva=='u' || bukva=='o';
}

int main () {

	writeToFile();

	FILE * file = fopen("text.txt", "r");
	char posledna, momentalna;
	int first = 1;
    int counter=0;
	while ((momentalna = fgetc(file))!=EOF) {
		if (first) {
			posledna = momentalna;
			first = 0;
		}
		else {
			if (eSamoglaska(posledna)&&eSamoglaska(momentalna)) {
				printf("%c%c\n", tolower(posledna), tolower(momentalna));
                ++counter;
			}
			posledna = momentalna;
		}
	}
    
    printf("%d", counter);
}
