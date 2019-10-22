#include<stdio.h>

double sqr(double x) {
	return x * x;
}

int main() {
	double (*func)(double) = &sqr;
	
	printf("%2.2f\n", (*func)(4));
	
	return 0;
}