#include<stdio.h>

struct Point {
	double x;
	double y;
};

int main() {
	struct Point p;
	p.x = 2.3;
	p.y = -3.4;
	
	printf("x: %2.1f, y: %2.1f\n", p.x, p.y); 
	printf("size of Point: %lu\n", sizeof(struct Point));
	
	return 0;
}