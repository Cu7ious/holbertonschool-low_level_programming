#include <stdio.h>

/**
 * array_iterator - applies callback to an array
 * @array: array of ints
 * @size: size of array
 * @action: callback
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
