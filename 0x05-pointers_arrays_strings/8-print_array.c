#include "main.h"

/**
* print_array - print array elements
*
* @a: array pointer
* @n: array size
* Return: Void
*/

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		_putchar(a[i]);
		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	
	_putchar('\n');
}
