#include "search_algos.h"

/**
 * bin_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: input array
 * @beg: beginning of subarray
 * @end: end of subarray
 * @search_value: value to search for
 *
 * Return: returns index of the element or -1
 */
int bin_search(int *array, int beg, int end, int search_value)
{
	int c = 0;
	int p = 0;

	if (end >= beg)
	{
		p = (end + beg) / 2;

		printf("Searching in array: ");
		for (c = beg; c <= end; c++)
			if (c == beg)
				printf("%d", array[c]);
			else
				printf(", %d", array[c]);

		printf("\n");

		if (array[p] == search_value)
			return (p);

		if (array[p] > search_value)
			return (bin_search(array, beg, p - 1, search_value));
		else if (array[p] < search_value)
			return (bin_search(array, p + 1, end, search_value));
	}
	else
	{
		return (-1);
	}

	return (0);
}

/**
 * binary_search - uses a binary search for arrays
 * @array: input array
 * @size: input size of array
 * @value: value to search for
 * Return: index or -1
 */

int binary_search(int *array, size_t size, int value)
{
	int result = 0;

	if (array == NULL)
		return (-1);

	result = bin_search(array, 0, size - 1, value);

	return (result);
}
