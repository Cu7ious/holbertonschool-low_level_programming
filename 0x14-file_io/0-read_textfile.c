#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read/write
 * @letters: how many characters to write
 *
 * Return: the number of written chars or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor, r, w;
	char *buff;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buff = malloc(sizeof(letters));
	if (buff == NULL)
		return (0);

	r = read(file_descriptor, buff, letters);
	if (r == -1)
		return (0);

	w = write(1, buff, r);
	if (w == -1)
		return (0);

	if (r != w)
		return (0);

	free(buff);
	close(file_descriptor);

	return (w);
}
