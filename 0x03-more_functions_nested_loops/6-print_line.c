#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: how long the line should be
 *
 * Return: void
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
