#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - duplicate str in a new memory block
 * @str: string to duplicate
 *
 * Return: Pointer to new memory block of a copy of str
 */
char *_strdup(char *str)
{
	char *p = NULL;
	unsigned int i, size = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] > '\0'; i++)
		size++;

	p = (char *) malloc(size + 1 * sizeof(char));

	if (p != NULL)
	{
		for (i = 0; i < size; i++)
			p[i] = str[i];
	}
	else
		p = NULL;

	return (p);
}
