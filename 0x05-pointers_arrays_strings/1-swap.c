#include"main.h"

/**
* swap_int - swaps the values of two intgers
* @a: first int
* @b: second int
* Return: Void
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
