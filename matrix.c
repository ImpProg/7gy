#include<stdio.h>

int main() {
	int matrix[2][3];
	
	int i;
	for (i = 0; i < 2; ++i) {
		int j;
		for (j = 0; j < 3; ++j) {
			matrix[i][j] = (i + 1) * (j + 1);
		}
	}
	
	int* p = (int*) matrix;
	for (i = 0; i < 2; ++i) {
		int j;
		for (j = 0; j < 2; ++j) {
			printf("%d ", *(p + (i * 3) + j));
		}
		printf("%d\n", *(p + (i * 3) + 2));
	}
	
	return 0;
}