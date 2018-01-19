#include <stdio.h>

/**
 * main - root function
 *
 * Return: always 0
 **/
int main(void)
{
	int Bob_Marley;

	for (Bob_Marley = 0; Bob_Marley <= 9; Bob_Marley++)
	{
		putchar(Bob_Marley + '0');
	}
	putchar('\n');

	return (0);
}
