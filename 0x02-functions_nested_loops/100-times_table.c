#include "holberton.h"

/**
 * _printer - prints spaces & result (private)
 *
 * @p: int number of spaces
 * @s: int result of multiplication
 *
 * Return: nothing
 */
void _printer(int p, int s)
{
	while (p)
	{
		_putchar(' ');
		p--;
	}

	if (s >= 100)
	{
		_putchar(s / 100 + '0');
		_putchar(s % 100 / 10 + '0');
		_putchar(s % 10 + '0');
	}
	else if (s >= 10)
	{
		_putchar(s / 10 + '0');
		_putchar(s % 10 + '0');
	}
	else
	{
		_putchar(s + '0');
	}
}

/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: int number
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int i;
	int ii;
	int result;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (ii = 0; ii <= n; ii++)
		{
			result = i * ii;

			if (result >= 100)
			{
				_printer(1, result);
				if (ii != n)
					_putchar(',');
			}
			else if (result >= 10)
			{
				_printer(2, result);
				if (ii != n)
					_putchar(',');
			}
			else if (ii == 0)
			{
				_printer(0, result);
				if (ii != n)
					_putchar(',');
			}
			else
			{
				_printer(3, result);
				if (ii != n)
					_putchar(',');
			}
		}
		_putchar('\n');
	}
}
