#include "holberton.h"

/**
 * print_last_digit - prints the sign of a number
 *
 * @n: int number
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
	int result;

	if (n > 0)
	{
		result = n % 10;
	}
	else if (n < 0)
	{
		result = (-1 * n) % 10;
	}
	else
	{
		result = 0;
	}

	_putchar(result + '0');
	return (result);
}
