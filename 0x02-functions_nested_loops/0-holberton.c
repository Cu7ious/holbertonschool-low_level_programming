#include "holberton.h"
#include <string.h>

/**
 * main - the main function
 * Returns: always 0
 */
int main(void)
{
	char h[9] = "Holberton";
	unsigned int i;

	for (i = 0; i <= strlen(h); i++)
	{
		_putchar(h[i]);
	}

	_putchar('\n');

	return (0);
}
