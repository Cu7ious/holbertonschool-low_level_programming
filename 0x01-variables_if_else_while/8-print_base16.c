#include <stdio.h>

/**
 * main - root function
 *
 * Return: always 0
 **/
int main(void)
{
	int hex;

	for (hex=0x00; hex <= 15; hex++)
	{
		printf("%x", hex);
	}
	/* putchar('\n'); */

	return (0);
}
