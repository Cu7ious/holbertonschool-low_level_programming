#include <stdio.h>
#include <stdlib.h>

/**
 * adder - adds arguments from the list
 * @len:  how many arguments are in the list
 * @list: list of arguments (must be convertable to int)
 *
 * Return: the sum of arguments from the list
 */
int adder(int len, char *list[])
{
	int i;
	int sum = 0;

	for (i = 0; i < len; i++)
	{
		sum += atoi(list[i]);
	}

	return (sum);
}

/**
 * is_num - checks if string contain only digits
 * @s: string to check
 *
 * Return: bool
 */
int is_num(char *s)
{
	while (*s > '\0')
	{
		if (*s == '-')
			s++;

		if (!(*s >= '0' && *s <= '9'))
			return (0);

		s++;
	}

	return (1);
}

/**
 * main - prints the sum of its arguments
 * @argc: quantity of CLI arguments (args count)
 * @argv: array of keys (args vector)
 *
 * Return: 0 if no errors, otherwise 1
 */
int main(int argc, char *argv[])
{
	int i = 1;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	else if (argc > 2)
	{
		while (i < argc)
		{
			if (!is_num(argv[i]))
			{
				printf("Error\n");
				return (1);
			}

			i++;
		}

		printf("%d\n", adder(argc, argv));
		return (0);
	}
}
