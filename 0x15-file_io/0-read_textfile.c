#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: The name of the file
 * @letters: The number of letters it should read and print
 * Return: always 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, s, t;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	s = read(fd, buf, letters);
	if (s < 0)
	{
		free(buf);
		return (0);
	}
	buf[s] = '\0';

	close(fd);

	t = write(STDOUT_FILENO, buf, s);
	if (t < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (t);
}
