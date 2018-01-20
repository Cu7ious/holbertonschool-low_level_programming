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
	#define HEX_DEC_10 ('\x61')
	#define HEX_DEC_16 ('\x66')

	int dec;
	int hex;

	for (dec = DEC_0; dec <= DEC_9; dec++)
	{
		putchar(dec + '0');
	}

	for (hex = HEX_DEC_10; hex <= HEX_DEC_16; hex++)
	{
		putchar(hex + '\x00');
	}

	putchar('\n');

	return (0);
}
