#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - pointer to a memory block of 2D array of integers
 * @width: width of 2D array
 * @height: height of 2D array
 *
 * Return: Pointer to 2D array of integers
 */
int **alloc_grid(int width, int height)
{
	int **p = NULL;
	int i, j;

	if (width < 1 && height < 1)
		return (NULL);

	p = (int **)malloc((height) * sizeof(int *));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));

		if (p[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(p[i]);

			free(p);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			p[i][j] = 0;

	return (p);
}
