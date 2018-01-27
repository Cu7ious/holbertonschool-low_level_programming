#include "holberton.h"

/**
 * printer - prints the line of numbers
 * followed by a new line
 * @n: the length of a line
 *
 * Return: void
 */
void printer(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i > 9)
			_putchar(i / 10 + '0');

		_putchar(i % 10 + '0');
	}
	_putchar('\n');
}

/**
 * more_numbers - 10 times the numbers, from 0 to 14
 * followed by a new line
 *
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		printer(14);
		i++;
	}
}
