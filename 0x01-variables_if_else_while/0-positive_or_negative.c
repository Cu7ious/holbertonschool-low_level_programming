#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - The Entry point
 *
 * returns: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0) {
		printf("%i is positive", n);
	} else {
		printf("%i is negative", n);
	}

	return (0);
}
