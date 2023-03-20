#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: struct dog instance
 * @name: string - name
 * @age: float - age
 * @owner: string - dog owner
 *
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
