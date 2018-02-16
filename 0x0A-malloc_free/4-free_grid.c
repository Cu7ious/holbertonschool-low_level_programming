#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - free memory of 2-d array
 * @grid: 2-d array
 * @height: the height of 2-d array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
