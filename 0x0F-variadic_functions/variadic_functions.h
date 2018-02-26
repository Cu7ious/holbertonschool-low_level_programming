#ifndef _variadic_functions_h_
#define _variadic_functions_h_

#include <stdarg.h>

/**
 * struct func_type - structure for the print function
 * @fid: type identifier
 * @f: function for the @fid
 */
typedef struct func_type
{
	char *fid;
	void (*f)(va_list);
} print_func;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
