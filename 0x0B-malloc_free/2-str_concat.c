#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0;
	char *p;

	while (s1 != NULL && s1[i] != '\0')
		i++;

	while (s2 != NULL && s2[j] != '\0')
		j++;

	p = (char *)malloc(sizeof(char) * i + sizeof(char) * j + 1);

	if (!p)
		return (NULL);

	for (k = 0; k < i; k++)
		p[k] = s1[k];

	for (k = 0; k <= j; k++)
		p[k + i] = s2[k];

	return (p);
}
