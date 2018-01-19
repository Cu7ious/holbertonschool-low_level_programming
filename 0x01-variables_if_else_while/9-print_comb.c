#include <stdio.h>

/**
 * main - root function
 *
 * Return: always 0
 **/
int main(void)
{
	#define DEC_0 0
	#define DEC_9 9

	int dec;

	for (dec = DEC_0; dec <= DEC_9; dec++)
	{
		putchar(dec + '0');

		if (dec != DEC_9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
