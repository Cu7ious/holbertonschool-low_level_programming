#include "holberton.h"

/**
 * _isalpha- checks for alphabetical chars
 *
 * @c: ASCII character
 * Return: 1 if [A-Za-z], 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);

	return (0);
}
