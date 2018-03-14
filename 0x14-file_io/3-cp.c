#include "holberton.h"

/**
 * err_98 - exit 98
 * @d: descriptor
 *
 * Return: void
 */
void err_98(char *d)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", d);
	exit(98);
}

/**
 * err_99 - exit 99
 * @d: descriptor
 *
 * Return: void
 */
void err_99(char *d)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", d);
	exit(99);
}

/**
 * err_100 - exit 100
 * @d: descriptor
 *
 * Return: void
 */
void err_100(int d)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d);
	exit(100);
}

/**
 * main - copies the content of one file to anoter
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *buffer[1024];
	int fd, file_from, file_to, w, close_common;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		err_98(argv[1]);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		err_99(argv[2]);

	do {
		fd = read(file_from, buffer, 1024);
		if (fd == -1)
			err_98(argv[1]);

		w = write(file_to, buffer, fd);

		if (w == -1)
			err_99(argv[2]);

	} while (fd == 1024);

	close_common = close(file_from);
	if (close_common == -1)
		err_100(file_from);
	close_common = close(file_to);

	if (close_common == -1)
		err_100(file_to);

	return (0);
}
