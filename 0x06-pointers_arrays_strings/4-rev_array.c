#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: array of integers
 * @n: size of array
 *
 * Return: Viod
 */

void reverse_array(int *a, int n)
{
	int i, k;

	for (i = 0, k = n - 1; i < k; i++, k--)
	{
		int tmp = a[i];

		a[i] = a[k];
		a[k] = tmp;
	}
}
