#include "sort.h"

/**
 * selection_sort - Sort an array using selection sort algorithm
 * @array: input array
 * @size: size of array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	int turn = 0;
	size_t i = 0, j = 0, min = 0;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min])
				min = j;

		if (min != i)
		{
			turn = array[i];
			array[i] = array[min];
			array[min] = turn;

			print_array(array, size);
		}
	}
}
