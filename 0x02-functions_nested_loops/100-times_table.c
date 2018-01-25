#include <stdio.h>

/**
 *print_times_table - prints the n times table, starting with 0
 *
 * @n: int number
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int i;
	int ii;
	int result;
	char comma;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (ii = 0; ii <= n; ii++)
		{
			result = i * ii;
			comma = (ii != n) ? ',' : '\0';

			if (result >= 100)
				printf(" %d%c", result, comma);
			else if (result >= 10)
				printf("  %d%c", result, comma);
			else if (ii == 0)
				printf("%d%c", result, comma);
			else
				printf("   %d%c", result, comma);
		}
		putchar('\n');
	}
}
