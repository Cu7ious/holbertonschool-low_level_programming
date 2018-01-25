#include <stdio.h>

/**
 * _printer -  computes and prints the sum of all the multiples
 * of 3 or 5 below the certain (excluded)
 * @n: the number
 * Return: nothing
 */
void _printer(int n)
{
	int i;
	int sum = 0;

	for (i = 0; i < n; i++)
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;

	printf("%d\n", sum);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	_printer(1024);
	return (0);
}
