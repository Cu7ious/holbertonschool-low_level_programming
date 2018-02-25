#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: separator for the strings, char *
 * @n: number of ... args, unsigned int
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *string;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(valist, char*);
		string = (string) ? string : "(nil)";

		if (separator)
		{
			if (i != n - 1)
				printf("%s%s", string, separator);
			else
				printf("%s", string);
		}
		else
			printf("%s", string);
	}

	printf("\n");
}
