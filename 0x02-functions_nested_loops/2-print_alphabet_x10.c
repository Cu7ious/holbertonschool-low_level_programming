#include "holberton.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet
 * 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int a;
	int ten = 10;

	while (ten)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');

		ten--;
	}
}
