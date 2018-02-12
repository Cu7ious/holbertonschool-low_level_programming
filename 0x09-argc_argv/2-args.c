#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: quantity of CLI arguments (args count)
 * @argv: array of keys (args vector)
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
