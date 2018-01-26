#include "holberton.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: the size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int k = size;
	int i;

	if (size <= 0)
		_putchar('\n');
	else
		while (size > 0)
		{
			for (i = 0; i < k; i++)
			{
				_putchar('#');
			}

			_putchar('\n');

			size--;
		}
}
