#ifndef DOG_MACRO
#define DOG_MACRO

/**
 * struct dog - dog class
 *
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
#include <stdio.h>

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
