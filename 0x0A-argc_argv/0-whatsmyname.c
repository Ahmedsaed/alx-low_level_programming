#include "main.h"

/**
 * main - prints program name
 *
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: int, 0 if success otherwise error number
 */
int main(int argc, char *argv[])
{
	char *name = argv[0];

	while (*name != '\0')
	{
		_putchar(*name);
		name++;
	}

	return (0);
}
