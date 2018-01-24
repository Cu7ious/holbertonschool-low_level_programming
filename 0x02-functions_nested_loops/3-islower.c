#include "holberton.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: ASCII character
 * Return: 1 if lowercase, 0 if not lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
