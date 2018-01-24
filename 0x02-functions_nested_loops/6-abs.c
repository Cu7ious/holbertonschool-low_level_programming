#include "holberton.h"

/**
 * _abs - prints the sign of a number
 *
 * @n: int number
 * Return: absolute value of an integer
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1 * n);
	}

	return (0);
}
