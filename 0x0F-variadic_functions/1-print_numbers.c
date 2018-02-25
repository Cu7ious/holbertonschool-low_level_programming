#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string with separator for the n numbers, char *
 * @n: variable number of params
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		if (separator)
		{
			if (i != (n - 1))
				printf("%d%s", va_arg(valist, int), separator);
			else
				printf("%d", va_arg(valist, int));
		}
		else
			printf("%d", va_arg(valist, int));
	}

	va_end(valist);

	printf("\n");
}
