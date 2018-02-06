#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string
 * @accept: pointer to the string of searched bytes
 *
 * Return: length of the prefix
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k, len = 0;
	char seps[] = {
		' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'
	};

	for (i = 0; s[i] > '\0'; i++)
	{
		for (k = 0; seps[k] > '\0'; k++)
		{
			if (s[i] == seps[k])
			return (len);
		}

		for (j = 0; accept[j] > '\0'; j++)
		{
			if (s[i] == accept[j])
				len++;
		}
	}

	return (len);
}
