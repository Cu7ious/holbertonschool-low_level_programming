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
	int length = 0;

	while (str[length] != 0)
	{
		if (str[length] % 2 == 0)
			_putchar(str[length]);

		length++;
	}

	_putchar('\n');
}
