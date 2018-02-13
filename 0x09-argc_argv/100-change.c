#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 *
 * @argc: quantity of CLI arguments (args count)
 * @argv: array of keys (args vector)
 *
 * Return: 0 if no errors, otherwise 1
 */
int main(int argc, char *argv[])
{
	int amount_iterator, count, init, vals_iterator, sum;
	int v[] = {25, 10, 5, 2, 1};

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	init = atoi(argv[1]);
	amount_iterator = init;
	count = 0;
	sum = 0;

	for (vals_iterator = 0; vals_iterator < 5; vals_iterator++)
	{
		if (amount_iterator < v[vals_iterator])
			vals_iterator++;

		while (amount_iterator % v[vals_iterator])
			amount_iterator--;

		count += amount_iterator / v[vals_iterator];
		sum += amount_iterator;
		amount_iterator = init - sum;

		if (amount_iterator == 0)
			break;
	}

	printf("%d\n", count);
}
