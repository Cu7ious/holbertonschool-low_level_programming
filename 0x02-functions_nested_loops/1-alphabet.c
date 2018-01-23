#include "holberton.h"

/**
 * print_alphabet - prints lowercase alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}

	_putchar('\n');
}
