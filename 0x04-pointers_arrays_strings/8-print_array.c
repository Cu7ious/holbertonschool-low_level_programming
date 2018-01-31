#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * of integers, followed by a new line
 * @a: array of integers
 * @n: lengts of the array
 *
 * Return: nothing.
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
		printf("%s%d", i == 0 ? "" : ", ", a[i]);

	printf("\n");
}
