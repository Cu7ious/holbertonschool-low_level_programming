#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: input array
 * @size: size of array
 * @value: value to search for
 *
 * Return: index ot the elemet or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t c = 0;

	if (array == NULL)
		return (-1);

	for (c = 0; c < size; c++)
	{
		printf("Value checked array[%ld] = [%d]\n", c, array[c]);
		if (value == array[c])
			return (c);
	}

	return (-1);
}
