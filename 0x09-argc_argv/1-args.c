#include <stdio.h>

/**
 *
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	if (argv[1])
		printf("%d\n", argc - 1);
	else
		printf("%d\n", 0);

	return (0);
}
