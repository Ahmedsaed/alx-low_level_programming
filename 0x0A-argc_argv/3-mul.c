#include <stdio.h>

/**
 * main - multiplies two numbers
 *
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 if success, otherwise error code
 */

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", (*argv[1] - '0') * (*argv[2] - '0'));

	return 0;
}
