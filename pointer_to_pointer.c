#include<stdio.h>

int main() {
	int x = 3;
	int* p = &x;
	int** p2 = &p;
	
	printf("x: %d, %d, %d\n", x, *p, **p2);
	**p2 = 5;
	printf("x new value: %d\n", x);
	
	return 0;
}