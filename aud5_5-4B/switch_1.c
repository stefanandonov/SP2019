#include<stdio.h>
#include<string.h>

int main () {
	char c;

	// if (isdigit(c)) {
		
	// }

	scanf("%c", &c);
	switch (c){
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("SAMOGLASKA");
			break;
		case '0': case '1': case '2': case '3': case '4':
		case '5': case '6': case '7': case '8': case '9': 
			printf("CIFRA");
			break;
		default:
			printf("NITU CIFRA NITU SAMOGLASKA");
			break;
	}
	

	return 0;
}