#include "holberton.h"

/**
 * main - the main function
 *
 * Return: always 0
 */
int main(void)
{
	#define WORD_LENGTH 8
	int i;
	char h[] = "Holberton";

	for (i = 0; i <= WORD_LENGTH; i++)
	{
		_putchar(h[i]);
	}

	_putchar('\n');

	return (0);
}
