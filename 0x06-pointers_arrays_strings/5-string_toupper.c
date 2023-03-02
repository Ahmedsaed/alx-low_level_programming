#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @s: string
 *
 * Return: A string with all letters uppercase
 */

char *string_toupper(char *s)
{
	char *tmp = s;

	while (*s != '\0')
	{
		if (*s < 97)
			*s += 32;

		s++;
	}

	return (tmp);
}
