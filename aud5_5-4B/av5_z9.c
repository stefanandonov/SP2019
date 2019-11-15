#include<stdio.h>
#include<math.h>

int main () {
	int n,i;
	int broj;
	int sum_parni = 0;
	int sum_neparni = 0;

	scanf("%d", &n);

	for (i=1;i<=n;i++) {
		scanf("%d", &broj);
		if (i%2 == 0) { //parna
			sum_parni+=broj;
		}
		else { //neparna
			sum_neparni+=broj;
		}
	}

	if (fabs(sum_parni - sum_neparni)<10) {
		printf("Dvete sumi se slicni\n");
	}
	else {
		printf("Dvete sumi mnogu se razlikuvaat");
	}

	return 0;
}