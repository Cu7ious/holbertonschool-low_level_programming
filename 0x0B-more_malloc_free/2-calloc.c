#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements of each size bytes
 * @size: size of array
 *
 * Return: return pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		p[i] = 0;

	return (p);
}
