#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @s: string
 *
 * Return: pointer to a string
 */

char *leet(char *s)
{
	int i = 0, j = 0;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[j] == s[i])
				s[i] == b[j];
		}
	}

	return (s);
}
