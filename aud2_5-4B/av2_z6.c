#include <stdio.h>
#include <math.h>

int main () {
	float radius;
	const float PI = 3.14;

	scanf("%f", &radius);
	
	float area = radius * radius * PI;
	//float area1 = pow(radius,2) * PI;
	float perimeter = 2 * radius * PI;
	printf("The area is : %.2f\n", area);
	printf("The perimeter is : %.2f\n",perimeter );
	return 0;
}