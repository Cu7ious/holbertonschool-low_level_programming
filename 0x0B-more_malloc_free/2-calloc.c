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
	char *p;
	unsigned int a;
	void *tmp;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	p = malloc(nmemb * size);
	tmp = p;

	if (p == 0)
		return (NULL);

	for (a = 0; a < (nmemb * size); a++)
		p[a] = 0;

	return (tmp);
}
