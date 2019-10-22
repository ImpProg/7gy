#include<stdio.h>

double sum(int n, double (*func)(int)) {
	double sum = 0;
	int i;
	for (i = 1; i <= n; ++i) {
		sum += func(i);
	}
	return sum;
}	

double inverse(int x) {
	return 1. / x;
}

int main() {
	printf("%1.2f\n", sum(10, &inverse));
	return 0;
}