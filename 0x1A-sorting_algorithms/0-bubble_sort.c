#include "sort.h"

/**
 * bubble_sort - bubble_sort algorithms
 *
 * @array: The array to be sorted
 * @size: The size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t num_sorted = 0;
	int tmp;

	if (array != NULL)
	{
		while (num_sorted < size - 1)
		{
			for (i = 0, num_sorted = 0; i < size - 1; i++)
			{
				if (array[i] > array[i + 1])
				{
					tmp = array[i];
					array[i] = array[i + 1];
					array[i + 1] = tmp;
					print_array(array, size);
				}
				else
					num_sorted++;
			}
		}
	}
}
