#include <stdio.h>

/**
 * main - root function
 *
 * Return: always 0
 **/
int main(void)
{
	int t;
	int s;
	int d;
	int e;

	for (t = 0; t <= 9; t++)
	{
		for (s = 0; s <= 9; s++)
		{
			for (d = 0; d <= 9; d++)
			{
				for (e = 0; e <= 9; e++)
				{
					if ((t < d) || (t == d && s < e))
					{
						putchar(t + '0');
						putchar(s + '0');
						putchar(' ');
						putchar(d + '0');
						putchar(e + '0');

					if (!(t == 9 && s == 8))
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
