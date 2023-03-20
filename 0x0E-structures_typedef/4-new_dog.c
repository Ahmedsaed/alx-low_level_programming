#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new struct dog
 *
 * @name: string - name
 * @age: float - age
 * @owner: string - owner
 *
 * Return: pointer to struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (!name || !owner || !dog)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
