#include "holberton.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string
 *
 * Returns: void
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;

	if (*s == '\0')
		return;

	_puts_recursion(s);
}
