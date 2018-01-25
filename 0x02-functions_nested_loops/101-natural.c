#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int t = 0;
	int f = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
			t += i;

		if (i % 5 == 0
			&& i % 3 != 0)
			f += i;
	}

	printf("%d\n", t + f);

    return (0);
}
