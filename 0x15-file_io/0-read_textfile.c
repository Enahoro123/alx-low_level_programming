#include "main.h"

/**
 * read_textfile - Read a text file and print to POSIX stdout
 * @filename: char string of files name
 * @letters: number of letters to read and print
 * Return: number of letters read and printed, or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	r = read(fd, buffer, letters);
	if (r == -1)
		return (0);

	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1 || r != w)
		return (0);
	free(buffer);

	close(fd);
	return (w);
}
