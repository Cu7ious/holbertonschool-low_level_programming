#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number which will be converted
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int first = 0;

	mask = 0;
	mask = ~mask;
	mask = mask >> 1;
	mask = ~mask;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask > 0)
		if ((n & mask) == 0)
		{
			if (first == 1)
				_putchar('0');
		}
		else
		{
			_putchar('1');
			first = 1;
		}

		mask = mask >> 1;
}
