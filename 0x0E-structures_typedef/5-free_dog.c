#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free memory of struct dog
 *
 * @d: struct dog
 *
 * Return: Void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
