#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - allocate memory using malloc
 * @b: amount of memory to create
 *
 * Return: pointer to new memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;
	const int ERR_CODE = 98;

	p = malloc(b);

	if (p == NULL)
		exit(ERR_CODE);

	return (p);
}
