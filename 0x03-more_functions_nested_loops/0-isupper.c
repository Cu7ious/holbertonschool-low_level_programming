#include "holberton.h"

/**
 * _isupper - checks for uppercase character
 * @c: character number
 *
 * Return: 1 if Uppercase, else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
