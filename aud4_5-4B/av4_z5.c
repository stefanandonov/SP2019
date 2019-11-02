#include<stdio.h>
#include<math.h>

int main () {
	float a,b,c;

	scanf("%f %f %f", &a, &b, &c);

	if (!((a+b>=c) && (a+c>=b) && (b+c>=a))) {
		printf("Nevalidni vrednosti");
		return 0;
	}

	//naogjanje na maksimum i negovo smetuvanje
	// vo promenliva C
	if (a>b) {
		float temp = a;
		a = b;
		b= temp;
	}
	if (a>c) {
		float temp = a;
		a = c;
		c = temp;
	}
	if (b>c) {
		float temp = b;
		b = c;
		c = temp;
	}

	//Proveruvanje na Pitagorova Teorema

	if (a*a+b*b!=c*c) {
		//dali triagolnik NE E pravoagolen
		printf("Triagolnik ne e pravoagolen\n");
		return 0;
	}

	printf("Ploshtinata e: %.2f\n", (a*b)/2);



	return 0;
}