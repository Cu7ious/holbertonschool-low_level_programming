#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - core function of the "calc" program
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: exit status, int. 0 == OK
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	if (*argv[2] != '+'
	    && *argv[2] != '-'
	    && *argv[2] != '*'
	    && *argv[2] != '/'
	    && *argv[2] != '%')
	{
		printf("Error\n");
		return (99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%')
	    && *argv[3] == '0')
	{
		printf("Error\n");
		return (100);
	}

	result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", result);
	return (0);
}
