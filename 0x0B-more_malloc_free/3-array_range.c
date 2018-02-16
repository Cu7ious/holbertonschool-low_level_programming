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
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; min++, i++)
		ptr[i] = min;

	return (ptr);
}
