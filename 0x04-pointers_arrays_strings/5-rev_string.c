#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: string
 *
 * Return: nothing.
 */
void rev_string(char *s)
{
	int length = 0;
	int i      = 0;
	int temp;

	while (s[length] != 0)
		length++;

	for (i = 0; i < --length; i++)
	{
		temp = s[i];
		s[i] = s[length];
		s[length] = temp;
	}
}
