#include "holberton.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: int number
 * prints (+||-) char sign if non-zero and 0 if zero
 * Return: 1 if n > 1, -0 if n < 0, 0 if zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
	}

	return (0);
}
