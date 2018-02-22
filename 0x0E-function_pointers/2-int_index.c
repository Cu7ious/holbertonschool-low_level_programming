#include <stdlib.h>

/**
 * int_index - searches for an integer inside a given array
 * @array: the array of ints
 * @size: the size of the array
 * @cmp: the callback
 *
 * Return: the search result, int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int res;
	const int NOT_FOUND = -1;

	if (array == NULL || cmp == NULL || size <= 0)
		return (NOT_FOUND);

	while (i < size)
	{
		res = cmp(array[i]);

		if (res)
			return (i);

		i++;
	}

	return (NOT_FOUND);
}
