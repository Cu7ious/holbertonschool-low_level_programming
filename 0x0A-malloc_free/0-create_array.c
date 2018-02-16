#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create char array and init it with a specific char
 * @size: the size of the memory to print
 * @c: char to init values to
 *
 * Return: pointer to array
 */
 char *create_array(unsigned int size, char c)
{
	char *p = NULL;
	unsigned int i;


	if (size > 0)
	{
		p = (char *)malloc(size * sizeof(char));

		if (p == NULL)
			return (NULL);

		for (i = 0; i < size; i++)
			p[i] = c;
	}
	else
		return (NULL);

	return (p);
}
