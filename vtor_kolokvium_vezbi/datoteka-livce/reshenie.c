#include <stdio.h>
#include <string.h>

// ne menuvaj ovde
void wf() {
    FILE *f = fopen("livce.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wf();

    FILE * livce = fopen("livce.txt", "r");

    int uplata;
    int prv = 1;
    char sifra [20], maxSifra [20];
    int tip, maxTip;
    double kvota, maxKvota;
	double totalKvota = 1.0;
    fscanf(livce, "%d", &uplata);
    //printf("%d\n", uplata);

    while (fscanf(livce, "%s %d %lf", &sifra, &tip, &kvota) &&!feof(livce)) {
        if (prv) {
            strcpy(maxSifra, sifra);
            maxTip = tip;
            maxKvota = kvota;
            prv=0;
        }
        else {
            if (kvota > maxKvota) {
                strcpy(maxSifra, sifra);
            	maxTip = tip;
            	maxKvota = kvota;
            }
        }
        totalKvota*=kvota;
    }
    
    printf("%s %d %.2lf\n", maxSifra, maxTip, maxKvota);
    printf("%.2lf", totalKvota * uplata);
    
    


    return 0;

}
