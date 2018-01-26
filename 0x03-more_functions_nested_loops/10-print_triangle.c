#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;
	int pad;

	if (size <= 0)
		_putchar('\n');
	else
		for (i = 0; i < size; i++)
		{
			pad = size - i;
			for (j = 1; j <= size; j++)
			{
				if (j < pad)
					_putchar(' ');
				else
					_putchar('#');
			}

			_putchar('\n');
		}
}
