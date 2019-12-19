#include<stdio.h>

int sumOfArray (int niza[], int n) {
	if (n==0) {
		return 0;
	}
	else {
		niza[n-1] + sumOfArray(niza,n-1);
	}
}

int main () {

}