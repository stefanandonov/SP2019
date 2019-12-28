#include<stdio.h>
#include<string.h>
#include<ctype.h>

int eSamoglaska(char bukva) {
	bukva = tolower(bukva);
	return (bukva=='a') || (bukva=='e') || (bukva=='i') || (bukva=='o') || (bukva=='u');
}

int brojSamoglaski (char * red) {
	int i, counter = 0;
	for (i=0;i<strlen(red);i++) {
		if (eSamoglaska(red[i])) {
			counter++;
		}
	}

	return counter;
}

int main () {

	FILE * vlez = fopen("test4.txt", "r");
	char momentalenRed [100];
	int povekeOd10 = 0;
	int vkupno = 0;
	int redenBroj = 1;
	int maxSamoglaski =0, maxRed = 1;
	while ((fgets(momentalenRed, 100, vlez))!=NULL) {
		int samoglaskiVoRed = brojSamoglaski(momentalenRed);
		vkupno += samoglaskiVoRed;
		if (samoglaskiVoRed>10)
			povekeOd10++;
		if (samoglaskiVoRed > maxSamoglaski) {
			maxSamoglaski = samoglaskiVoRed;
			maxRed = redenBroj;
		}
		++redenBroj;
	}

	printf("Vkupno %d reda imaat povekje od 10 samoglaski.\n", povekeOd10);
	printf("Vo datotekata ima vkupno %d samoglaski.\n", vkupno);
	printf("Dop. : Vo datotekata redot %d ima max broj na samoglaski (%d)\n", maxRed, maxSamoglaski);

	return 0;
}