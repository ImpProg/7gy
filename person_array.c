#include<stdio.h>
#include "person.h"

typedef struct Person P;

int main() {
	P persons[] = {{.name = "X Y", .age = 19, .gender = FEMALE}, {.name = "A B", .age = 21, .gender = MALE}, {.name = "C D", .age = 45, .gender = MALE}};
	
	int i;
	for (i = 0; i < sizeof(persons) / sizeof(persons[0]); ++i) {
		printf("%d. person: %s (%d)\n", (i + 1), persons[i].name, persons[i].age);
	}
	
	return 0;
}