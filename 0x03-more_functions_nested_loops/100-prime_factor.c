#include <stdio.h>

/**
 * main - prints the largest prime factor
 * of the number 612852475143
 *
 * Return: void
 */
int main(void)
{
	long int i = 2;
	long int n = 612852475143;

	while (n / i != 1)
	{
		while (n % i == 0)
			n = n / i;
		i++;
	}

	printf("%ld", n);
	return (0);
}
