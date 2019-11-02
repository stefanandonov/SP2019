#include<stdio.h>

int main () {

	char a,b,c;

	scanf("%c%c%c", &a, &b, &c);

	int spec1, spec2, spec3;
	spec1 = !((a>=32 && a<=47) || (a>=58 && a<=64) || (a>=91 && a<=96) || (a>=123 && a<=126));
	spec2 = !((b>=32 && b<=47) || (b>=58 && b<=64) || (b>=91 && b<=96) || (b>=123 && b<=126));	
	spec3 = !((c>=32 && c<=47) || (c>=58 && c<=64) || (c>=91 && c<=96) || (c>=123 && c<=126));

	int letter1, letter2, letter3;
	letter1 = !((a>=65 && a<=90) || (a>=97 && a<=122));
	letter2 = !((b>=65 && b<=90) || (b>=97 && b<=122));
	letter3 = !((c>=65 && c<=90) || (c>=97 && c<=122));
	
	printf("%d%d%d\n", spec1, spec2, spec3);
	printf("%d%d%d", letter1, letter2, letter3);

}
