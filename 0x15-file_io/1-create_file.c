#include "main.h"

/**
 * create_file - create a file using filename containing text_content
 * @filename: name of the file to be created
 * @text_content: content of the file *filename
 * Return: 1 on Success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, werr, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	while (text_content && *(text_content + len))
		len++;
	werr = write(fd, text_content, len);
	close(fd);
	if (werr < 0)
		return (-1);

	return (1);
}
