#include <stdlib.h>
#include "holberton.h"
/**
 * str_concat - concatenates two strings
 * @s1: string1 to concat first
 * @s2: string2 to concat second
 *
 * Return: pointer to concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *p = NULL;
	int i, j, k = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++);

	for (j = 0; s2[j]; j++);

	p = malloc(i + j + 1 * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (k = 0; s1 && s1[k]; k++)
		p[k] = s1[k];

	p[k] = '\0';

	for (k = 0; s2 && s2[k]; k++)
		p[i + k] = s2[k];

	p[i + k] = '\0';

	return (p);
}
