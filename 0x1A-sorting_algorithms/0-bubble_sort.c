#include "sort.h"

/**
 * bubble_sort - sorts an array with the bubble sort algorithm
 * @array: an array to sort
 * @size: the size of array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int a, b;
	size_t i = 0;
	size_t j = size;

	if (array == NULL || size < 2)
		return;

	while (j)
	{
		for (i = 0; i < j - 1; i++)
			if (i + 1 < j)
			{
				a = array[i];
				b = array[i + 1];

				if (a > b)
				{
					array[i + 1] = a;
					array[i] = b;
				}
			}

		--j;
	}
}
