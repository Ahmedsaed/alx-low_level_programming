#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: width of 2D array
 * @height: height of 2D array
 *
 * Return: pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int **p, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = (int **)malloc(sizeof(int *) * height);

	if (!p)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = (int *)malloc(sizeof(int) * width);

		if (!p[i])
		{
			for (--i; i >= 0; i--)
				free(p[i]);
			free(p);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}

	return (p);
