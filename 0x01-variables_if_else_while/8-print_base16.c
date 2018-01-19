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
	#define HEX_DEC_10 97
	#define HEX_DEC_16 102

	int dec;
	int hex;

	for (dec = DEC_0; dec <= DEC_9; dec++)
	{
		putchar(dec + '0');
	}

	for (hex = HEX_DEC_10; hex <= HEX_DEC_16; hex++)
	{
		putchar(hex + '\0');
	}

	putchar('\n');

	return (0);
}
