#include "main.h"

/**
 * read_textfile - reads a text file to the standard output
 * @filename: said filename
 * @letters: number of bits to read.
 * Return: total  bits of char printed or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	read(fd, buf, letters);
	buf[letters] = '\0';

	return (write(1, buf, letters));
}
