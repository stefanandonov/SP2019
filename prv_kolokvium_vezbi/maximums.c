#include<stdio.h>

int main () {
	int N,i;
	int a,b,c, max;
	float s, maxS;
	int flagFirst = 1;

	scanf("%d", &N);

	for (i=0;i<N;i++) {
		//vcituvanje na trojkata
		scanf("%d %d %d", &a, &b, &c);

		//baranje na maksimum
		max = a;
		if (b>max) {
			max=b;
		}
		if (c>max) {
			max=c;
		}

		//presmetka na s
		s = max/2.0 + 3*max - max*max;

		if (flagFirst) {
			maxS = s;
			flagFirst=0;
		}
		else if (s>maxS) {
				maxS = s;			
		}

		printf("%.1f\n", s);

	}

	printf("Najgolema: %.1f", maxS);

	return 0;
}