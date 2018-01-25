#include <stdio.h>

/**
 * _printer -  computes and prints fibonacci sequence
 * @n: the number
 * Return: nothing
 */
void _printer(int n)
{
	int i;
	long int fibb1 = 1;
	long int fibb2 = 2;
	long int middle;

	for (i = 1; i <= n; i++)
	{
		middle = fibb1 + fibb2;
		fibb1 = fibb2;
		fibb2 = middle;

		if (i != n)
			printf("%ld, ", middle);
		else
			printf("%ld", middle);
	}
}
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	_printer(50);
	return (0);
}
