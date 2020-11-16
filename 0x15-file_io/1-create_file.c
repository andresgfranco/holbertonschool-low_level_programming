#include "holberton.h"

/**
 * create_file - create a file and write in the file
 * @filename: it's the name of the file
 * @text_content: the text to add in the file created
 *
 * Return: 1 or -1 in case it fails
**/
int create_file(const char *filename, char *text_content)
{
	int fd = 0, len = 0, len_wr = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
		{}
	}

	len_wr = write(fd, text_content, len);
	if (len_wr < 0)
		return (-1);
	close(fd);
	return (1);
}
