#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 *
 * Return: int, 0 means no error
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
