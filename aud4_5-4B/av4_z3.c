#include<stdio.h>

int main () {
	double x,y;

	scanf("%f %f", &x, &y);

	//validnost na promenlivite

	if (x==0.0 || y==0.0) {
		printf("Tochkata lezhi na edna od oskite!\n");
		return 0;
	}

	if (x>0) { //IV i I kvadrant
		if (y<0) {
			printf("4\n");
		}
		else { //y>0
			printf("1\n");
		}
	}
	else { //x<0
		if (y<0) {
			printf("4\n");
		}
		else { //y>0
			printf("3\n");
		}
	}

	return 0;
}