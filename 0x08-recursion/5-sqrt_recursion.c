#include "main.h"

/**
 * eval - evaluates whether a squared equals b or not
 *
 * @a: integer
 * @b: integer
 *
 * Return: integer a, the square root of b
 */
int eval(int a, int b)
{
	if (a * a == b)
		return (a);
	else if (a < b)
		return (eval(a + 1, b));
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: integer, number
 *
 * Return: integer, square root if n
 */
int _sqrt_recursion(int n)
{
	return (eval(1, n));
}
