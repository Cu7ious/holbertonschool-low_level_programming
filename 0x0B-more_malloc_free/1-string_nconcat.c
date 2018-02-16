#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - concat string s1 and n chars of s2
 * @s1: first string to concat
 * @s2: second string to concat
 * @n: number of characters to copy from s2 to new string
 *
 * Return: pointer to concat strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len1, len2, res_len, i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	res_len = 0;

	for (len1 = 0; s1[len1]; len1++)
		;

	for (len2 = 0; s2[len2]; len2++)
		;
	if (n > len2)
		len2do = len2;
	else
		len2do = n;

	p = malloc((len1 + len2do + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		p[i] = s1[i];

	for (j = 0; j < len2do; j++)
		p[i + j] = s2[j];
	p[i + j] = '\0';

	return (p);
}
