#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * word_len - find length of first word after index
 * @s: string to evaluate
 * @index: index to start looking for word
 *
 * Return: find length of word
 */
int word_len(char *s, int index)
{
	int i, len = 0, found = 0;

	for (i = index; s[i]; i++)
	{
		if (s[i] != ' ')
		{
			len++;
			found = 1;
		}
		else if (s[i] == ' ' && found)
			break;
	}

	return (len);
}

/**
 * words_count - count number of words in string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int words_count(char *s)
{
	int i, is_word, num = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
			is_word	= 0;
		else
		{
			if (is_word == 0)
				num++;

			is_word = 1;
		}
	}

	return (num);
}

/**
 * strtow - splits a string into words
 * @str: string to evaluate
 *
 * Return: pointer to array of chars
 */
char **strtow(char *str)
{
	char **p = NULL;
	int i, j, x, y;
	int l = 0;
	int words = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	words = words_count(str);
	p = malloc(words + 1 * sizeof(char *));

	if (p == NULL)
		return (NULL);

	p[words] = NULL;
	x = 0;

	for (i = 0; str[i]; i++)
		if (str[i] != ' ')
		{
			l = word_len(str, i);
			if (x < words)
			{
				p[x] = malloc((l + 1) * sizeof(char));

				if (p[x] == NULL)
				{
					while (x >= 0)
						free(p[--x]);

					free(p);
					return (NULL);
				}

				x++;
			}

			i = i + l;
		}

	x = 0;
	while (x < words)
		for (j = 0; str[j] && (str[j] == ' '); j++);

		y = 0;

		for (i = j; str[i] && (str[i] != ' '); i++)
			p[x][y++] = str[i];

		p[x][y] = '\0';
		j = j + y;

		x++;

	return (p);
}
