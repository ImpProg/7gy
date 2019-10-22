#include<stdio.h>

struct Complex {
	double re;
	double im;
};

struct Complex add(struct Complex* c1, struct Complex* c2) {
	struct Complex result;
	result.re = c1->re + c2->re;
	result.im = c1->im + c2->im;
	
	return result;
}

int main() {
	struct Complex y = {.re = 1.2, .im = 3.6};
	struct Complex x = {.re = 4.56, .im = 8.76};
	struct Complex sum = add(&x, &y);
	printf("%2.2f + %2.2fi\n", x.re, x.im);
	printf("%2.2f + %2.2fi\n", sum.re, sum.im);
	
	return 0;
}