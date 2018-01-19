#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int lastNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastNum = n % 10;

	if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastNum);
	else if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastNum);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastNum);

	return (0);
}
