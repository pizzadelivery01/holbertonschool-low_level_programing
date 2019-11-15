#include "holberton.h"

/**
 * create_file - creates a file and writes  it
 * @filename: file created
 * @text_content: content for file
 *
 * Return: status
 */
int create_file(const char *filename, char *text_content)
{
	int Pcount;
	int fd;
	int len = 0;
	int i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (text_content[i] != '\0')
	{
		len++;
		i++;
	}
	Pcount = write(fd, text_content, len);
	if (Pcount == -1)
	{
		close(fd);
		return (-1);
	}
	if (close(fd) == -1)
		return (-1);
	return (1);
}
