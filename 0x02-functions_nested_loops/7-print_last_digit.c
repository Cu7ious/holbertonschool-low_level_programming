#include "holberton.h"

/**
 * print_last_digit - prints the sign of a number
 *
 * @n: int number
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
	int result = n % 10;

	if (n < 0)
		result = result * -1;

	_putchar(result + '0');
	return (result);
}
