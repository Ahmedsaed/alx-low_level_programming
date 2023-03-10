#include <stdio.h>
#include <stdlib.h>

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
	int i, total = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int x = atoi(argv[i]);

		if (x == 0)
		{
			printf("Error\n");
			return (1);
		}

		total += x;
	}

	printf("%d\n", total);

	return (0);
}
