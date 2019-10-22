#include<stdio.h>
#include "person.h"

int main() {
	struct Person p = {.name = "X Y", .age = 20, .gender = MALE}; 
	//p.age = 15;
	printf("Person: %s, (%d)\n", p.name, p.age);
	
	return 0;
}