#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: quantity of CLI arguments (args count)
 * @argv: array of keys (args vector)
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) *argv;

	printf("%d\n", argc - 1);

	return (0);
}
