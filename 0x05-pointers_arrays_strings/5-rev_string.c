#include "main.h"

/**
* rev_string - return reversed string
* @s: string
* Return: Void
*/

void rev_string(char s*)
{
	int i = 0, n = 0, k = 0;

	while (s[n] != '\0')
		n++;

	char tmp[n-1];

	for (i = n - 1; i >= 0; i--)
		tmp[k++] = s[i];

	s = tmp;
}
