#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - create array of int from min to max values
 * @min: minimum number for initialization
 * @max: maximum number for initialization
 *
 * Return: pointer to integer array
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; min++, i++)
		p[i] = min;

	return (p);
}
