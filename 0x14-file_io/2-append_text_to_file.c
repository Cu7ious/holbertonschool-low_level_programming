#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: the length i of the string s
 */
int _strlen(char *s)
{
	int i = 1;

	if (*s == '\0')
		return (0);

	if (*(s + 1) > '\0')
		i = i + _strlen(s + 1);

	return (i);
}

/**
 * append_text_to_file - ppends a text at the end of a file
 * @filename: the name of the file
 * @text_content: text to add
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, w, len = _strlen(text_content);

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (len == 0)
		return (1);

	w = write(fd, text_content, len);
	if (w == -1)
		return (-1);

	close(fd);
	return (1);
}
