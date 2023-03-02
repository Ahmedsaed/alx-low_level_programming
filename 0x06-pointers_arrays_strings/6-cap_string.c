#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @s: string
 *
 * Return: A formatted string
 */

char *cap_string(char *s)
{
	int i = 0, j;
	char a[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
				s[i] -= 32;
			else
			{
				for (j = 0; j < 12; j++)
				{
					if (a[j] == s[i - 1])
						s[i] -= 32;
				}
			}
		}
	}

	return (s);
}
