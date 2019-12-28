#include<stdio.h>
#include<string.h>
#include<ctype.h>

int istiBukvi (char * zbor) {
	int i,j;
	int n = strlen(zbor);

	for (i=0;i<n;i++) {
		int pojavuvanja = 0;
		for (j=0;j<n;j++) {
			if (tolower(zbor[i])==tolower(zbor[j]))
				pojavuvanja++;
		}

		if (pojavuvanja>=3)
			return 1;
	}

	return 0;
}

int main () {
	FILE * input = fopen("test5.txt", "r");
	char momentalenZbor [20];
	int counter = 0;
	while ((fgets(momentalenZbor, 20, input))!= NULL) {
		if (istiBukvi(momentalenZbor)) {
			puts(momentalenZbor);
			counter++;
		}
	}

	fclose(input);

	printf("Vkupno %d zborovi.\n", counter);
	return 0;

}
