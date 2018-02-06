#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: 2D array
 * @size: size x size of the square matrix
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int tl_br = 0;
	int tr_bl = 0;
	int square = size * size;

	for (i = 0; i < square; i += size + 1)
	{
		tl_br += a[i];
	}

	for (i = size - 1; i < square - 1; i += size - 1)
	{
		tr_bl += a[i];
	}

	printf("%d, %d\n", tl_br, tr_bl);
}
