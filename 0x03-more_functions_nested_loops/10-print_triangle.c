#include "holberton.h"

/**
 * printer -  prints symbols to a line
 * @s:ASCII number of a character
 * @n: quantity of symbols to print
 *
 * Return: void
 */
void printer(int s, int n)
{
	while (n > 0)
	{
		_putchar(s);
		n--;
	}
}

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int spaces, hashes;

	if (size > 0)
	{
		hashes = 1;
		while (hashes <= size)
		{
			spaces = size - hashes;

			printer(' ', spaces);
			printer('#', hashes);
			printer('\n', 1);

			hashes++;
		}
	}
	else
		_putchar('\n');
}
