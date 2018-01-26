#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: how long the line should be
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int k = 0;
	int i;

	if (n <= 0)
		_putchar('\n');
	else
		while (n > 0)
		{
			for (i = 1; i < k; i++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');

			k++;
			n--;
		}
}
