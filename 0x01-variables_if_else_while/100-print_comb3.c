#include <stdio.h>

/**
 * main - root function
 *
 * Return: always 0
 **/
int main(void)
{
	int t; /* tens */
	int o; /* ones */

	for (t = 0; t <= 9; t++)
		for (o = 0; o <= 9; o++)
			if (o > t)
			{
				if (!(t == 0 && o == 1))
				{
					putchar(',');
					putchar(' ');
				}

				putchar(t + '0');
				putchar(o + '0');
			}

	return (0);
}
