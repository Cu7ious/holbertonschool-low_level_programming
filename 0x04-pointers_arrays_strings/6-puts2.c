#include "holberton.h"

/**
 * puts2 - prints one char out of 2 of a string,
 * followed by a new line
 * @str: string of characters
 *
 * Return: nothing.
 */
void puts2(char *str)
{
	int length;

	for (length = 0; str[length] != 0; length++)
		if (length % 2 == 0)
			_putchar(str[length]);

	_putchar('\n');
}
