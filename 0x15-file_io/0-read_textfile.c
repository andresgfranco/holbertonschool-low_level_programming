#include "holberton.h"
/**
  * read_textfile - reads a text file and prints it to
  * the POSIX standart output
  * @filename: name of file
  * @letters: number of letters
  * Return: actual number of letters it could read and print
  * if the file can not be opened or read, return 0
  * if filename is NULL return 0
**/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	int num_bytes;

	if (filename == NULL || letters == 0)
		return (0);

	buf = malloc(sizeof(char));
	if (buf == NULL)
		return (0);

	buf[letters] = '\0';

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	num_bytes = read(fd, buf, letters);

	write(STDOUT_FILENO, buf, num_bytes);

	close(fd);
	free(buf);
	return (num_bytes);
}
