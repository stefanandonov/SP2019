#include<stdio.h>

int main () {
	int max_sum;
	int position;
	int curr_sum;
	int previous;
	int curr_number;
	int i=2;

	scanf("%d %d", &previous , &curr_number);
	curr_sum = previous+curr_number;
	max_sum = curr_sum;
	position=0;

	previous = curr_number;

	while (scanf("%d", &curr_number)) {

		curr_sum = previous+curr_number;
		if (curr_sum>max_sum) {
			max_sum=curr_sum;
			position=i;
		}

		++i;
		previous = curr_number;
		if (curr_sum<0)
			break;

	}

	printf("%d %d %d\n", max_sum, position, position+1 );


	return 0;
}