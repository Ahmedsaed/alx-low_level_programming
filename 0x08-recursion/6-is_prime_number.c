#include "main.h"

/**
 * eval - evaluates whether b is divisable by a or not
 *
 * @a: integer
 * @b: integer
 *
 * Return: Bool
 */
int eval(int a, int b)
{
	if (b % 2 == 0 || b % 3 == 0 || b % a == 0)
		return (false);
	else if (a * a < b)
		return (eval(a + 1, b));
	else
		return (true);
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 *
 * @n: integer
 *
 * Return: integer - 1 if n is prime else 0
 */
int is_prime_number(int n)
{
	if (eval(4, n))
		return (1);
	else
		return (0);
}
