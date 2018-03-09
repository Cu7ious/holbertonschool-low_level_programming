#include "holberton.h"

/**
 * _pow - returns the value of x
 * to the power of y
 * @x: base
 * @y: exp
 *
 * Return: x powered by y
 */
int _pow(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);
	else
		return (x * _pow(x, y - 1));
}

/**
 * _strlen - returns the length of a string
 * @s: poineter
 *
 * Return: the length of a string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != 0)
		i++;

	return (i);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string that represents binary number
 *
 * Return: unsigned int, converted from binary
 */
unsigned int binary_to_uint(const char *b)
{
	int i, len;
	unsigned int res;

	if (!b)
		return (0);

	len = _strlen(b) - 1, res = 0;

	for (i = len; i >= 0; i--)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		res += (b[i] - 48) * _pow(2, (i - len) * -1);
	}

	return (res);
}
