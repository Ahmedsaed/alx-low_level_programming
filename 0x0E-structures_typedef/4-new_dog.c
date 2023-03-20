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
	int name_length = 0, owner_length = 0, i = 0;
	dog_t *dog = malloc(sizeof(dog_t));

	if (name == NULL || owner == NULL || dog == NULL)
		return (NULL);

	while (name[name_length] != '\0')
		name_length++;

	dog->name = malloc(sizeof(char) * ++name_length);

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (i = 0; i < name_length; i++)
		dog->name[i] = name[i];

	dog->age = age;

	while (owner[owner_length] != '\0')
		owner_length++;

	dog->owner = malloc(sizeof(char) * ++owner_length);

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i < owner_length; i++)
		dog->owner[i] = owner[i];

	return (dog);
}
