#include "main.h"

/*
* puts_half - print half string
* @str: string
* Return: Void
*/

void puts_half(char *str)
{
	int i = 0, n = 0;

	while (str[n] != '\0')
		n++;

	for (i = n / 2; i < n; i++)
		_putchar(str[i]);

	_putchar('\n');
}
