#include "main.h"

/**
* print_rev - print string in reverse order
* @s: string
* Return: Void
*/

void print_rev(char *s)
{
	int i = 0, n = 0;
	
	while (s[n] != '\0')
		n++;

	for (i = n - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
