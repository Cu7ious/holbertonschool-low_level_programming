#include <stdio.h>

/**
 * main - root function
 *
 * Return: always 0
 **/
int main(void)
{
	char z;

	for (z = 'z'; z >= 'a'; z--)
	{
		putchar(z);
	}
	putchar('\n');

	return (0);
}
