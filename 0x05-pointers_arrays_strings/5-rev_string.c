#include "main.h"

/**
* rev_string - return reversed string
* @s: string
* Return: Void
*/

void rev_string(char *s)
{
	int i = 0, n = 0, k = 0;
	char ch;

	while (s[n] != '\0')
		n++;

	for (i = n - 1; i >= 0 && k < i; i--)
	{
		ch = s[k];
		s[k++] = s[i];
		s[i] = ch;
	}
}
