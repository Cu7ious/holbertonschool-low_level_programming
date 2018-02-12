#include <stdio.h>
/**
 * main - prints its name, followed by a new line
 * @argc: quantity of CLI arguments (aka keys)
 * @argv: array of keys
 *
 * Return: 0 if susscess, 1 if error
 */
int main(int argc, char *argv[])
{
	char *name = argv[0];

	if (argc)
	{
		while (*name > '\0')
		{
			putchar(*name);
			name++;
		}

		putchar('\n');

		return (0);
	}

	return (1);
}
