#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: variable unmber of args, int
 *
 * Return: sum of all params, int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	unsigned int sum = 0;

	if (n == sum)
		return (sum);

	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
