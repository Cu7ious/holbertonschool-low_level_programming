#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i;
	int m;
	int r;

	for (i = 0; i <= 9; i++)
	{
		for (m = 0; m <= 9; m++)
		{
			r = i * m;
			if (r < 10)
			{
				_putchar(r + '0');
			}
			else
			{
				_putchar(r / 10 + '0');
				_putchar(r % 10 + '0');
			}

			if (m == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
