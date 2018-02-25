#include <stdio.h>
#include <stdarg.h>

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
	va_list valist;
	char *string, *sep;
	int i = 0;

	va_start(valist, format);
	while (format[i] > '\0')
	{
		if (format[i + 1] == '\0')
			sep = "";
		else
			sep = ", ";

		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(valist, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(valist, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(valist, double), sep);
				break;
			case 's':
				string = va_arg(valist, char*);
				if (!string)
					printf("(nil)%s", sep);
				else
					printf("%s%s", string, sep);
				break;
		}
		i++;
	}
	va_end(valist);
	printf("\n");
}
