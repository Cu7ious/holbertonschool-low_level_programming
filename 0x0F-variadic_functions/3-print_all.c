#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printchar - prints a char
 * @list: list to print from
 *
 */
void _printchar(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * _printint - prints an int
 * @list: list to print from
 *
 */
void _printint(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * _printfloat - prints a float
 * @list: list to print from
 *
 */
void _printfloat(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * _printstring - prints a string
 * @list: list to print from
 *
 */
void _printstring(va_list list)
{
	char *ptr = va_arg(list, char *);

	if (ptr == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", ptr);
}

/**
 * print_all - prints anything
 * @format: string with types encoded with one letter
 *
 * Description:
 *  c: char,
 *  i: int,
 *  f: float,
 *  s: string
 * Any other characters will be ignore by this function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	print_func fids[] = {
		{"c", _printchar},
		{"i", _printint},
		{"f", _printfloat},
		{"s", _printstring},
		{NULL, NULL}
	};
	va_list args;
	int i = 0, j = 0;
	char *sep = ", ";

	va_start(args, format);

	while (format[i] > '\0')
	{
		j = 0;
		while (fids[j].fid)
		{
			if (format[i] == *fids[j].fid)
			{
				if (format[i + 1] == '\0')
					sep = "";
				else
					sep = ", ";

				printf("%s", sep);
				fids[j].f(args);
			}
			j++;
		}

		i++;
	}

	printf("\n");
	va_end(args);
}
