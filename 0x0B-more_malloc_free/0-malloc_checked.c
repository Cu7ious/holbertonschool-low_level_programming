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

	p = malloc(b);

	if (p == NULL)
		return (NULL);

	return (p);
}
