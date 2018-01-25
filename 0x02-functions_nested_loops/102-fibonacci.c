#include <stdio.h>

/**
 * _printer -  computes and prints fibonacci sequence
 * @n: the number
 * Return: nothing
 */
void _printer(int n)
{
	int i;
	int fibb = 2;

	for (i = 1; i <= n; i++)
	{
		fibb += i;

		if (i != n)
			printf("%d, ", fibb);
		else
			printf("%d", fibb);
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
