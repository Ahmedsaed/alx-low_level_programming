#include "main.h"

/**
* puts_half - prints half of a string
* @str: char to check
*
* Return: 0 is success
*/

void puts_half(char *str)
{
	int i = 0, n = 0, start = 0;

	while (str[n] != '\0')
		n++;

	if (n % 2 == 1)
		start = (n - 1) / 2;
	else
		start = n / 2;

	for (i = n - start; i < n; i++)
		_putchar(str[i]);

	_putchar('\n');
}
