#include <stdio.h>

/**
 * fibonacci -  computes and prints fibonacci sequence
 * @n: the number
 * Return: nothing
 */
void fibonacci(int n)
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

		printf("%ld", middle);

		if (i != n)
			printf(", ");
	}
}
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	fibonacci(50);
	return (0);
}
