#include "variadic_functions.h"

/**
 * print_numbers - prints numbers separated by given separator,
 * followed by a new line
 *
 * @separator: char
 * @n: int - number of parameters
 *
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	int i = 0;

	va_start(nums, n);

	for (i = 0; i < (int)n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
