#include "main.h"

/*
* puts_half - print half string
* @str: string
* Return: Void
*/

void puts_half(char *str)
{
	int i = 0, n = 0, start = 0;;

	while (str[n] != '\0')
		n++;

	if (n % 2 == 1)
		start = (n - 1) / 2;
	else
		start = n / 2;

	for (i = start; i < n; i++)
		_putchar(str[i]);

	_putchar('\n');
}
