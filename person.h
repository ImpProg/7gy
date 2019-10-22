#ifndef __PERSON__
#define __PERSON__

enum Gender {MALE, FEMALE};

struct Person {
	char name[20];
	const int age;
	enum Gender gender;
};

#endif