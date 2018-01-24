#include "holberton.h"

/**
 * print_last_digit - prints the sign of a number
 *
 * @n: int number
 * Return: last digit of a number
 */
void jack_bauer()
{
	int h;
	int m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			if (h < 10)
			{
				_putchar('0');
    			_putchar(h + '0');
			}
			else if (h >= 10)
			{
				_putchar(h / 10 + '0');
				_putchar((h % 10) + '0');
			}

			_putchar(':');

			if (m < 10)
			{
				_putchar('0');
    			_putchar(m + '0');
			}
			else if (m >= 10)
			{
				_putchar(m / 10 + '0');
				_putchar((m % 10) + '0');
			}

			_putchar('\n');
		}
	}
}
