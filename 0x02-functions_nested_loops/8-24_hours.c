#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day
 * of Jack Bauer, starting from 00:00 to 23:59
 *
 * Return: last digit of a number
 */
void jack_bauer(void)
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
