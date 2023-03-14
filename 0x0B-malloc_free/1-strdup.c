#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory, 
 * which contains a copy of the string given as a parameter
 *
 * @str: pointer to a string
 *
 * Return: pointer to the new duplicate
 */

char *_strdup(char *str)
{
	char *p;
	int i = 0;

	if (!str)
		return (NULL);

	while (str[i] != '\0')
		i++;

	p = (char *)malloc(sizeof(char) * i);
	i = 0;

	if (!p)
		return (NULL);

	while (str[i] != '\0')
		p[i] = str[++i];

	return (p);
}
