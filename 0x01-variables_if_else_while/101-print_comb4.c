#include <stdio.h>

/**
 * main - root function
 *
 * Return: always 0
 **/
int main(void)
{
	int h;
	int t;
	int o;

	for (h = 0; h <= 9; h++)
		for (t = 0; t <= 9; t++)
			if (t > h)
				for (o = 0; o <= 9; o++)
					if (o > t)
					{
					if (!(
						h == 0
						&& t == 1
						&& o == 2
						))
					{
						putchar(',');
						putchar(' ');
					}
					putchar(h + '0');
					putchar(t + '0');
					putchar(o + '0');
					}

	putchar('\n');

	return (0);
}
