#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 *
 * Return: the length i of the string s
 */
int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s == '\0')
		return (0);

	if (*(s + 1) > '\0')
		i = i + _strlen_recursion(s + 1);

	return (i);
}
