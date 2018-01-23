#include "holberton.h"

/**
 * main - the main function
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	char h[] = "Holberton";

	for (i = 0; i <= 8; i++)
	{
		_putchar(h[i]);
	}

	_putchar('\n');

	return (0);
}
