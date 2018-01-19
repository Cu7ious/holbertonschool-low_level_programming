#include <stdio.h>

/**
 * main - root function
 *
 * Return: always 0
 **/
int main(void)
{
	#define BEGINNING 0
	#define END 99
	#define STEP 10

	int i;
	int ones;
	int decs;

	ones = 0;
	decs = 0;

	for (i = BEGINNING; i <= END; i++)
	{
		if (i / STEP == decs + 1)
		{
			decs++;
		}

		if (ones >= STEP) {
			ones = 0;
		}

		putchar(decs + '0');
		putchar(ones + '0');

		if (i != END)
		{
			putchar(',');
			putchar(' ');
			ones++;
		}
	}

	putchar('\n');

	return (0);
}
