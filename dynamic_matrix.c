#include<stdio.h>
#include<stdlib.h>

int main() {
	int** p = (int**) malloc(sizeof(int*) * 2);
	int i;
	for (i = 0; i < 2; ++i) {
		p[i] = calloc(3, sizeof(int));
		int j;
		for (j = 0; j < 3; ++j) {
			p[i][j] = (i + 1) * (j + 1);
		}
	}
	
	for (i = 0; i < 2; ++i) {
		int j;
		for (j = 0; j < 2; ++j) {
			printf("%d ", *(*(p + i) + j));
		}
		printf("%d\n", *(*(p + i) + 2));
	}
	
	for (i = 0; i < 2; ++i) {
		free(p[i]);
	}
	free(p);
	return 0;
}